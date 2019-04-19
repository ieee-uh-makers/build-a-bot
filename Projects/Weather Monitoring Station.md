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

## Libraries Used
1. Bluetooth Option: SoftwareSerial for the Bluetooth Serial (9600 Baud, Key: 1234) - https://www.arduino.cc/en/Reference/softwareSerial
2. LCD Option: https://www.arduino.cc/en/Reference/LiquidCrystal

## Sensor Schematics / Additional Libraries / Documentation
https://github.com/ieee-uh-makers/elegoo-sensor-kit

## loop() Pseudocode
1. Read temperature, humidity and rain sensors.
2. Transmit them over bluetooth at a regular interval

## Scoring

### Progress
The more you complete, the more points you will based on the difficulty level of the project.
- Setup Arduino / Energia Project
- Wiring
- Record temperature, humidity, rain level
- Send readings over bluetooth or display them on the LCD
- Bonus: Create algorithm to predict whether it will rain or not based on temperature / humidity

### Subjective
Judges assess you project and pitch in various ways giving you additional points
- Sales Pitch: pitch your project to a judge
- Next Steps: presenting next steps to improve device/robot
- Originality / Innovation
- Project Neatness

## Expert Card (3 per Group)
The "help me get started on something card". You will get general guidance on how to move forward on your project from an expert. Depending on how long it takes, the expert may decide not to take your card.

## Facilitator Card (3 per Group)
Technical help with the implementation of your project. Use them wisely.
