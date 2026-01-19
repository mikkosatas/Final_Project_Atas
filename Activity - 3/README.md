Laboratory Activity #3 – Working with Sensors


Description

---------------------------------------------------------------------

* This laboratory activity introduces the use of sensor components commonly applied in IoT systems and demonstrates how multiple sensors can be integrated into a single Arduino-based circuit, furthermore the activity implements a simple fire detection system using a thermistor and a photoresistor. By combining temperature and light intensity readings, the system shows how environmental data can be processed to trigger hardware-based alerts.

---------------------------------------------------------------------


Objectives

---------------------------------------------------------------------

*  Familiarize students with the basic sensor components that can be used in IoT
*   Integrate these sensor components in an Arduino circuit
*   Create a simple implementation of a fire sensor
---------------------------------------------------------------------

Concepts Applied

---------------------------------------------------------------------

* Analog sensor data acquisition.

* Thermistor temperature calculation using the Beta parameter equation.

* Light intensity sensing with a photoresistor.

* Threshold-based decision logic.

* Function modularization for sensor readings.

* Use of #define for pin configuration.

* Use of const for fixed threshold values.

* Digital output control for alert signaling.


  
---------------------------------------------------------------------

System Behavior

---------------------------------------------------------------------
* The system uses two sensors: A thermistor connected to analog pin A0 to measure temperature in Celsius and a photoresistor connected to analog pin A2 to measure light intensity.

* Sensor readings are processed through separate functions to keep the code clear and modular.

* When both the temperature and brightness exceed their defined threshold values, an alert mechanism is activated.

* An LED connected to digital pin 12 rapidly blinks to indicate a potential fire condition, demonstrating how multiple sensor inputs can be combined to determine system responses.



---------------------------------------------------------------------

Team Members

---------------------------------------------------------------------

Team Leader: Serrona, John Mark 

Members:

Atas, Mikkos Cepie (Score: 99)

Gito, Rhic Emmanuel (Score: 100)

---------------------------------------------------------------------
