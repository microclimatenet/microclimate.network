#define PACKET_SIZE 12

typedef struct sensorData_t{
  uint8_t   stat;   // Status
  int8_t    t1;     // Temperature
  uint8_t   t01;    // Temperature Decimal
  int8_t    h1;     // Humidity
  uint8_t   h01;    // Humidity Decimal
  uint16_t  ap;     // Air Pressure
  int8_t    acc;    // Acceleration (0 - 100 %)
  uint16_t  vdd;    // Battery Voltage
  int8_t    tc1;    // Temperature MCU
  uint8_t   tc01;   // Temperature MCU Decimal
};
