Laboratory Activity #2 – Working with Analog Signals


Description

---------------------------------------------------------------------

* This laboratory activity introduces the concept of analog signals and their use in an Arduino-based circuit.
It extends the digital running light pattern from Laboratory Activity #1 by adding analog output control to adjust LED brightness levels.
The activity illustrates how analog values can represent varying signal intensities and how these values are applied to control hardware components such as LEDs.

---------------------------------------------------------------------


Objectives

---------------------------------------------------------------------

* Discuss analog signals and their implementation in an Arduino circuit

* Understand analog-to-digital signal conversion and scaling concepts
---------------------------------------------------------------------

Concepts Applied

---------------------------------------------------------------------

* Analog signal representation

* Pulse Width Modulation (PWM) using analogWrite()

* Use of arrays for pin management

* Iterative control using while() loops

* Sequential logic execution

* Timing control using delays
  
---------------------------------------------------------------------

System Behavior

---------------------------------------------------------------------
* Five LEDs are connected to Arduino digital pins 8 to 12, with their pin numbers stored in an array for organized control.

* The program sequentially increases LED brightness from pin 12 down to pin 8 by setting each LED to the maximum analog value.

* After all LEDs are fully lit, the program sequentially decreases their brightness back to zero from pin 12 down to pin 8.

* The repeating sequence visually demonstrates how different analog output values change LED intensity and how arrays with loops simplify multi-LED control.

---------------------------------------------------------------------

Team Members

---------------------------------------------------------------------

Team Leader: Gito, Rhic Emmanuel

Members:

Atas, Mikkos Cepie (Score: 99)

Serrona, John Mark (Score: 100)

---------------------------------------------------------------------
