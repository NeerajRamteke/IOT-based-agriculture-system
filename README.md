
# IoT-Based Agriculture System

## Project Description
The IoT-Based Agriculture System is designed to
monitor soil moisture and environmental conditions
and support automatic irrigation.

## Components Used
- ESP8266 NodeMCU
- Soil Moisture Sensor
- DHT11 Temperature and Humidity Sensor
- Relay Module
- DC Water Pump
- Power Supply

## Working Principle
1. The soil moisture sensor measures soil conditions.
2. ESP8266 processes the sensor readings.
3. DHT11 monitors temperature and humidity.
4. The controller compares soil moisture with a
   predefined threshold.
5. The relay controls the irrigation pump.
6. Sensor readings can be monitored through Blynk
   when the communication feature is configured.

## Pin Connections
- Soil Moisture Sensor: A0
- DHT11: D2
- Relay: D1

Verify all connections with the actual circuit.

## Software Requirements
- Arduino IDE
- ESP8266 Board Package
- DHT Sensor Library
- Blynk Library (if Blynk integration is used)

## Quality Assurance
Testing will cover:
- Soil moisture detection
- Relay switching
- DHT11 readings
- Wi-Fi and Blynk communication

## Author
Neeraj Ramteke
PRN: 202301070024
Division: A
