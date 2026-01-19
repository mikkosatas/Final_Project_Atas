**Laboratory Activity #1 – Working with Digital Signals**  


***

### I. Description  
This laboratory activity demonstrates **digital output control using Arduino**, focusing on the manipulation of digital signals. Five LEDs are used to create a running light effect, sequentially illuminating in a forward and reverse pattern. The program visualizes **HIGH/LOW transitions** (5V/0V) with one-second delays, providing an introductory understanding of digital signal timing and control in IoT systems.

***

### II. Objectives  
1. Review Arduino as a device for implementing IoT systems.  
2. Discuss digital signals and their application in Arduino circuits.  

***

### III. Concepts Applied  
- Digital signal states: **HIGH = 5V**, **LOW = 0V**  
- **pinMode(pin, OUTPUT)** – Configures a pin as an output  
- **digitalWrite(pin, HIGH/LOW)** – Sets the output state of a pin  
- **delay(ms)** – Introduces timing delays for synchronization  
- Sequential programming for chase effect logic  
- Breadboard prototyping with **current-limiting resistors**

***

### IV. System Behavior  
- **Pins used:** 8, 9, 10, 11, and 12  
- **Forward sequence:**  
  LEDs turn ON sequentially → Pin 8 → 9 → 10 → 11 → 12 (1 second per transition)  
- **Reverse sequence:**  
  LEDs turn OFF sequentially → Pin 12 → 11 → 10 → 9 → 8 (1 second per transition)  
- **Cycle duration:** 10 seconds (continuous loop)  
- **Visual effect:** A left-to-right “running light” followed by a right-to-left extinguish pattern.  

***

### V. Circuit Diagram and Wiring  
- **Arduino Uno** digital pins connected to **breadboard LEDs**.  
- **Wiring color scheme:**  
  - Pin 8 → Orange wire  
  - Pin 9 → Yellow wire  
  - Pin 10 → Green wire  
  - Pin 11 → Blue wire  
  - Pin 12 → Red wire  
- Each LED connects through a **220Ω resistor** to **GND**.  

***

### VI. Team Members  
- **Team Leader:** Serrona, John Mark L.  
- **Members:**  
  - Atas, Mikkos Cepie — *Score: 100*  
  - Gito, Rhic Emmanuel — *Score: 99*  

***
