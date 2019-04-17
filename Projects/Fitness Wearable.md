# Fitness Wearable
Wearable device that tracks number of steps, estimates calories burnt

## Hardware Used
- Mini Breadboard & Jumper Cables
- Arduino Nano
- IMU
- Bluetooth UART

## Scoring

### Progress
- Setup Arduino / Energia Project
- Wiring
- Read IMU, determine if a step was taken
- Send steps over bluetooth
- **Bonus**: Reduce false positive / false negative steps

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
1. GY521 IMU: https://github.com/ieee-uh-makers/build-a-bot/IEEE-Arduino
2. Bluetooth Option: SoftwareSerial for the Bluetooth Serial https://www.arduino.cc/en/Reference/softwareSerial

## loop() Pseudocode
1. Read IMU
2. Analyze IMU readings, determine if a step was taken
3. Send steps over bluetooth
