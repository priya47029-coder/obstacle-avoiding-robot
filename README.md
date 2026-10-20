# Obstacle-Avoiding Robot Simulation

## About the Project
This project demonstrates an obstacle-detection system using Arduino Uno and an HC-SR04 ultrasonic distance sensor in Tinkercad Circuits.

## Objective
To detect nearby obstacles and indicate whether the path is clear or blocked.

## Components Used
- Arduino Uno R3
- HC-SR04 ultrasonic distance sensor
- Green LED
- Red LED
- 220 Ω resistors
- Tinkercad Circuits simulation

## Working Principle
The ultrasonic sensor measures the distance to an object and sends the reading to the Arduino. When the distance is 20 cm or less, the red LED turns on to indicate an obstacle. When the distance is greater than 20 cm, the green LED turns on to indicate a clear path.

## Pin Connections

| Component | Arduino Pin |
|---|---|
| Sensor VCC | 5V |
| Sensor GND | GND |
| Sensor TRIG | Digital pin 3 |
| Sensor ECHO | Digital pin 2 |
| Green LED | Digital pin 8 |
| Red LED | Digital pin 9 |

Each LED is connected through a 220 Ω resistor.

## Testing
- Tested with an obstacle at 10 cm: obstacle detected.
- Tested with an obstacle at 57 cm: path clear.

## Tools Used
Arduino C/C++, Tinkercad Circuits, GitHub.

## Author
Priya

## Project Simulation
Add your Tinkercad circuit sharing link here.

