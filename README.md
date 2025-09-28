# Fire-Fighting-robot
:

🔥 Fire Fighting Robot (Arduino IoT Project)
📌 Overview

This project is an Arduino-based Fire Fighting Robot that detects fire using a flame sensor and automatically extinguishes it using a water pump. The robot moves forward, stops when it senses fire, sprays water for a few seconds, and then continues its path — all without human intervention.

🧰 Components Used

Arduino UNO

Flame Sensor (IR-based)

L298N Motor Driver

DC Motors + Wheels

Relay Module + Water Pump

Jumper Wires

Chassis

Battery (3.7V × 2 or 9V)

⚙️ Working Principle

The flame sensor continuously monitors the surroundings for fire.

When the sensor detects a flame, the robot stops moving and activates the water pump via a relay module.

The pump sprays water for a few seconds to extinguish the fire.

Once the fire is put out, the robot resumes its forward motion.

🔌 Circuit Connections
Component	Arduino Pin
Flame Sensor	A0
L298N ENA	9
L298N IN1	8
L298N IN2	7
L298N ENB	10
L298N IN3	6
L298N IN4	5
Relay (Water Pump)	4
💻 Arduino Code

The complete source code is available in the file fire_fighting_robot.ino
.
