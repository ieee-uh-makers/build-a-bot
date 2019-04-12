# Library Noise Monitor
Automatically alerts staff when the noise levels in the library become distracting for people studying there

## Options

### LED or Buzzer Alert
Alarm is signaled using an LED or buzzer

### Bluetooth Serial Alert
Alarm is signaled by sending an alarm message over bluetooth

## Hardware
- Water Level Sensor
- Led / Buzzer Option: Buzzer **OR** LED
- Bluetooth Option: Bluetooth UART

## Hardware Setup
- TODO: Link to schematic

## Libraries Used
1. TODO

## loop() Pseudocode
1. Read sound sensor
2. If noise is above certain point, drive LED **OR** buzzer **OR** send alert over bluetooth

## Ask-an-Expert
You may consult with a facilitator to help you solve a problem three times at no penalty. After three times, you will no longer have priority, so use them wisely.

## Scoring
### Sensors (30-40 points possible)
- Volume Sensor - 20 Points
- Buzzer **OR** LED - 10 Points
- Bluetooth Serial - 20 Points

### Progress (40 points possible)
- Setup Arduino / Energia Project - 10 points
- Wiring - 10 Points
- Device triggers LED / Buzzer / Bluetooth Serial Alarm in presence of excessive noise - 10 Points
- Device does not easily trigger a false positive - 10 Points

### Other
- Completion - 20 Points
- Documenting next steps to improve device/robot - Up to 20 Points
- Originality / Innovation - Up to 20 points (mostly reserved for custom projects)
