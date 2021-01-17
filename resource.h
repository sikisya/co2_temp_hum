#define NIXIE_WIDTH 23
#define NIXIE_HEIGHT 38
#define TITLE_LOGO_WIDTH 128
#define TITLE_LOGO_HEIGHT 64
#define CO2_ICON_WIDTH 20
#define CO2_ICON_HEIGHT 15
#define CELSIUS_ICON_WIDTH 9
#define CELSIUS_ICON_HEIGHT 10
#define PERCENT_ICON_WIDTH 9
#define PERCENT_ICON_HEIGHT 10
#define THERMOMETER_WIDTH 12
#define THERMOMETER_HEIGHT 16
#define HYGROMETER_WIDTH 12
#define HYGROMETER_HEIGHT 16

const uint8_t nixie [][114] PROGMEM = {
  {
    // 0
    0x80, 0xFF, 0x00, 0xE0, 0xE3, 0x03, 0xF0, 0x80, 0x07, 0x78, 0x00, 0x0F,
    0x3C, 0x00, 0x1E, 0x3C, 0x00, 0x1E, 0x3E, 0x00, 0x3E, 0x1E, 0x00, 0x3C,
    0x1E, 0x00, 0x3C, 0x1E, 0x00, 0x3C, 0x1E, 0x00, 0x3C, 0x1F, 0x00, 0x7C,
    0x1F, 0x00, 0x7C, 0x1F, 0x00, 0x7C, 0x0F, 0x00, 0x78, 0x0F, 0x00, 0x78,
    0x0F, 0x00, 0x78, 0x0F, 0x00, 0x78, 0x0F, 0x00, 0x78, 0x0F, 0x00, 0x78,
    0x0F, 0x00, 0x78, 0x0F, 0x00, 0x78, 0x0F, 0x00, 0x78, 0x0F, 0x00, 0x78,
    0x1F, 0x00, 0x7C, 0x1F, 0x00, 0x7C, 0x1F, 0x00, 0x7C, 0x1E, 0x00, 0x3C,
    0x1E, 0x00, 0x3C, 0x1E, 0x00, 0x3C, 0x1E, 0x00, 0x3C, 0x3E, 0x00, 0x3E,
    0x3C, 0x00, 0x1E, 0x3C, 0x00, 0x1E, 0x78, 0x00, 0x0F, 0xF0, 0x80, 0x07,
    0xE0, 0xE3, 0x03, 0x80, 0xFF, 0x00
  },
  {
    // 1
    0x00, 0x1C, 0x00, 0x00, 0x1C, 0x00, 0x00, 0x1C, 0x00, 0x00, 0x1C, 0x00,
    0x00, 0x1C, 0x00, 0x00, 0x1C, 0x00, 0x00, 0x1C, 0x00, 0x00, 0x1C, 0x00,
    0x00, 0x1C, 0x00, 0x00, 0x1C, 0x00, 0x00, 0x1C, 0x00, 0x00, 0x1C, 0x00,
    0x00, 0x1C, 0x00, 0x00, 0x1C, 0x00, 0x00, 0x1C, 0x00, 0x00, 0x1C, 0x00,
    0x00, 0x1C, 0x00, 0x00, 0x1C, 0x00, 0x00, 0x1C, 0x00, 0x00, 0x1C, 0x00,
    0x00, 0x1C, 0x00, 0x00, 0x1C, 0x00, 0x00, 0x1C, 0x00, 0x00, 0x1C, 0x00,
    0x00, 0x1C, 0x00, 0x00, 0x1C, 0x00, 0x00, 0x1C, 0x00, 0x00, 0x1C, 0x00,
    0x00, 0x1C, 0x00, 0x00, 0x1C, 0x00, 0x00, 0x1C, 0x00, 0x00, 0x1C, 0x00,
    0x00, 0x1C, 0x00, 0x00, 0x1C, 0x00, 0x00, 0x1C, 0x00, 0x00, 0x1C, 0x00,
    0x00, 0x1C, 0x00, 0x00, 0x1C, 0x00
  },
  {
    // 2
    0x00, 0x3E, 0x00, 0xC0, 0xFF, 0x01, 0xE0, 0xFF, 0x03, 0xF8, 0xC1, 0x0F,
    0x78, 0x00, 0x0F, 0x1C, 0x00, 0x1C, 0x1E, 0x00, 0x3C, 0x0E, 0x00, 0x38,
    0x0F, 0x00, 0x78, 0x07, 0x00, 0x70, 0x07, 0x00, 0x70, 0x00, 0x00, 0x70,
    0x00, 0x00, 0x70, 0x00, 0x00, 0x78, 0x00, 0x00, 0x38, 0x00, 0x00, 0x3C,
    0x00, 0x00, 0x1F, 0x00, 0x80, 0x1F, 0x00, 0xE0, 0x07, 0x00, 0xF8, 0x03,
    0x00, 0xFE, 0x00, 0x80, 0x3F, 0x00, 0xC0, 0x0F, 0x00, 0xF0, 0x03, 0x00,
    0xF0, 0x01, 0x00, 0xF8, 0x00, 0x00, 0x7C, 0x00, 0x00, 0x3C, 0x00, 0x00,
    0x1E, 0x00, 0x00, 0x1E, 0x00, 0x00, 0x0E, 0x00, 0x00, 0x0F, 0x00, 0x00,
    0x0F, 0x00, 0x00, 0x07, 0x00, 0x00, 0x07, 0x00, 0x00, 0xFF, 0xFF, 0x7F,
    0xFF, 0xFF, 0x7F, 0xFF, 0xFF, 0x7f
  },
  {
    // 3
    0xFF, 0xFF, 0x3F, 0xFF, 0xFF, 0x3F, 0xFF, 0xFF, 0x3F, 0x00, 0x00, 0x3C,
    0x00, 0x00, 0x3E, 0x00, 0x00, 0x1F, 0x00, 0x80, 0x0F, 0x00, 0xC0, 0x07,
    0x00, 0xE0, 0x03, 0x00, 0xF0, 0x01, 0x00, 0xF8, 0x00, 0x00, 0x7C, 0x00,
    0x00, 0x3E, 0x00, 0x00, 0x1E, 0x00, 0x00, 0x3E, 0x00, 0x00, 0xFE, 0x00,
    0x00, 0xFC, 0x03, 0x00, 0xE0, 0x07, 0x00, 0x80, 0x0F, 0x00, 0x00, 0x1E,
    0x00, 0x00, 0x1C, 0x00, 0x00, 0x3C, 0x00, 0x00, 0x38, 0x00, 0x00, 0x78,
    0x00, 0x00, 0x70, 0x00, 0x00, 0x70, 0x00, 0x00, 0x70, 0x00, 0x00, 0x70,
    0x07, 0x00, 0x78, 0x07, 0x00, 0x38, 0x0F, 0x00, 0x3C, 0x0E, 0x00, 0x1C,
    0x1E, 0x00, 0x1E, 0x7C, 0x80, 0x0F, 0xF8, 0xE1, 0x07, 0xF0, 0xFF, 0x03,
    0xC0, 0xFF, 0x00, 0x00, 0x3F, 0x00
  },
  {
    // 4
    0x00, 0x80, 0x01, 0x00, 0xC0, 0x01, 0x00, 0xE0, 0x01, 0x00, 0xE0, 0x01,
    0x00, 0xF0, 0x01, 0x00, 0xF0, 0x01, 0x00, 0xF8, 0x01, 0x00, 0xFC, 0x01,
    0x00, 0xFC, 0x01, 0x00, 0xDE, 0x01, 0x00, 0xCE, 0x01, 0x00, 0xCF, 0x01,
    0x80, 0xC7, 0x01, 0x80, 0xC3, 0x01, 0xC0, 0xC3, 0x01, 0xC0, 0xC1, 0x01,
    0xE0, 0xC1, 0x01, 0xF0, 0xC0, 0x01, 0x70, 0xC0, 0x01, 0x78, 0xC0, 0x01,
    0x38, 0xC0, 0x01, 0x3C, 0xC0, 0x01, 0x1E, 0xC0, 0x01, 0x0E, 0xC0, 0x01,
    0x0F, 0xC0, 0x01, 0x07, 0xC0, 0x01, 0x07, 0xC0, 0x01, 0xFF, 0xFF, 0x7F,
    0xFF, 0xFF, 0x7F, 0xFF, 0xFF, 0x7F, 0x00, 0xC0, 0x01, 0x00, 0xC0, 0x01,
    0x00, 0xC0, 0x01, 0x00, 0xC0, 0x01, 0x00, 0xC0, 0x01, 0x00, 0xC0, 0x01,
    0x00, 0xC0, 0x01, 0x00, 0xC0, 0x01
  },
  {
    // 5
    0xF0, 0xFF, 0x3F, 0xF0, 0xFF, 0x3F, 0xF0, 0xFF, 0x3F, 0x78, 0x00, 0x00,
    0x78, 0x00, 0x00, 0x38, 0x00, 0x00, 0x38, 0x00, 0x00, 0x3C, 0x00, 0x00,
    0x3C, 0x00, 0x00, 0x3C, 0x00, 0x00, 0x1C, 0x00, 0x00, 0x1E, 0x00, 0x00,
    0x1E, 0x00, 0x00, 0x1E, 0x00, 0x00, 0x0E, 0x3F, 0x00, 0xCE, 0xFF, 0x00,
    0xFE, 0xFF, 0x03, 0xFE, 0xE1, 0x07, 0x7E, 0x80, 0x0F, 0x1C, 0x00, 0x1E,
    0x00, 0x00, 0x1C, 0x00, 0x00, 0x3C, 0x00, 0x00, 0x38, 0x00, 0x00, 0x78,
    0x00, 0x00, 0x70, 0x00, 0x00, 0x70, 0x00, 0x00, 0x70, 0x00, 0x00, 0x70,
    0x07, 0x00, 0x78, 0x07, 0x00, 0x38, 0x0F, 0x00, 0x3C, 0x0E, 0x00, 0x1C,
    0x1E, 0x00, 0x1E, 0x7C, 0x80, 0x0F, 0xF8, 0xE1, 0x07, 0xF0, 0xFF, 0x03,
    0xC0, 0xFF, 0x00, 0x00, 0x3F, 0x00
  },
  {
    // 6
    0x00, 0xE0, 0x01, 0x00, 0xE0, 0x01, 0x00, 0xF0, 0x00, 0x00, 0xF0, 0x00,
    0x00, 0x78, 0x00, 0x00, 0x78, 0x00, 0x00, 0x3C, 0x00, 0x00, 0x1E, 0x00,
    0x00, 0x1E, 0x00, 0x00, 0x0F, 0x00, 0x00, 0x0F, 0x00, 0x80, 0x07, 0x00,
    0x80, 0x07, 0x00, 0xC0, 0x03, 0x00, 0xE0, 0x01, 0x00, 0xE0, 0x7F, 0x00,
    0xF0, 0xFF, 0x01, 0xF0, 0xFF, 0x03, 0xF8, 0xE3, 0x0F, 0xFC, 0x80, 0x0F,
    0x3C, 0x00, 0x1E, 0x1E, 0x00, 0x3C, 0x1E, 0x00, 0x3C, 0x0F, 0x00, 0x78,
    0x0F, 0x00, 0x78, 0x07, 0x00, 0x70, 0x07, 0x00, 0x70, 0x07, 0x00, 0x70,
    0x0F, 0x00, 0x78, 0x0F, 0x00, 0x78, 0x1E, 0x00, 0x3C, 0x1E, 0x00, 0x3C,
    0x3C, 0x00, 0x1E, 0xF8, 0x80, 0x0F, 0xF8, 0xE3, 0x0F, 0xE0, 0xFF, 0x03,
    0xC0, 0xFF, 0x01, 0x00, 0x7F, 0x00
  },
  {
    // 7
    0xFF, 0xFF, 0x7F, 0xFF, 0xFF, 0x7F, 0xFF, 0xFF, 0x7F, 0x00, 0x00, 0x38,
    0x00, 0x00, 0x38, 0x00, 0x00, 0x38, 0x00, 0x00, 0x1C, 0x00, 0x00, 0x1C,
    0x00, 0x00, 0x0E, 0x00, 0x00, 0x0E, 0x00, 0x00, 0x07, 0x00, 0x00, 0x07,
    0x00, 0x00, 0x07, 0x00, 0x80, 0x03, 0x00, 0x80, 0x03, 0x00, 0xC0, 0x01,
    0x00, 0xC0, 0x01, 0x00, 0xE0, 0x00, 0x00, 0xE0, 0x00, 0x00, 0xE0, 0x00,
    0x00, 0x70, 0x00, 0x00, 0x70, 0x00, 0x00, 0x38, 0x00, 0x00, 0x38, 0x00,
    0x00, 0x1C, 0x00, 0x00, 0x1C, 0x00, 0x00, 0x1C, 0x00, 0x00, 0x0E, 0x00,
    0x00, 0x0E, 0x00, 0x00, 0x07, 0x00, 0x00, 0x07, 0x00, 0x80, 0x03, 0x00,
    0x80, 0x03, 0x00, 0x80, 0x03, 0x00, 0xC0, 0x01, 0x00, 0xC0, 0x01, 0x00,
    0xE0, 0x00, 0x00, 0xE0, 0x00, 0x00
  },
  {
    // 8
    0x00, 0x7F, 0x00, 0xC0, 0xFF, 0x01, 0xE0, 0xFF, 0x03, 0xF0, 0xC1, 0x07,
    0x78, 0x00, 0x0F, 0x3C, 0x00, 0x1E, 0x1C, 0x00, 0x1C, 0x1E, 0x00, 0x3C,
    0x0E, 0x00, 0x38, 0x0E, 0x00, 0x38, 0x0E, 0x00, 0x38, 0x1E, 0x00, 0x3C,
    0x1C, 0x00, 0x1C, 0x3C, 0x00, 0x1E, 0x78, 0x00, 0x0F, 0xF0, 0xC1, 0x07,
    0xE0, 0xFF, 0x03, 0xC0, 0xFF, 0x01, 0xE0, 0xFF, 0x03, 0xF8, 0xC1, 0x0F,
    0x78, 0x00, 0x0F, 0x1C, 0x00, 0x1C, 0x1E, 0x00, 0x3C, 0x0E, 0x00, 0x38,
    0x0E, 0x00, 0x38, 0x07, 0x00, 0x70, 0x07, 0x00, 0x70, 0x07, 0x00, 0x70,
    0x07, 0x00, 0x70, 0x0E, 0x00, 0x38, 0x0E, 0x00, 0x38, 0x1E, 0x00, 0x3C,
    0x1C, 0x00, 0x1C, 0x78, 0x00, 0x0F, 0xF8, 0xC1, 0x0F, 0xE0, 0xFF, 0x03,
    0xC0, 0xFF, 0x01, 0x00, 0x3E, 0x00
  },
  {
    // 9
    0x00, 0x7F, 0x00, 0xC0, 0xFF, 0x01, 0xE0, 0xFF, 0x03, 0xF8, 0xE3, 0x0F,
    0xF8, 0x80, 0x0F, 0x3C, 0x00, 0x1E, 0x1E, 0x00, 0x3C, 0x1E, 0x00, 0x3C,
    0x0F, 0x00, 0x78, 0x0F, 0x00, 0x78, 0x07, 0x00, 0x70, 0x07, 0x00, 0x70,
    0x07, 0x00, 0x70, 0x0F, 0x00, 0x78, 0x0F, 0x00, 0x78, 0x1E, 0x00, 0x3C,
    0x1E, 0x00, 0x3C, 0x3C, 0x00, 0x1E, 0xF8, 0x80, 0x1F, 0xF8, 0xE3, 0x0F,
    0xE0, 0xFF, 0x07, 0xC0, 0xFF, 0x07, 0x00, 0xFF, 0x03, 0x00, 0xC0, 0x03,
    0x00, 0xE0, 0x01, 0x00, 0xF0, 0x00, 0x00, 0xF0, 0x00, 0x00, 0x78, 0x00,
    0x00, 0x78, 0x00, 0x00, 0x3C, 0x00, 0x00, 0x3C, 0x00, 0x00, 0x1E, 0x00,
    0x00, 0x0F, 0x00, 0x00, 0x0F, 0x00, 0x80, 0x07, 0x00, 0x80, 0x07, 0x00,
    0xC0, 0x03, 0x00, 0xC0, 0x03, 0x00
  }
};

