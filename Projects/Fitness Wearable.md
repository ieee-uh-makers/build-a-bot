# Fitness Wearable
Tracks number of steps, estimates calories burnt

## Hardware
- Arduino Nano / MSP430
- IMU
- Bluetooth UART

## Hardware Setup
- TODO: Link to schematic

## Libraries Used
1. IMU - TODO
2. Bluetooth Option: SoftwareSerial

## loop() Pseudocode
1. Read IMU
2. Analyze IMU readings, determine if a step was taken
3. Send steps over bluetooth

## Ask-an-Expert
You may consult with a facilitator to help you solve a problem three times at no penalty. After three times, you will no longer have priority, so use them wisely.

## Scoring
### Sensors (40 points possible)

- IMU - 20 Points
- Bluetooth Option: Bluetooth Sensor - 20 Points

### Progress (50-60 points possible)
- Setup Arduino / Energia Project - 10 points
- Wiring - 10 Points
- Read IMU, determine if a step was taken - 20 Points
- Send steps over bluetooth - 10 Points
- **Bonus**: Reduce false positive / false negative steps - 10 Points

### Other
- Completion - 20 Points
- Documenting next steps to improve device/robot - Up to 20 Points
- Originality / Innovation - Up to 20 points (mostly reserved for custom projects)
