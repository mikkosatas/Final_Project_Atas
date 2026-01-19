Laboratory Activity #7 – Controlling Arduino Using FastAPI

Description

---------------------------------------------------------------------

* This laboratory activity demonstrates real-time, bidirectional control of an Arduino board using a FastAPI web server. The system lets both hardware inputs (push buttons) and HTTP requests from a web API toggle LED states on the Arduino, illustrating an IoT-style control architecture that combines physical interaction with remote software control.​

---------------------------------------------------------------------


Objectives

---------------------------------------------------------------------

* Implement Arduino Serial communication for hardware control
* Utilize Python and FastAPI to create HTTP endpoints for hardware interaction
* Develop a bidirectional control system integrating physical buttons and web-based commands


---------------------------------------------------------------------

Concepts Applied

---------------------------------------------------------------------

* Serial communication between Arduino and Python.
* Digital input handling with push buttons.

* Edge detection and state toggling logic.

* Digital output control for LEDs.

* HTTP server development using FastAPI.

* Mapping web requests to serial commands.

* Keeping LED states synchronized between hardware and software.

---------------------------------------------------------------------

System Behavior

---------------------------------------------------------------------
* Hardware:
          
          Three LEDs (Red, Green, Blue) connected to digital pins 5, 6, and 7.   
          Three push buttons connected to digital pins 10, 11, and 12.

* Arduino sketch:

          Detects push button presses and toggles the corresponding LED states.
          
          Parses serial commands from Python to toggle LEDs based on received characters.

* FastAPI application:

          Exposes REST endpoints for remote LED control:
          
          /led/red, /led/green, /led/blue – toggle individual LEDs.
          
          /led/on – turn all LEDs ON.
          
          /led/off – turn all LEDs OFF.

* Communicates with Arduino over a serial connection, sending single-character commands mapped to each LED.


---------------------------------------------------------------------

Team Members

---------------------------------------------------------------------

Team Leader: Dela Cerna, Gabrielle

Members:

Atas, Mikkos Cepie

Bonganay, Lhojen Faith

Gito, Rhic Emmanuel

Ocubillo, Gypsy Brygx

Serrona, John Mark

Villamor, Lester John



---------------------------------------------------------------------



