# Library Noise Monitor
Automatically alerts staff when the noise levels in the library become distracting for people studying there

## Options

### LED or Buzzer Alert
Alarm is signaled using an LED or buzzer

### Bluetooth Serial Alert
Alarm is signaled by sending an alarm message over bluetooth

## Hardware Used
- Breadboard & Jumper Cables
- Arduino Nano / MSP430
- Sound Sensor
- LED / Buzzer Option: Buzzer **OR** LED
- Bluetooth Option: Bluetooth UART

## Hardware Setup
- TODO: Link to schematic

## Libraries Used
1. Bluetooth Option: SoftwareSerial for the Bluetooth Serial - https://www.arduino.cc/en/Reference/softwareSerial

## loop() Pseudocode
1. Read sound sensor
2. If noise is above certain point, drive LED **OR** buzzer **OR** send alert over bluetooth

## Ask-an-Expert
You may consult with a facilitator to help you solve a problem three times at no penalty. After three times, you will no longer have priority, so use them wisely.

## Scoring
### Sensors
- Points are given once the sensors are demonstrated working with your project.
- Points: https://github.com/ieee-uh-makers/build-a-bot/blob/master/Projects/Sensors.md

### Progress (40 points possible)
- Setup Arduino / Energia Project - 10 points
- Wiring - 10 Points
- Device triggers LED / Buzzer / Bluetooth Serial Alarm in presence of excessive noise - 10 Points
- Device does not easily trigger a false positive - 10 Points

### Other (80 Points Possible)
- Sales Pitch: pitch your project to a judge - Up to 20 Points
- Completion: demonstrate your complete project working - 20 Points
- Next Steps: presenting next steps to improve device/robot - Up to 20 Points
- Originality / Innovation - Up to 20 points
