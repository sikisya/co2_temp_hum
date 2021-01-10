#include <SoftwareSerial.h>
#include "DHT.h"
#include <Adafruit_GFX.h>
#include <Adafruit_SSD1306.h>

// PIN define
#define MHZ19B_RX_PIN 0
#define MHZ19B_TX_PIN 1
#define DHT_DATA_PIN 2
#define CALIBRATION_PIN 6

#define DHT_TYPE DHT22

#define OLED_ADDRESS 0x3C
#define SCREEN_WIDTH 128
#define SCREEN_HEIGHT 64

// Request Message (MH-Z19B)
byte request_co2[] = {
  0xff, 0x01, 0x86, 0x00, 0x00, 0x00, 0x00, 0x00, 0x79
};
byte set_zero[] = {
  0xff, 0x01, 0x87, 0x00, 0x00, 0x00, 0x00, 0x00, 0x78
};

// Temp Hum Sensor
DHT dht(DHT_DATA_PIN, DHT_TYPE);

// CO2 Sensor
SoftwareSerial MH_Z19B(MHZ19B_RX_PIN, MHZ19B_TX_PIN);

// OLED Display
Adafruit_SSD1306 display = Adafruit_SSD1306(SCREEN_WIDTH, SCREEN_HEIGHT, &Wire);

void calibrate_zero_point() {
  MH_Z19B.write(set_zero, sizeof(set_zero));
  Serial.println("calibrate!");
}

void setup() {
  MH_Z19B.begin(9600);
  Serial.begin(9600);

  display.begin(SSD1306_SWITCHCAPVCC, OLED_ADDRESS);
  display.display();
  delay(1000);
  display.clearDisplay();
  display.display();
  
  display.setTextSize(1);
  display.setTextColor(SSD1306_WHITE);
  
  dht.begin();

  attachInterrupt(CALIBRATION_PIN, calibrate_zero_point, RISING);
}

void loop() {
  delay(2000);

  // Get CO2 
  byte responseMessage[9] = {0};
  MH_Z19B.write(request_co2, sizeof(request_co2));
  MH_Z19B.readBytes(responseMessage, sizeof(responseMessage));
  int ppm = (responseMessage[2] * 256) + responseMessage[3];

  // Get Temp & Hum
  auto temperature = dht.readTemperature();
  auto humidity = dht.readHumidity();

  // Serial Monitor output
  Serial.print("CO2: ");
  Serial.print(ppm);
  Serial.print("ppm, Hum: ");
  Serial.print(humidity);
  Serial.print("%, Temp: ");
  //Serial.print("Temp: ");
  Serial.print(temperature);
  Serial.println("℃");

  // OLED output
  display.clearDisplay();
  display.setCursor(0, 0);
  String temp_val = " Temp: ";
  String hum_val =  " Hum:  ";
  String co2_val =  " CO2:  ";
  temp_val.concat(temperature);
  hum_val.concat(humidity);
  co2_val.concat(ppm);
  display.println("--- Sensor ---");
  display.println(temp_val);
  display.println(hum_val);
  display.println(co2_val);
  display.display();
}
