# microclimate.network Documentation

## microclimate.network Inbound Data API

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

JSON Input Data Format Example:

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


## microclimate.network TTN HTTP Integration API

Access Key: default key (devices)(messages)

URL: http://microclimate.network/ttn/

Method: POST

Authorization: (empty)

Custom Header Name: (empty)

Custom Header Value: (empty)

## microclimate.node Data Payload

The mc.node One is using the following 12B Payload format:

https://github.com/microclimatenet/microclimate.network/blob/master/mc_node_one_payload.h


## microclimate.node TTN Payload Data Decoder

microclimate.network TTN Application uses the following TTN Payload Decoder:

https://github.com/microclimatenet/microclimate.network/blob/master/mc_node_ttn_payload_decoder.js


## microclimate.network Outbound Data API

Outbound Data API is based on the HTTP Integration. Please contact us at info@microclimate.network to enable integration to your platform URL for each microclimate.node based on the DeviceEUI (hardware_serial).

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

JSON Output Data Format Example:

> {
>
> "dev_id":"Temperature_Sensor_001","hardware_serial":"0030951CF0055712",
>
> "payload_fields":{"Temperature":21.55 "Humidity":55.60, "AirPressure":1023},
>
> "metadata":{"time":"2018-10-04T09:51:42.036017563Z", "latitude":46.23505,"longitude":14.518397}
>
> }

