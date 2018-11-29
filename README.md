# microclimate.network APIs Specification

## Inbound API

> http://microclimate.network/api/v1/

JSON Data Format:

> {
> "dev_id":"DEVICE_NAME", "hardware_serial":"DEVICE_EUI",
> "payload_fields":{"Temperature":TEMPERATURE, "Humidity":HUMIDITY, "AirPressure":AIR_PRESSURE},
> "metadata":{"time":"TIMESTAMP", "latitude":LATITUDE,"longitude":LONGITUDE}
> }

JSON Data Format Example:

> {
> "dev_id":"Temperature_Sensor_001","hardware_serial":"0030951CF0055712",
> "payload_fields":{"Temperature":21.55 "Humidity":55.60, "AirPressure":1023},
> "metadata":{"time":"2018-10-04T09:51:42.036017563Z", "latitude":46.23505,"longitude":14.518397}
> }

Note: Additional JSON parameters are allowed and they are ignored.


## microclimate.node Data Payload

The mc.node One is using the following Payload format:

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


## microclimate.node TTN Payload Data Decoder

>function Decoder(bytes) {
>
>  var I1 = bytes[0];
>  var T1 = bytes[1];
>  var T01 = bytes[2];
>  var H1 = bytes[3];
>  var H01 = bytes[4];
>  var AP1 = (bytes[6] << 8) | bytes[5];
>  var ACC1 = bytes[7];
>  var VBAT = (bytes[9] << 8) | bytes[8];
>  var TC1 = bytes[10];
>  var TC01 = bytes[11];
>  
>  return {
>    Temperature: T1 + T01 / 100.0,
>    Humidity: H1 + H01 / 100.0,
>    AirPressure: AP1 /10,
>    Acceleration: ACC1,
>    CPU_temperature: TC1 + TC01 / 100.0,
>    Battery: VBAT /100,
>    Info: I1
>  };
>}
