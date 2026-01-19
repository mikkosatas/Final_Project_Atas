Laboratory Activity #7 – Controlling Arduino Using FastAPI

Description

---------------------------------------------------------------------

* This Lab demonstrates an Arduino-to-Python client system where a push button on an Arduino remotely triggers actions on a separate LED system through a Python-based API client. The Arduino does not call the API directly; instead, it sends data over the serial port to a Python program, which then invokes a predefined HTTP endpoint and reports results on the terminal.
---------------------------------------------------------------------


Objectives

---------------------------------------------------------------------

* Implement serial communication between Arduino and Python
* Use a push button as an input device with proper software debouncing
* Send a signal representing the group number from Arduino to Python
* Trigger HTTP requests from Python to a remote API endpoint based on Arduino input
* Provide clear feedback on API calls in the Python terminal


---------------------------------------------------------------------

Concepts Applied

---------------------------------------------------------------------

* Digital input reading on Arduino using digitalRead().

* Software debouncing to ensure reliable single detections per button press.

* Serial communication between Arduino and Python for command passing.

* Continuous serial listening in Python using the serial module.

* HTTP requests in Python via the requests library.

* Case-insensitive input handling and normalization of received values.

* Error handling and validation on both Arduino and Python sides.
---------------------------------------------------------------------

System Behavior

---------------------------------------------------------------------
* Components:

                    An Arduino board with a push button wired as the primary input.
                    
                    A Python client on a computer that listens to the Arduino’s serial output.
                    
                    A remote LED API endpoint that toggles LEDs according to the received group number.

* Workflow:

          The user presses the button on the Arduino.
          
          Arduino sends the assigned group number over Serial.
          
          The Python client reads and validates this serial input, then issues an HTTP request to /led/group/<group_number>/toggle.
          
* The Python client prints feedback including:
          
          Group number received.
          
          Endpoint called.
          
          API response (success or error).

* Rules:

          One button press must correspond to exactly one API request.
          
          Long or held button presses must not generate repeated calls due to debouncing.
          
          All serial input must be checked

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




