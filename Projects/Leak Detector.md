# Leak Detector
Sounds an alarm whenever a leak under the sink is detected

## Options

### LED or Buzzer Alert
Alarm is signaled using an LED or buzzer

### Bluetooth Serial Alert
Alarm is signaled by sending an alarm message over bluetooth

## Hardware Used
- Arduino Nano / MSP430
- Water Level Sensor
- LED / Buzzer Option: Buzzer **OR** LED
- Bluetooth Option: Bluetooth UART

## Hardware Setup
- TODO: Link to schematic

## Libraries Used
1. Bluetooth Option: SoftwareSerial for the Bluetooth Serial - https://www.arduino.cc/en/Reference/softwareSerial

## loop() Pseudocode
1. Read water level sensor
2. If level is above a certain threshold, drive LED **OR** buzzer **OR** sends alarm over bluetooth

## Ask-an-Expert
You may consult with a facilitator to help you solve a problem three times at no penalty. After three times, you will no longer have priority, so use them wisely.

## Scoring
### Sensors
- Points are given once the sensors are demonstrated working with your project.
- Points: https://github.com/ieee-uh-makers/build-a-bot/blob/master/Projects/Sensors.md

### Progress (40-50 points possible)
- Setup Arduino / Energia Project - 10 points
- Wiring - 10 Points
- Device triggers LED or Buzzer in presence of excessive noise - 20 Points
- **Bonus**: Device does not easily trigger a false positive - 10 Points

### Other (80 Points Possible)
- Sales Pitch: pitch your project to a judge - Up to 20 Points
- Completion: demonstrate your complete project working - 20 Points
- Next Steps: presenting next steps to improve device/robot - Up to 20 Points
- Originality / Innovation - Up to 20 points
