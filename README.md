# microclimate.network API Specification

## microclimate.network Data Inbound API

http://microclimate.network/api/v1/

JSON Input Data Format:

> {
>
> "dev_id":"DEVICE_NAME", "hardware_serial":"DEVICE_EUI",
>
> "payload_fields":{"Temperature":TEMPERATURE, "Humidity":HUMIDITY, "AirPressure":AIR_PRESSURE},
>
> "metadata":{"time":"TIMESTAMP", "latitude":LATITUDE,"longitude":LONGITUDE}
>
> }

JSON Data Format Example:

> {
>
> "dev_id":"Temperature_Sensor_001","hardware_serial":"0030951CF0055712",
>
> "payload_fields":{"Temperature":21.55 "Humidity":55.60, "AirPressure":1023},
>
> "metadata":{"time":"2018-10-04T09:51:42.036017563Z", "latitude":46.23505,"longitude":14.518397}
>
> }

Note: Additional JSON parameters are allowed and they are ignored.


## microclimate.node Data Payload

The mc.node One is using the following 12B Payload format:

https://github.com/microclimatenet/microclimate.network/blob/master/mc_node_one_payload.h


## microclimate.node TTN Payload Data Decoder

microclimate.network TTN Application uses the following TTN Payload Decoder:

https://github.com/microclimatenet/microclimate.network/blob/master/mc_node_ttn_payload_decoder.js
