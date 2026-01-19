Midterm Laboratory Exam


Description

---------------------------------------------------------------------

* This laboratory activity demonstrates how to build a smart lighting system using Arduino that reacts to ambient light conditions,
  the system uses a photoresistor to sense light intensity and three LEDs to indicate low, medium, and high light levels. It should supports manual and automatic modes so the system can simulate environmental conditions such as cloudy, normal, or bright sunlight while students practice processing sensor data, threshold logic, and Serial interaction.


---------------------------------------------------------------------


Objectives

---------------------------------------------------------------------

*  Learn to read analog sensor data using a photoresistor
* Implement LED indicators for low, medium, and high light levels
* Switch between manual and automatic operation modes
* Adjust thresholds dynamically or manually based on user input
* Display system status on the Serial Monitor

---------------------------------------------------------------------

Concepts Applied

---------------------------------------------------------------------

* Analog input handling using analogRead().
​

* Mapping sensor values to percentages using the map() function.
​

* Threshold-based decision logic to activate LEDs.
​

* Serial communication for user commands and feedback.
​

* String parsing with startsWith() and substring() for command processing.
​

* Automatic mode with dynamic thresholds that emulate different lighting environments.
​

* Modular function design for clearer and more maintainable code.  
  
---------------------------------------------------------------------

System Behavior

---------------------------------------------------------------------
* System Overview
      * Components
      * photoresistor to analog pin A0 - measures ambient light intensity and serves as the system’s main input sensor.
      * green LED indicates low light levels, a yellow LED indicates medium light levels, and a red LED indicates high light levels, providing clear visual feedback of the detected brightness.

* Modes of Operation

      * Manual Mode: The user sets the low and high light thresholds through Serial commands, allowing direct control over when each LED should activate.

      * Automatic Mode: The system automatically adjusts thresholds based on the interpreted environment:

      * Cloudy → LOW = 0%, HIGH = 40%

      * Normal → LOW = 41%, HIGH = 70%

      * Bright Sunlight → LOW = 71%, HIGH = 100%

Serial Monitor Commands

* MODE AUTO – switches the system to automatic mode.
* MODE MANUAL – switches the system to manual mode.
* SET LOW xx – sets the low threshold (percentage) in manual mode.
* SET HIGH xx – sets the high threshold (percentage) in manual mode.
* Any unrecognized command responds with: Error: Wrong command.

Runtime Behavior

* Every second, the system outputs to the Serial Monitor: the current light intensity (in %), the active mode (Manual or Automatic), the currently active LED (Green/Yellow/Red), and, in automatic mode, the interpreted environment condition (Cloudy/Normal/Bright


---------------------------------------------------------------------

Team Members

---------------------------------------------------------------------

Team Leader: Gerard Obey S. Francisco

Members:

Merell Joy B. Barrion

Jose Angelo B. Bitanga

Maureen T. Roldan

John Mark L. Serrona

---------------------------------------------------------------------

