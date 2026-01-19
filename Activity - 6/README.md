Laboratory Activity #6 – Bidirectional Control Using Arduino and Python

Description

---------------------------------------------------------------------

* This laboratory activity demonstrates bidirectional serial communication between an Arduino microcontroller and a Python application. Hardware inputs are transmitted from Arduino to Python, which then responds by sending control commands back to Arduino in real time, forming a complete two-way interaction loop essential in IoT and computer–hardware integration.​

---------------------------------------------------------------------


Objectives

---------------------------------------------------------------------

* Understand and implement Arduino Serial communication
* Utilize Python as a tool for serial data handling
* Implement bidirectional communication between Arduino and Python


---------------------------------------------------------------------

Concepts Applied

---------------------------------------------------------------------

* Serial communication using Serial.begin(), Serial.println(), and Serial.readStringUntil().
* Digital input handling with push buttons.
* Edge detection to detect individual button presses.
* State-based LED control logic.
* Bidirectional data exchange between Arduino and Python.
* Python serial communication using the pyserial library.
* Low-latency response handling for near real-time interaction.

---------------------------------------------------------------------

System Behavior

---------------------------------------------------------------------
* TThe system uses an Arduino connected to three push buttons and three LEDs (red, green, and blue).

Outbound communication (Arduino → Python):

* When a button is pressed, Arduino sends a single character:

      Button 1 → R

      Button 2 → G

      Button 3 → B

      During this stage, no LED action occurs; Arduino only transmits the signal to Python.

* Inbound communication (Python → Arduino):

      A Python script continuously listens for R, G, or B from Arduino.

* Upon receiving:

      R, Python sends back 1

      G, Python sends back 2

      B, Python sends back 3

* Arduino receives the returned value and toggles the corresponding LED:

      1 toggles the red LED
      
      2 toggles the green LED
      
      3 toggles the blue LED

* The full loop achieves real-time, bidirectional control with a response time of less than one second.



---------------------------------------------------------------------

Team Members

---------------------------------------------------------------------

Team Leader: Villamor, Lester John

Members:

Atas, Mikkos Cepie

Bonganay, Lhojen Faith

Dela Cerna, Gabrielle

Gito, Rhic Emmanuel

Ocubillo, Gypsy Brygx

Serrona, John Mark



---------------------------------------------------------------------


