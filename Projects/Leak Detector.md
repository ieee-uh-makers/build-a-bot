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

## Libraries Used
1. Bluetooth Option: SoftwareSerial for the Bluetooth Serial  (9600 Baud, Key: 1234) - https://www.arduino.cc/en/Reference/softwareSerial

## Sensor Schematics / Additional Libraries / Documentation
https://github.com/ieee-uh-makers/elegoo-sensor-kit

## loop() Pseudocode
1. Read water level sensor
2. If level is above a certain threshold, drive LED **OR** buzzer **OR** sends alarm over bluetooth

## Scoring

### Progress
The more you complete, the more points you will based on the difficulty level of the project.
- Setup Arduino / Energia Project
- Wiring
- Device triggers LED or Buzzer in presence of excessive noise
- **Bonus**: Device does not easily trigger a false positive

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
