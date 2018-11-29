# microclimate.network APIs Specification

## Inbound API

> http://microclimate.network/api/v1/

JSON Data Format:

> {
> "dev_id":"DEVICE_NAME", "hardware_serial":"DEVICE_EUI",
> "payload_fields":{"Temperature":TEMPERATURE, "Humidity":HUMIDITY, "AirPressure":AIR_PRESSURE},
> "metadata":{"time":"2018-10-04T09:51:42.036017563Z, "latitude":46.13505,"longitude":14.918397}
> }



## TTN Payload Data Decoder
Go to "TTN -> Applications -> MY_APPLICATION_NAME -> Payload Formats -> decoder"

Add the following code (example for two float variables):

> function Decoder(bytes) {
>
>  var temperature100 = (bytes[0] << 8) | bytes[1];
>
>  var humidity100 = (bytes[2] << 8) | bytes[3];
>
>  return { temperature: temperature100 / 100.0, humidity: humidity100 / 100.0 };
>
> }
