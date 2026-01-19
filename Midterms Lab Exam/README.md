**Midterm Laboratory Exam – Smart Lighting System Using Arduino**  


***

### I. Description  
This laboratory activity demonstrates how to build a **smart lighting system using Arduino** that reacts to ambient light conditions. The system employs a **photoresistor** to sense light intensity and uses **three LEDs** to indicate low, medium, and high light levels. It supports both **manual** and **automatic modes**, allowing simulation of various environmental conditions such as cloudy, normal, or bright sunlight. This experiment enables students to practice **sensor data processing**, **threshold-based control**, and **Serial interaction** for dynamic system tuning and monitoring.  

***

### II. Objectives  
1. Learn to read analog sensor data using a photoresistor.  
2. Implement LED indicators for low, medium, and high light levels.  
3. Switch between manual and automatic operation modes.  
4. Adjust light thresholds dynamically or manually based on user input.  
5. Display system status and readings on the Serial Monitor.  

***

### III. Concepts Applied  
- Analog input handling using `analogRead()`.  
- Mapping sensor values to percentages via the `map()` function.  
- Threshold-based logic for activating LEDs at specific light levels.  
- Serial communication for receiving user commands and providing feedback.  
- String parsing using `startsWith()` and `substring()` for command processing.  
- Automatic mode operation using dynamic thresholds that emulate environmental lighting.  
- Modular and well-structured function design for maintainable code and readability.  

***

### IV. System Behavior  

#### A. System Overview  
- **Primary Components:**  
  - *Photoresistor (LDR)* → Connected to **Analog Pin A0** to measure ambient light intensity.  
  - *Green LED* → Indicates low light levels.  
  - *Yellow LED* → Indicates moderate light conditions.  
  - *Red LED* → Indicates high light brightness.  

- The system continuously monitors real-time light intensity and updates LED states accordingly, providing **visual feedback** of lighting conditions.  

***

#### B. Modes of Operation  

- **Manual Mode:**  
  - The user sets custom **low** and **high** light thresholds using Serial Monitor commands.  
  - Allows direct control of when each LED turns ON based on manually defined thresholds.  

- **Automatic Mode:**  
  - The system automatically adjusts thresholds based on preset environmental profiles:  

  | Environment | Low Threshold | High Threshold |
  |:-------------|:--------------|:---------------|
  | Cloudy | 0% | 40% |
  | Normal | 41% | 70% |
  | Bright Sunlight | 71% | 100% |

***

#### C. Serial Monitor Commands  

| Command | Description |
|:---------|:-------------|
| `MODE AUTO` | Switch system to **automatic mode** |
| `MODE MANUAL` | Switch system to **manual mode** |
| `SET LOW xx` | Set low threshold (in %) when in manual mode |
| `SET HIGH xx` | Set high threshold (in %) when in manual mode |
| *Invalid commands* | Responds with: **Error: Wrong command** |

***

#### D. Runtime Behavior  
- The system outputs every **1 second** to the Serial Monitor:  
  - Current **light intensity (%)**  
  - Current **mode (Manual/Automatic)**  
  - Currently **active LED (Green/Yellow/Red)**  
  - In automatic mode: the **interpreted environment** (*Cloudy*, *Normal*, *Bright*)  

This setup demonstrates how analog data can be processed into real-time, adaptive lighting feedback through both user control and automated response.  

***

### V. Circuit Diagram and Wiring  
- **Arduino Uno connections:**  
  - Photoresistor (LDR) → **Analog Pin A0** (voltage divider configuration)  
  - Green LED → **Digital Pin 8**  
  - Yellow LED → **Digital Pin 9**  
  - Red LED → **Digital Pin 10**  
  - Each LED connected through a **220Ω resistor** → GND  
- **Power Supply:** USB connection (5V)  
- **Serial Interface:** Used for command input and feedback display through the **Arduino IDE Serial Monitor**  

***

### VI. Team Members  
- **Team Leader:** Lhojen Faith Bonganay  
- **Members:**  
  - Mikkos Cepie D. Atas      
  - Gabrielle Delacerna  
  - Lester John Villamor 

***
