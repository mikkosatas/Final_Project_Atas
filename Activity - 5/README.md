**Laboratory Activity #5 – Receiving Serial Connection Using Arduino from Python**  



***

### I. Description  
This laboratory activity demonstrates **serial communication** between a **Python application** and an **Arduino microcontroller**, where Python sends commands that control the Arduino’s LED outputs in real time. The setup creates an **interactive control system** allowing the user to toggle individual LEDs, switch all LEDs ON or OFF, and receive **textual feedback** from the Arduino. This experiment emphasizes **Python–hardware integration**, real-time control, and bidirectional data exchange using basic serial communication principles.

***

### II. Objectives  
1. Understand and implement Arduino Serial communication.  
2. Utilize **Python** as a tool for sending commands to Arduino.  
3. Develop an **interactive control system** for LED management via serial commands.  

***

### III. Concepts Applied  
- Serial communication using `Serial.begin()`, `Serial.available()`, and `Serial.read()`  
- Case-insensitive input handling for command flexibility  
- LED control via **digital output pins**  
- Python serial communication using the **PySerial library**  
- Menu-driven, continuously running Python script for user interaction  
- Error handling for unrecognized commands  
- Modular Arduino programming with **header file functions** for reusable LED control logic  

***

### IV. System Behavior  
- **Hardware setup:**  
  - Arduino connected to **three LEDs** (Red, Green, and Blue).  
  - Communication established through a **serial port** with commands received from a Python script.  

- **Behavior overview:**  
  1. The Python program sends single-character commands to the Arduino.  
  2. The Arduino interprets each command and performs the correct LED action.  
  3. The Arduino responds with textual feedback confirming each operation (e.g., `RED ON`, `ALL OFF`, `ERR: UNKNOWN COMMAND`).  

- **Command mapping (Python → Arduino):**  
  | Command | Function | Description |
  |:--------:|:----------|:-------------|
  | R / r | Toggle Red LED | Switches the red LED ON/OFF |
  | G / g | Toggle Green LED | Switches the green LED ON/OFF |
  | B / b | Toggle Blue LED | Switches the blue LED ON/OFF |
  | A / a | All LEDs ON | Activates all LEDs simultaneously |
  | O / o | All LEDs OFF | Turns all LEDs OFF |
  | X / x | Exit | Terminates the Python application |
  | Other | Error | Displays “ERR: UNKNOWN COMMAND” |

- **Interactive feedback:**  
  Every command issued through the Python interface immediately triggers a hardware response on the Arduino and provides printed confirmation in both the Serial Monitor and Python terminal.

***

### V. Circuit Diagram and Wiring  
- **Arduino Uno connections:**  
  - **Red LED:** Digital Pin **8** (through 220Ω resistor → GND)  
  - **Green LED:** Digital Pin **9** (through 220Ω resistor → GND)  
  - **Blue LED:** Digital Pin **10** (through 220Ω resistor → GND)  
- **Power supply:** USB connection (enabling Serial communication with Python)  
- **Control interface:** Python script communicating via **COM port** using **PySerial**

***

### VI. Team Members  
- **Team Leader:** Bonganay, Lhojen Faith  
- **Members:**  
  - Atas, Mikkos Cepie  
  - Dela Cerna, Gabrielle  
  - Gito, Rhic Emmanuel  
  - Ocubillo, Gypsy Brygx  
  - Serrona, John Mark  
  - Villamor, Lester John  

***
