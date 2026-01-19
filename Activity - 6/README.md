**Laboratory Activity #6 – Bidirectional Control Using Arduino and Python**  



***

### I. Description  
This laboratory activity demonstrates **bidirectional serial communication** between an **Arduino microcontroller** and a **Python application**. It establishes a two-way data exchange, where hardware inputs from Arduino are transmitted to Python, which then responds with control commands back to Arduino in real time. This setup forms a **complete feedback loop**, showcasing the foundation of **IoT communication** and **computer–hardware integration** for interactive, low-latency systems.

***

### II. Objectives  
1. Understand and implement Arduino Serial communication.  
2. Utilize **Python** for serial data reception and command transmission.  
3. Implement real-time **bidirectional communication** between Arduino and Python.  

***

### III. Concepts Applied  
- Serial communication using `Serial.begin()`, `Serial.println()`, and `Serial.readStringUntil()`  
- Digital input handling with **push buttons**  
- **Edge detection** for capturing distinct button press events  
- State-based **LED control logic** on Arduino  
- Bidirectional serial data exchange between Arduino and Python  
- Python serial communication using the **PySerial library**  
- **Low-latency response handling** for near real-time feedback  

***

### IV. System Behavior  
- **Hardware components:**  
  - **Three push buttons** (input)  
  - **Three LEDs** (Red, Green, and Blue) connected as output indicators  

- **Outbound communication (Arduino → Python):**  
  - Each button press triggers the Arduino to send a specific character over Serial:  
    - Button 1 → `R`  
    - Button 2 → `G`  
    - Button 3 → `B`  
  - During this phase, no LED changes occur on Arduino itself; it only **transmits input data** to Python.  

- **Inbound communication (Python → Arduino):**  
  - The Python script continuously listens for incoming characters from Arduino.  
  - Upon receiving a character, Python sends back a corresponding control signal:  
    - `R` received → Python sends `1`  
    - `G` received → Python sends `2`  
    - `B` received → Python sends `3`  
  - Arduino then receives this return value and toggles the respective LED:  
    - `1` → Toggle **Red LED**  
    - `2` → Toggle **Green LED**  
    - `3` → Toggle **Blue LED**  

- **System outcome:**  
  - The communication loop enables **real-time, bidirectional control** between Python and Arduino.  
  - Average response latency is less than one second, demonstrating effective, synchronized interaction.  

***

### V. Circuit Diagram and Wiring  
- **Arduino Uno connections:**  
  - **Push Buttons:**  
    - Button 1 → Digital Pin **2**  
    - Button 2 → Digital Pin **3**  
    - Button 3 → Digital Pin **4**  
  - **LEDs:**  
    - Red LED → Digital Pin **8**  
    - Green LED → Digital Pin **9**  
    - Blue LED → Digital Pin **10**  
  - All LEDs connected through **220Ω resistors** to **GND**.  
  - Common ground shared between Arduino and buttons.  

- **Power and communication:**  
  - Powered via USB, which also serves as the **Serial connection** to the Python program.  

***

### VI. Team Members  
- **Team Leader:** Villamor, Lester John  
- **Members:**  
  - Atas, Mikkos Cepie  
  - Bonganay, Lhojen Faith  
  - Dela Cerna, Gabrielle  
  - Gito, Rhic Emmanuel  
  - Ocubillo, Gypsy Brygx  
  - Serrona, John Mark  

***
