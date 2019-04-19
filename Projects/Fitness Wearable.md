# Fitness Wearable
Wearable device that tracks number of steps, estimates calories burnt

## Hardware Used
- Mini Breadboard & Jumper Cables
- Arduino Nano
- IMU
- Bluetooth UART

## Libraries Used
1. GY521 IMU: https://github.com/ieee-uh-makers/build-a-bot/IEEE-Arduino
2. Bluetooth Option: SoftwareSerial for the Bluetooth Serial (9600 Baud, Key: 1234) https://www.arduino.cc/en/Reference/softwareSerial

## Sensor Schematics / Additional Libraries / Documentation
https://github.com/ieee-uh-makers/elegoo-sensor-kit

## loop() Pseudocode
1. Read IMU
2. Analyze IMU readings, determine if a step was taken
3. Send steps over bluetooth

## Scoring

### Progress
The more you complete, the more points you will based on the difficulty level of the project.
- Setup Arduino / Energia Project
- Wiring
- Read IMU, determine if a step was taken
- Send steps over bluetooth
- **Bonus**: Reduce false positive / false negative steps

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
