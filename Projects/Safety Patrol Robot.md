# Safety Patrol Robot
Robot that patrols a building looking for fires

## Options
### Manual Control
The robot will be controlled with a joystick

### Autonomous Control (10 Bonus Points)
The robot will be automatically controlled using the ultrasonic rangefinder, turning whenever it gets too close to an object.

## Hardware Used
- Mini Breadboard & Jumper Cables
- Arduino Nano
- Racer Bot
- Buzzer
- Fire Sensor
- Manual Control Only: Joystick
- Autonomous Control Only: Ultrasonic Rangefinder

## Libraries Used
1. Racer: https://github.com/ieee-uh-makers/build-a-bot/IEEE-Arduino
2. Ultrasonic Rangefinder: https://github.com/Martinsos/arduino-lib-hc-sr04

## Sensor Schematics / Additional Libraries / Documentation
https://github.com/ieee-uh-makers/elegoo-sensor-kit

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

## Scoring

### Progress
The more you complete, the more points you will based on the difficulty level of the project.
- Setup Arduino / Energia Project
- Wiring
- Robot is moving (either via manual control or turns when its about to hit something)
- Robot detects fire and sounds the buzzer
- **Bonus**: Autonomous Option

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
