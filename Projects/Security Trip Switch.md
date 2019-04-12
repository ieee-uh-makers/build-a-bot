# Security Trip Switch
Sounds an alarm whenever a laser is interrupted

## Options

### LED or Buzzer Alert
Alarm is signaled using an LED or buzzer

### Bluetooth Serial Alert
Alarm is signaled by sending an alarm message over bluetooth

## Hardware Used
- Arduino Nano / MSP430
- Laser Emitter
- Laser Receiver
- LED / Buzzer Option: Buzzer **OR** LED
- Bluetooth Option: Bluetooth UART

## Hardware Setup
- TODO: Link to schematic

## Libraries Used
1. Bluetooth Option: SoftwareSerial for the Bluetooth Serial - https://www.arduino.cc/en/Reference/softwareSerial

## loop() Pseudocode
1. Check if laser is interrupted
2. If laser is interrupted, drive LED **OR** buzzer **OR** sends alarm over bluetooth

## Ask-an-Expert
You may consult with a facilitator to help you solve a problem three times at no penalty. After three times, you will no longer have priority, so use them wisely.

## Scoring
### Sensors (30-40 points possible)
Points are given once the sensors are demonstrated working with your project.

- Laser Emitter - 10 Points
- Laser Receiver - 10 Points
- Buzzer / LED Option: Buzzer **OR** LED - 10 Points
- Bluetooth Option: Bluetooth Sensor - 20 Points

### Progress (40 points possible)
- Setup Arduino / Energia Project - 10 points
- Wiring - 10 Points
- Device triggers LED / Buzzer / Bluetooth alarm when laser is interrupted - 10 Points
- Device does not easily trigger a false positive - 10 Points

### Other
- Completion - 20 Points
- Documenting next steps to improve device/robot - Up to 20 Points
- Originality / Innovation - Up to 20 points (mostly reserved for custom projects)
