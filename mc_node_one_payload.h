//            _                     _ _                 _                    _                      _    
//  _ __ ___ (_) ___ _ __ ___   ___| (_)_ __ ___   __ _| |_ ___   _ __   ___| |___      _____  _ __| | __
// | '_ ` _ \| |/ __| '__/ _ \ / __| | | '_ ` _ \ / _` | __/ _ \ | '_ \ / _ \ __\ \ /\ / / _ \| '__| |/ /
// | | | | | | | (__| | | (_) | (__| | | | | | | | (_| | ||  __/_| | | |  __/ |_ \ V  V / (_) | |  |   < 
// |_| |_| |_|_|\___|_|  \___/ \___|_|_|_| |_| |_|\__,_|\__\___(_)_| |_|\___|\__| \_/\_/ \___/|_|  |_|\_\
//
// All rights reserved. microclimate.network, 2018.

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
