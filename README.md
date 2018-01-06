# Motion detector

This is a project to demonstrate motion detectors for detecting moving people.

## Motivation

I must develop an IoT prototype to detect people moving around in a room.

## Motion detectors

I often go shopping at [Akizuki-Denshi](http://akizukidenshi.com/) in Akihabara, Tokyo. The company sells sensors at low prices. Thanks a lot to Akizuki-Denshi! The copany has been saveing my life!

- [Doppler sensor: NJR4265 J1](http://akizukidenshi.com/catalog/g/gK-07776/)
- [Pressure sensor: FSR406](http://akizukidenshi.com/catalog/g/gP-04158/)
- [Hall sensor: A1324LUA-T](http://akizukidenshi.com/catalog/g/gI-07014/)

## Architecture

Physical
```
 [Sensor]--AnalogIn--[PIC16F1825]--UART--[FTDI]--USB--[RasPi]--WiFi--[Tablet or PC]
 
 [Sensor module]--UART--[FTDI]--USB--[RasPi]--WiFi--[Tablet or PC]
```

Logical
```
Raw data <--->[serial-mqtt bridge]<--MQTT-->[mosquitto]<--MQTT over WebSocket-->[SPA/AngularJS/HTML5/Chrome]
```

## "serialport" package

I have been owing this "serialport" package a lot for IoT prototyping since 2016: https://www.npmjs.com/package/serialport

Thanks a lot to the developers of the package.

I must admit that JavaScript/Node.js is the best language for rapid IoT prototyping, since I have been using it for IoT prototyping at work since 2016, even though I personally prefer Python over JavaScript.

## MQTT over WebSocket

MQTT is MUST for IoT prototyping. I have even been using MQTT on HTML5.
- [Obtaining mosquitto with WebSockets enabled](https://xperimentia.com/2015/08/20/installing-mosquitto-mqtt-broker-on-raspberry-pi-with-websockets/)
- [Building browserMqtt.js](https://github.com/mqttjs/MQTT.js/)

## Making full screen for Android

I often use Android tablets for demonstrating an IoT prototype. Here is a tip to makeing a HTML5 page fulsucreen on Android: https://developer.chrome.com/multidevice/android/installtohomescreen

## AngularJS

I know about TypeScript and Angular2, but I stick to [AngularJS](https://angularjs.org/). I choose AngularJS over Angular2 for IoT prototyping for a lot of reasons.

