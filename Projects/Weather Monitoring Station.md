# Weather Monitoring Station
Device that stays outside recording weather conditions including temperature, humidity, and rain. It sends these conditions over bluetooth at a regular interval

## Hardware
- Arduino Nano / MSP430
- Temperature / Humidity Sensor
- Rain Sensor
- Bluetooth Serial

## Hardware Setup
- TODO: Link to schematic

## Libraries Used
1. SoftwareSerial - https://www.arduino.cc/en/Reference/softwareSerial

## loop() Pseudocode
1. Read temperature, humidty and rain sensors.
2. Transmit them over bluetooth at a regular interval

## Ask-an-Expert
You may consult with a facilitator to help you solve a problem three times at no penalty. After three times, you will no longer have priority, so use them wisely.

## Scoring
### Sensors (50 points possible)
- Temperature / Humidity Sensor - 20 Points
- Rain Sensor - 10 Points
- Bluetooth Serial - 20 Points

### Progress (60 points possible)
- Setup Arduino / Energia Project - 10 points
- Wiring - 10 Points
- Record temperature, humidity, rain level - 20 Points
- Send readings over Bluetooth - 10 Points
- Bonus: Create algorithm to predict whether it will rain or not based on temperature / humidity - 10 Points

### Other
- Completion - 20 Points
- Documenting next steps to improve device/robot - Up to 20 Points
- Originality / Innovation - Up to 20 points (mostly reserved for custom projects)
