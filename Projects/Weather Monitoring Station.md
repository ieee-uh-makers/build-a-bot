# Weather Monitoring Station
Device that stays outside recording weather conditions including temperature, humidity, and rain.

## Options

### Bluetooth Serial
The measurements are sent wirelessly over bluetooth to a computer

### LCD
The conditions are displayed on an LCD

## Hardware Used
- Breadboard & Jumper Cables
- Arduino Nano / MSP430
- Temperature / Humidity Sensor
- Rain Sensor
- Bluetooth Option: Bluetooth Serial
- LCD Option: LCD

## Hardware Setup
- TODO: Link to schematic

## Libraries Used
1. Bluetooth Option: SoftwareSerial for the Bluetooth Serial - https://www.arduino.cc/en/Reference/softwareSerial
2. LCD Option: LCD - TODO

## loop() Pseudocode
1. Read temperature, humidity and rain sensors.
2. Transmit them over bluetooth at a regular interval

## Ask-an-Expert
You may consult with a facilitator to help you solve a problem three times at no penalty. After three times, you will no longer have priority, so use them wisely.

## Scoring
### Sensors
- Points are given once the sensors are demonstrated working with your project.
- Points: https://github.com/ieee-uh-makers/build-a-bot/blob/master/Projects/Sensors.md

### Progress (60 points possible)
- Setup Arduino / Energia Project - 10 points
- Wiring - 10 Points
- Record temperature, humidity, rain level - 20 Points
- Send readings over bluetooth or display them on the LCD - 10 Points
- Bonus: Create algorithm to predict whether it will rain or not based on temperature / humidity - 10 Points

### Other (80 Points Possible)
- Sales Pitch: pitch your project to a judge - Up to 20 Points
- Completion: demonstrate your complete project working - 20 Points
- Next Steps: presenting next steps to improve device/robot - Up to 20 Points
- Originality / Innovation - Up to 20 points
