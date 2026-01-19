Laboratory Activity #5 – Receiving Serial Connection Using Arduino from Python


Description

---------------------------------------------------------------------

* This laboratory activity demonstrates serial communication from a Python application to an Arduino microcontroller, where Python sends commands that control the Arduino’s LED outputs in real time.
* The setup implements an interactive system that lets users toggle individual LEDs, switch all LEDs on or off, and receive textual feedback from the Arduino, emphasizing Python–hardware integration and basic serial communication concepts.
​

---------------------------------------------------------------------


Objectives

---------------------------------------------------------------------

* Understand and implement Arduino Serial communication
* Utilize Python as a tool for sending commands to Arduino
* Create an interactive system to control LEDs via serial commands

---------------------------------------------------------------------

Concepts Applied

---------------------------------------------------------------------

* Serial communication using Serial.begin(), Serial.available(), and Serial.read()
* Case-insensitive input handling
* LED control using digital output pins
* Python serial communication using the pyserial library
* Menu-driven, non-terminating Python script
* Error handling for unknown commands
* Modular Arduino code using a header file for reusable LED functions

---------------------------------------------------------------------

System Behavior

---------------------------------------------------------------------
* The system uses an Arduino connected to three LEDs (red, green, and blue), each controlled by single-character commands sent from Python over the serial port.
* The Arduino interprets incoming characters and executes the corresponding LED actions while sending status messages back (for example, RED ON, ALL OFF, or ERR: UNKNOWN COMMAND).
​

Communication (Python → Arduino)

* R / r → Toggle Red LED ON/OFF

* G / g → Toggle Green LED ON/OFF

* B / b → Toggle Blue LED ON/OFF

* A / a → Turn all LEDs ON

* O / o → Turn all LEDs OFF

* X / x → Exit the Python application

* Any other character → Returns an error message such as ERR: UNKNOWN COMMAND

This interaction demonstrates real-time LED control with immediate feedback from the Arduino for every Python command.
​



---------------------------------------------------------------------

Team Members

---------------------------------------------------------------------

Team Leader:Bonganay, Lhojen Faith

Members:

Atas, Mikkos Cepie

Dela Cerna, Gabrielle

Gito, Rhic Emmanuel

Ocubillo, Gypsy Brygx

Serrona, John Mark

Villamor, Lester John

---------------------------------------------------------------------

