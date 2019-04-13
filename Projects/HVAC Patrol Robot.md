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
- Arduino Nano / MSP430
- Racer Bot
- LCD *or* Bluetooth Serial
- Manual Control Only: Joystick
- Autonomous Control Only: Ultrasonic Rangefinder

## Hardware Setup
- TODO: Link to schematic

## Libraries Used
1. Racer: https://github.com/ieee-uh-makers/build-a-bot
2. Bluetooth: SoftwareSerial for the Bluetooth Serial - https://www.arduino.cc/en/Reference/softwareSerial
3. LCD - TODO

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

## Ask-an-Expert
You may consult with a facilitator to help you solve a problem three times at no penalty. After three times, you will no longer have priority, so use them wisely.

## Scoring
### Sensors
- Points are given once the sensors are demonstrated working with your project.
- Points: https://github.com/ieee-uh-makers/build-a-bot/blob/master/Projects/Sensors.md

### Progress (70-80 points possible)
- Setup Arduino / Energia Project - 10 points
- Wiring - 10 Points
- Robot is moving (either via manual control or turns when its about to hit something) - 20 Points
- Robot records temperature and humidity - 10 Points
- Robot computes statistics - 10 Points
- Robot displays statistics to LCD or sends them via Bluetooth - 10 Points
- **Bonus**: Autonomous Option - 10 Points

### Other (80 Points Possible)
- Sales Pitch: pitch your project to a judge - Up to 20 Points
- Completion: demonstrate your complete project working - 20 Points
- Next Steps: presenting next steps to improve device/robot - Up to 20 Points
- Originality / Innovation - Up to 20 points
