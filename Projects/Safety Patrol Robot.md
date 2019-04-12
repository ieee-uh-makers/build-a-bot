# Safety Patrol Robot
Robot that patrols a building looking for fires

## Options
### Manual Control
The robot will be controlled with a joystick

### Autonomous Control
The robot will be automatically controlled using the ultrasonic rangefinder, turning whenever it gets too close to an object.

## Hardware
- Racer Bot
- Buzzer
- Fire Sensor
- Manual Control Only: Joystick
- Autonomous Control Only: Ultrasonic Rangefinder

## Hardware Setup
- Link to schematic

## Libraries Used
1. Racer: https://github.com/ieee-uh-makers/build-a-bot

## Autonomous loop() Pseudocode
1. Read ultrasonic sensor range
2. If an object is not nearby, move forwards
3. If an object is nearby, turn right or left
4. Read the fire sensor
5. If there is a fire sound the alarm

## Manual Control loop() Pseudocode
1. Read the joystick
2. Move in the direction of the joystick using the Racer library
3. Read the fire sensor
4. If there is a fire sound the alarm

## Ask-an-Expert
You may consult with a facilitator to help you solve a problem three times at no penalty. After three times, you will no longer have priority, so use them wisely.

## Scoring
### Sensors (20-30 points possible)
- Flame Sensor - 10 Points
- Joystick - 10 Points
- Ultrasonic - 20 Points

### Progress (60 points possible)
- Setup Arduino / Energia Project - 10 points
- Wiring - 10 Points
- Robot is moving (either via manual control or turns when its about to hit something) - 20 Points
- Robot detects fire and sounds the buzzer - 20 Points

### Project Options (10 points possible)
- Autonomous - 10 Points

### Other
- Completion - 20 Points
- Documenting next steps to improve robot - Up to 20 Points
- Originality / Innovation - Up to 20 points (mostly reserved for custom projects)
