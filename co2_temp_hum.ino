#include <cmath>
#include <SoftwareSerial.h>
#include <DHT.h>
#include <U8g2lib.h>
#include "resource.h"

// PIN define
#define MHZ19B_RX_PIN 0
#define MHZ19B_TX_PIN 1
#define DHT_DATA_PIN 2
#define OLED_SDA_PIN 4
#define OLED_SCL_PIN 5
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
U8G2_SSD1306_128X64_NONAME_F_SW_I2C display(U8G2_R0, OLED_SCL_PIN, OLED_SDA_PIN);

void draw_nixie(const int x, const int y, const int number) {
  // max 9999
  int num = number;
  if (num > 9999) {
    num = 9999;
  }

  // count digit
  int digit = 1;
  {
    int tmp = num;
    while (tmp /= 10) {
      digit++;
    }
  }

  // draw
  while (digit) {
    int tmp = std::pow(10, digit - 1);
    int n = num / tmp;
    display.drawXBMP(x + ((NIXIE_WIDTH + 1) * (4 - digit)), y, NIXIE_WIDTH, NIXIE_HEIGHT, nixie[n]);
    num %= tmp;
    digit--;
  }
}

void calibrate_zero_point() {
  MH_Z19B.write(set_zero, sizeof(set_zero));
  Serial.println("calibrate!");
}

void setup() {
  MH_Z19B.begin(9600);
  Serial.begin(9600);
  dht.begin();

  display.begin();
  display.clearBuffer();

  display.setDrawColor(1);
  display.drawXBMP(0, 0, TITLE_LOGO_WIDTH, TITLE_LOGO_HEIGHT, title_logo);
  display.sendBuffer();

  delay(2000);

  attachInterrupt(CALIBRATION_PIN, calibrate_zero_point, RISING);
}

void loop() {
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
  Serial.print(temperature);
  Serial.println("℃");

  // OLED output
  {
    display.clearBuffer();

    String temp_val(temperature);
    String hum_val(humidity);
    char co2_val[6];
    sprintf(co2_val, "%5d", ppm);

    // alert
    if (ppm > 2000) {
      display.setDrawColor(1);
      display.drawBox(0, 0, SCREEN_WIDTH, SCREEN_HEIGHT);
      display.setDrawColor(0);
    }
    else {
      display.setDrawColor(1);
    }

    // CO2
    draw_nixie(4, 4, ppm);
    display.drawXBMP(104, 8, CO2_ICON_WIDTH, CO2_ICON_HEIGHT, co2_icon);
    display.setFont(u8g2_font_lastapprenticebold_tr);
    display.drawStr(102, 42, "PPM");

    // hr
    display.drawHLine(1, 46, SCREEN_WIDTH);

    // Temp & Hum
    {
      display.setFont(u8g2_font_crox4t_tn);

      // Temp
      display.drawXBMP(0, 48, THERMOMETER_WIDTH, THERMOMETER_HEIGHT, thermometer_icon);
      display.drawStr(13, 63, temp_val.c_str());
      display.drawXBMP(53, 53, CELSIUS_ICON_WIDTH, CELSIUS_ICON_HEIGHT, celsius_icon);

      display.drawLine(64, 48, 64, 63);

      // Hum
      display.drawXBMP(66, 48, HYGROMETER_WIDTH, HYGROMETER_HEIGHT, hygrometer_icon);
      display.drawStr(79, 63, hum_val.c_str());
      display.drawXBMP(119, 53, PERCENT_ICON_WIDTH, PERCENT_ICON_HEIGHT, percent_icon);
    }
    display.sendBuffer();
  }

  delay(5000);
}
