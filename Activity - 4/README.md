**Laboratory Activity #4 – Arduino Serial Connection**  
 

***

### I. Description  
This laboratory activity demonstrates the use of **Arduino Serial Communication** to monitor sensor data and control hardware through user input. It integrates a **photoresistor** with **Serial-based interaction**, showing how real-time sensor readings can influence system behavior and how commands from the Serial Monitor can modify system states. Building on *Laboratory Activity #3*, this experiment combines sensor-driven conditions with Serial command control to dynamically manage an LED indicator.

***

### II. Objectives  
1. Understand and implement **Arduino Serial communication**.  
2. Utilize basic **Serial functions** for real-time monitoring and control.  
3. Develop a **sensor-based circuit** that can be influenced through Serial commands.  

***

### III. Concepts Applied  
- Serial communication using `Serial.begin()`, `Serial.print()`, and `Serial.readStringUntil()`  
- Analog sensor data acquisition via `analogRead()`  
- Signal mapping with `map()` for scaling sensor readings  
- Threshold-based decision logic  
- State management using **boolean flags**  
- Case-insensitive string processing for command handling  
- Digital output control for LED blinking sequences  

***

### IV. System Behavior  
- **Sensor Input:**  
  - The **photoresistor (LDR)** is connected to **Analog Pin A2**, measuring ambient light intensity.  
  - Sensor readings are scaled using the `map()` function and transmitted through the Serial Monitor for observation.  

- **LED Control:**  
  - An **LED connected to Digital Pin 8** serves as an alert indicator.  
  - When the mapped brightness exceeds a predefined threshold, the LED enters a **continuous blinking state**.  
  - The LED continues blinking even if light levels later decrease, maintaining system state memory.  

- **Serial Control:**  
  - The blinking can only be stopped by sending a **specific Serial command** (e.g., “STOP”) via the Serial Monitor.  
  - This demonstrates **Serial command override**, where user input can modify or reset hardware behavior in real time.  

***

### V. Circuit Diagram and Wiring  
- **Components and connections:**  
  - **Photoresistor (LDR)** → Analog Pin **A2**  
  - **LED Indicator** → Digital Pin **8** (through 220Ω resistor → GND)  
  - **Arduino Uno** connected via USB for Serial communication  
- **Power supply:** USB (5V)  
- **Monitoring interface:** Serial Monitor in the Arduino IDE  

***

### VI. Team Members  
- **Team Leader:** Atas, Mikkos Cepie  
- **Members:**  
  - Gito, Rhic Emmanuel — *Score: 99*  
  - Serrona, John Mark — *Score: 100*  

***
