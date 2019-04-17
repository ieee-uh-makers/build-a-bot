# HVAC Patrol Robot
Robot that patrols a building computing statistics about temperature and humidity to improve temperature consistency. Statistics computed include the minimum, maximum, average, and standard deviation of the following:

- Temperature
- Humidity

## Options
### Manual Control
The robot will be controlled with a joystick

### Autonomous Control (10 Bonus Points)
The robot will be automatically controlled using the ultrasonic rangefinder, turning whenever it gets too close to an object.

## Hardware Used
- Mini Breadboard & Jumper Cables
- Arduino Nano
- Racer Bot
- LCD *or* Bluetooth Serial
- Manual Control Only: Joystick
- Autonomous Control Only: Ultrasonic Rangefinder


## Scoring

### Progress
- Setup Arduino / Energia Project
- Wiring
- Robot is moving (either via manual control or turns when its about to hit something)
- Robot records temperature and humidity
- Robot computes statistics
- Robot displays statistics to LCD or sends them via Bluetooth
- **Bonus**: Autonomous Option

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
1. Racer: https://github.com/ieee-uh-makers/build-a-bot/IEEE-Arduino
2. Bluetooth: SoftwareSerial for the Bluetooth Serial (9600 Baud, Key: 1234) - https://www.arduino.cc/en/Reference/softwareSerial
3. LCD - https://www.arduino.cc/en/Reference/LiquidCrystal
4. Ultrasonic Rangefinder: https://github.com/Martinsos/arduino-lib-hc-sr04

## Autonomous loop() Pseudocode
1. Read ultrasonic sensor range
2. If an object is not nearby, move forwards
3. If an object is nearby, turn right or left
4. Read / store temperature and humidity
5. Compute Statistics
6. Display Statistics to LCD or send them over Bluetooth

## Manual Control loop() Pseudocode
1. Read the joystick
2. Move in the direction of the joystick using the Racer library
3. Read / store temperature and humidity
4. Compute Statistics
5. Display Statistics to LCD or send them over Bluetooth
