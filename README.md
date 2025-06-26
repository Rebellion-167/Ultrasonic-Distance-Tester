# Ultrasonic Distance Tester

A minimal Arduino project that uses the **HC-SR04 ultrasonic sensor** to measure distance and display it via the Serial Monitor. Perfect for beginners testing hardware or learning basic sensor integration.

## What This Project Does

- Sends ultrasonic pulses and listens for echoes
- Calculates and displays the distance to an object
- Helps verify if the HC-SR04 sensor is working properly

## Hardware Requirements

- Arduino Uno / Nano / compatible board
- HC-SR04 Ultrasonic Sensor
- Jumper Wires
- Breadboard (optional)

## Circuit Connections

| HC-SR04 Pin | Arduino Pin|
|-------------|------------|
| VCC         | 5V         |
| GND         | GND        |
| TRIG        | A2         |
| ECHO        | A1         |

## How It Works

The Arduino triggers the ultrasonic sensor, measures the time it takes for the signal to bounce back, and calculates the distance based on that time.

## How to Use

1. Wire up the components based on the table above.
2. Upload the code from the `.ino` file.
3. Open the Serial Monitor at 9600 baud to see real-time distance readings.
