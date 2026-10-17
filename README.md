# arduino-ldr-optimization

## Overview

This project explores a simple feedback-based optimization algorithm using an Arduino, an LED, and a light-dependent resistor (LDR). The system adjusts LED brightness and measures the corresponding change in the sensor reading to determine whether the adjustment improves the measured result.

## How It Works

The Arduino uses PWM output to control the LED's brightness and reads the LDR through an analog input.

1. **Initialize:** Set the LED brightness to 100 on a scale of 0–255.
2. **Measure:** Record the LDR reading at the current brightness.
3. **Adjust:** Increase or decrease brightness by a step of 10.
4. **Compare:** Measure the LDR reading again and compare it with the previous reading.
5. **Optimize:** Keep the adjustment if the reading increases; otherwise, reverse the direction of the next adjustment.
6. **Repeat:** Continue the process and print the brightness and sensor readings to the Serial Monitor.

## Components

- Arduino board
- LED
- Light-dependent resistor (LDR)
- Current-limiting resistor for the LED
- Resistors for the LDR voltage-divider circuit
- Breadboard and jumper wires

## Concepts Explored

- Arduino analog input and PWM output
- Light sensing using an LDR
- Feedback systems
- Iterative optimization
- Basic hill-climbing algorithms

## Objective

The objective is to explore how a system can use sensor feedback to adjust an output iteratively. Rather than setting the LED brightness to a fixed value, the program tests adjustments and uses measured results to guide subsequent changes.

## Limitations and Future Improvements

The algorithm assumes that a higher LDR reading represents an improvement, but this depends on the sensor circuit and the desired outcome. It may also become stuck at a brightness boundary or respond to fluctuations in ambient light.

Possible improvements include defining a clear optimization target, handling brightness limits more effectively, filtering noisy sensor readings, and testing the system under controlled lighting conditions.

## Language and Platform

- Language: C++ (Arduino)
- Platform: Arduino-compatible microcontroller

## Project Status

Experimental implementation. Further testing is needed to verify its behavior under different lighting conditions and determine how effectively it converges toward the intended target.
