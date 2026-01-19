**Laboratory Activity #3 – Working with Sensors**  


***

### I. Description  
This laboratory activity introduces the use of **sensor components** commonly utilized in **IoT applications** and demonstrates how multiple sensors can be integrated into a single **Arduino-based circuit**. The experiment implements a simple **fire detection system** using a **thermistor** (for temperature sensing) and a **photoresistor** (for light intensity measurement). By combining environmental data from these two sensors, the system shows how **real-world analog signals** can be processed in Arduino to trigger hardware-based alert mechanisms.

***

### II. Objectives  
1. Familiarize students with basic sensor components used in IoT systems.  
2. Integrate multiple sensor components within an Arduino circuit.  
3. Design and implement a simple fire detection system.  

***

### III. Concepts Applied  
- Analog sensor data acquisition  
- Thermistor temperature calculation using the **Beta parameter equation**  
- Light intensity sensing using a **photoresistor (LDR)**  
- Threshold-based decision logic  
- Function modularization for organized sensor data handling  
- Use of `#define` for pin configuration  
- Use of `const` variables for fixed threshold values  
- Digital output control for alert signaling  

***

### IV. System Behavior  
- **Sensors used:**  
  - **Thermistor** – Connected to **Analog Pin A0** to measure temperature in °C.  
  - **Photoresistor (LDR)** – Connected to **Analog Pin A2** to measure light intensity.  

- **Program logic:**  
  1. Each sensor reading is processed using separate functions for clear and modular code structure.  
  2. The system continuously reads both sensor values.  
  3. When both temperature and light intensity exceed their predefined threshold values, a fire condition is assumed.  

- **Alert mechanism:**  
  - An **LED connected to Digital Pin 12** rapidly blinks to signal a potential fire event.  
  - This demonstrates how multiple sensor inputs can be evaluated together to determine system responses in real time.  

***

### V. Circuit Diagram and Wiring  
- **Arduino Uno** connects to:  
  - **Thermistor** → Analog Pin **A0**  
  - **Photoresistor (LDR)** → Analog Pin **A2**  
  - **LED Indicator** → Digital Pin **12** (via 220Ω resistor → GND)  
- **Power source:** USB or external 5V supply  
- Circuit designed for modular testing and sensor reading validation  

***

### VI. Team Members  
- **Team Leader:** Serrona, John Mark  
- **Members:**  
  - Atas, Mikkos Cepie — *Score: 99*  
  - Gito, Rhic Emmanuel — *Score: 100*  

***
