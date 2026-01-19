Laboratory Activity #4 – Arduino Serial Connection


Description

---------------------------------------------------------------------

* This laboratory activity demonstrates the use of Arduino Serial communication to monitor sensor data and control hardware behavior through user input also its
   integrates a photoresistor sensor with Serial-based interaction to show how real-time readings and commands can influence system states,
  the activity builds on Laboratory Activity #3 by combining a sensor-driven condition with Serial commands to dynamically control an LED.

---------------------------------------------------------------------


Objectives

---------------------------------------------------------------------

* Understand and implement Arduino Serial communication.
​
* Utilize basic Serial functions for monitoring and control.
​

* Develop a sensor-based circuit that is controlled through Serial commands.

---------------------------------------------------------------------

Concepts Applied

---------------------------------------------------------------------

* Serial communication using Serial.begin(), Serial.print(), and Serial.readStringUntil().
​
* Analog sensor data acquisition using analogRead().
​

* Signal mapping using map().
​

* Threshold-based logic for decision making.
​

* State management using boolean flags.
​

* Case-insensitive string processing for command handling.
​

* Digital output control for LED blinking
  
---------------------------------------------------------------------

System Behavior

---------------------------------------------------------------------
* The system uses a photoresistor on analog pin A2 to measure ambient light intensity, which is mapped to a scaled brightness value and continuously sent over Serial for monitoring.
​

* An LED on digital pin 8 acts as an alert indicator; when the mapped brightness exceeds a predefined threshold, the LED enters a blinking state that persists even if the sensor value later drops.
​

* The blinking can only be stopped by issuing a specific command via the Serial interface, demonstrating how Serial input can override sensor-based behavior.


---------------------------------------------------------------------

Team Members

---------------------------------------------------------------------

Team Leader: Atas, Mikkos Cepie

Members:

Gito, Rhic Emmanuel (Score: 99)

Serrona, John Mark (Score: 100)

---------------------------------------------------------------------
