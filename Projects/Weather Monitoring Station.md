# Weather Monitoring Station
Device that stays outside recording weather conditions including temperature, humidity, and rain.

## Options

### Bluetooth Serial
The measurements are sent wirelessly over bluetooth to a computer

### LCD
The conditions are displayed on an LCD

## Hardware Used
- Breadboard & Jumper Cables
- Arduino Nano / MSP432 Launchpad
- Temperature / Humidity Sensor
- Rain Sensor
- Bluetooth Option: Bluetooth Serial
- LCD Option: LCD

## Scoring

### Progress
- Setup Arduino / Energia Project
- Wiring
- Record temperature, humidity, rain level
- Send readings over bluetooth or display them on the LCD
- Bonus: Create algorithm to predict whether it will rain or not based on temperature / humidity

### Subjective
- Sales Pitch: pitch your project to a judge
- Completion: demonstrate your complete project working
- Next Steps: presenting next steps to improve device/robot
- Originality / Innovation
- Project Neatness

## Ask-an-Expert
You may consult with a facilitator to help you solve a problem three times at no penalty. After three times, you will no longer have priority, so use them wisely.

## Hardware Setup
- TODO: Link to schematic

## Libraries Used
1. Bluetooth Option: SoftwareSerial for the Bluetooth Serial - https://www.arduino.cc/en/Reference/softwareSerial
2. LCD Option: https://www.arduino.cc/en/Reference/LiquidCrystal

## loop() Pseudocode
1. Read temperature, humidity and rain sensors.
2. Transmit them over bluetooth at a regular interval
