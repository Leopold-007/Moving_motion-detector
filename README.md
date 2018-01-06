# Motion detector

This is a project to test motion detectors for detecting moving people.

## Motion detectors

- [Dopper sensor: NJR4265 J1](http://akizukidenshi.com/catalog/g/gK-07776/)
- [Pressure sensor: FSR406](http://akizukidenshi.com/catalog/g/gP-04158/)
- [Hall sensor: A1324LUA-T](http://akizukidenshi.com/catalog/g/gI-07014/)

## Architecture

Physical
```
 [Sensor]--AnalogIn--[PIC16F1825]--UART--[FTDI]--USB--[RasPi]
 
 [Sensor module]--UART--[FTDI]--USB--[RasPi]
```

Logical
```
Raw data <--->[serial-mqtt bridge]<--MQTT-->[mosquitto]<--MQTT over WebSocket-->[SPA/AngularJS/HTML5/Chrome]
```
