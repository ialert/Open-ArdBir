// sensor and lcd
OneWire ds(16);
OneWire ds1(17);
LiquidCrystal lcd(11, 10, 12, 13, 14, 15);

// push buttons
const char Button_dn    = 18;
const char Button_up    = 19;
const char Button_enter = 20;
const char Button_start = 21;

// outputs
const byte Pump = 28;
const byte Buzz = 23;
const byte Heat = 29;
const byte HeatError = 22;

const int Sensor_Pin1 = A0;
const int Sensor_Pin2 = A1;
unsigned int Sensitivity = 66;
