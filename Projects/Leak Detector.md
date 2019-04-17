# Leak Detector
Sounds an alarm whenever a leak under the sink is detected

## Options

### LED or Buzzer Alert
Alarm is signaled using an LED or buzzer

### Bluetooth Serial Alert
Alarm is signaled by sending an alarm message over bluetooth

## Hardware Used
- Breadboard & Jumper Cables
- Arduino Nano / MSP432 Launchpad
- Water Level Sensor
- LED / Buzzer Option: Buzzer **OR** LED
- Bluetooth Option: Bluetooth UART

## Scoring

### Progress
- Setup Arduino / Energia Project
- Wiring
- Device triggers LED or Buzzer in presence of excessive noise
- **Bonus**: Device does not easily trigger a false positive

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
1. Bluetooth Option: SoftwareSerial for the Bluetooth Serial  (9600 Baud, Key: 1234) - https://www.arduino.cc/en/Reference/softwareSerial

## loop() Pseudocode
1. Read water level sensor
2. If level is above a certain threshold, drive LED **OR** buzzer **OR** sends alarm over bluetooth