const uint8_t title_logo [] PROGMEM = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x8F, 0x03,
    0x01, 0x01, 0x00, 0x00, 0x00, 0x00, 0x30, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x9F, 0xFF, 0x03, 0x81, 0x03, 0x07, 0x00, 0x00, 0x78, 0x00,
    0x0E, 0x00, 0x00, 0x00, 0x00, 0x00, 0xDF, 0x7F, 0x83, 0x99, 0x07, 0x0F,
    0x80, 0x01, 0x78, 0x00, 0x1E, 0x1C, 0x00, 0x00, 0x00, 0x00, 0xFE, 0x7B,
    0xF3, 0xF9, 0x07, 0x7E, 0x80, 0x61, 0x78, 0x0C, 0xFF, 0x3C, 0x00, 0x00,
    0x00, 0x00, 0xC6, 0xFF, 0xF3, 0xFB, 0x07, 0x70, 0x80, 0xE1, 0xFF, 0x1F,
    0xCF, 0xFC, 0x01, 0x00, 0x00, 0x80, 0xEF, 0x81, 0xF3, 0xF3, 0x3E, 0xF0,
    0x8C, 0xE1, 0x00, 0x1C, 0xFF, 0xBF, 0x01, 0x00, 0x00, 0x00, 0xFF, 0x7F,
    0xE0, 0x73, 0x1C, 0x36, 0x9F, 0x71, 0x1C, 0x1C, 0xE6, 0xFF, 0x01, 0x00,
    0x00, 0x00, 0xCE, 0xC0, 0xC1, 0x7F, 0x0E, 0x3F, 0x9F, 0xF1, 0xFC, 0x0D,
    0xDC, 0x81, 0x00, 0x00, 0x00, 0x00, 0x82, 0x77, 0xC0, 0xFC, 0x17, 0xF0,
    0xBF, 0x71, 0x60, 0x00, 0xE0, 0xFF, 0x00, 0x00, 0x00, 0x00, 0xDF, 0xFF,
    0x40, 0x00, 0x00, 0x30, 0xBF, 0x61, 0x77, 0x00, 0xF0, 0x8C, 0x00, 0x00,
    0x00, 0x80, 0xCF, 0xE7, 0xC0, 0x9C, 0x3F, 0xF0, 0xBF, 0x81, 0x77, 0x00,
    0x7C, 0x10, 0x00, 0x00, 0x00, 0x00, 0x80, 0xFF, 0xF0, 0x3F, 0x3C, 0x3C,
    0xBB, 0x81, 0xF3, 0x00, 0x3F, 0x60, 0x00, 0x00, 0x00, 0x00, 0x80, 0x9F,
    0xF9, 0xFE, 0x38, 0x3C, 0x91, 0x81, 0xF3, 0x03, 0xF8, 0xFC, 0x00, 0x00,
    0x00, 0x00, 0xC0, 0xDF, 0x3B, 0xFE, 0x1F, 0xFA, 0x81, 0xC0, 0x3F, 0x00,
    0xF8, 0xFF, 0x01, 0x00, 0x00, 0x00, 0x20, 0xFF, 0x03, 0x9C, 0x01, 0x12,
    0x80, 0xC1, 0x3F, 0x00, 0xB8, 0xCF, 0x00, 0x00, 0x00, 0x00, 0x10, 0x5F,
    0x00, 0x9E, 0x01, 0xFB, 0x81, 0xC1, 0xF1, 0x00, 0x9C, 0xCD, 0x00, 0x00,
    0x00, 0x00, 0x08, 0x8F, 0x03, 0x8E, 0x31, 0x99, 0xE1, 0xE0, 0x01, 0x07,
    0xFC, 0x7C, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0F, 0x00, 0x00, 0x3F, 0x00,
    0x00, 0xE0, 0x00, 0x38, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x70, 0x00, 0x00, 0x00, 0x00, 0xC0, 0x01, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x9F, 0xE7, 0x03, 0x38, 0x7E, 0x3E, 0x1F, 0x0F, 0xE0, 0x30,
    0x9B, 0xF9, 0x00, 0x00, 0x00, 0x80, 0xDF, 0xEF, 0x07, 0x38, 0x7E, 0xBF,
    0xBF, 0x1F, 0xE0, 0x30, 0x9B, 0xFD, 0x01, 0x00, 0x00, 0x80, 0xC1, 0x0C,
    0x06, 0x1C, 0x18, 0x83, 0xB5, 0x19, 0x70, 0x30, 0x9B, 0xAD, 0x01, 0x00,
    0x00, 0x80, 0xC1, 0xCC, 0x07, 0x1C, 0x18, 0x8F, 0xB5, 0x19, 0x70, 0xF0,
    0x9B, 0xAD, 0x01, 0x00, 0x00, 0x80, 0xC1, 0xEC, 0x03, 0x0E, 0x18, 0x8F,
    0xB5, 0x19, 0x38, 0xF0, 0x9B, 0xAD, 0x01, 0x00, 0x00, 0x80, 0xC1, 0x6C,
    0x00, 0x0E, 0x18, 0x83, 0xB5, 0x1F, 0x38, 0x30, 0x9B, 0xAD, 0x01, 0x00,
    0x00, 0x80, 0xC1, 0x6C, 0x00, 0x07, 0x18, 0x83, 0xB5, 0x0F, 0x1C, 0x30,
    0x9B, 0xAD, 0x01, 0x00, 0x00, 0x80, 0xDF, 0xEF, 0x07, 0x07, 0x18, 0xBF,
    0xB5, 0x01, 0x1C, 0x30, 0xFB, 0xAD, 0x01, 0x00, 0x00, 0x00, 0x9F, 0xE7,
    0x87, 0x03, 0x18, 0xBE, 0xB1, 0x01, 0x0E, 0x30, 0xF3, 0xAC, 0x01, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00
};

