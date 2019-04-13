# Fitness Wearable
Wearable device that tracks number of steps, estimates calories burnt

## Hardware Used
- Mini Breadboard & Jumper Cables
- Arduino Nano / MSP430
- IMU
- Bluetooth UART

## Hardware Setup
- TODO: Link to schematic

## Libraries Used
1. IMU - TODO
2. Bluetooth Option: SoftwareSerial for the Bluetooth Serial https://www.arduino.cc/en/Reference/softwareSerial

## loop() Pseudocode
1. Read IMU
2. Analyze IMU readings, determine if a step was taken
3. Send steps over bluetooth

## Ask-an-Expert
You may consult with a facilitator to help you solve a problem three times at no penalty. After three times, you will no longer have priority, so use them wisely.

## Scoring
### Sensors
- Points are given once the sensors are demonstrated working with your project.
- Points: https://github.com/ieee-uh-makers/build-a-bot/blob/master/Projects/Sensors.md

### Progress (50-60 points possible)
- Setup Arduino / Energia Project - 10 points
- Wiring - 10 Points
- Read IMU, determine if a step was taken - 20 Points
- Send steps over bluetooth - 10 Points
- **Bonus**: Reduce false positive / false negative steps - 10 Points

### Other (80 Points Possible)
- Sales Pitch: pitch your project to a judge - Up to 20 Points
- Completion: demonstrate your complete project working - 20 Points
- Next Steps: presenting next steps to improve device/robot - Up to 20 Points
- Originality / Innovation - Up to 20 points