const uint8_t co2_icon [] PROGMEM = {
    0x00, 0x0F, 0x00, 0xC0, 0x30, 0x00, 0x38, 0xC0, 0x01, 0x26, 0xC6, 0x07,
    0x3A, 0xC9, 0x07, 0x3B, 0xC9, 0x0F, 0x3B, 0x49, 0x0E, 0x3B, 0xC9, 0x0D,
    0x3B, 0xC9, 0x0E, 0x3B, 0x49, 0x0F, 0x3A, 0x49, 0x04, 0x26, 0xC6, 0x07,
    0x38, 0xC0, 0x01, 0xC0, 0x30, 0x00, 0x00, 0x0F, 0x00
};

const uint8_t thermometer_icon [] PROGMEM = {
    0xF0, 0x00, 0x08, 0x01, 0xF4, 0x02, 0x34, 0x02, 0xF4, 0x02, 0x34, 0x02,
    0xF4, 0x02, 0x94, 0x02, 0x92, 0x04, 0x0A, 0x05, 0x05, 0x0A, 0x05, 0x0A,
    0x0A, 0x05, 0xF2, 0x04, 0x0C, 0x03, 0xF0, 0x00
};

const uint8_t hygrometer_icon [] PROGMEM = {
    0x60, 0x00, 0x90, 0x00, 0x68, 0x01, 0x68, 0x01, 0xF4, 0x02, 0xF4, 0x02,
    0xFA, 0x05, 0xFA, 0x05, 0xFD, 0x0A, 0x3D, 0x0A, 0x0D, 0x0A, 0x05, 0x0A,
    0x0A, 0x05, 0xF2, 0x04, 0x0C, 0x03, 0xF0, 0x00
};

const uint8_t celsius_icon [] PROGMEM = {
    0xE2, 0x00, 0xB5, 0x01, 0x35, 0x00, 0x32, 0x00, 0x30, 0x00, 0x30, 0x00,
    0x30, 0x00, 0x30, 0x00, 0xB0, 0x01, 0xE0, 0x00
};

const uint8_t percent_icon [] PROGMEM = {
    0x8E, 0x00, 0xDB, 0x00, 0x7B, 0x00, 0x2E, 0x00, 0x30, 0x00, 0x18, 0x00,
    0xE8, 0x00, 0xBC, 0x01, 0xB6, 0x01, 0xE2, 0x00
};
