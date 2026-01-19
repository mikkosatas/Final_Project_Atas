**Laboratory Activity #7 – Controlling Arduino Using FastAPI**  


***

### I. Description  
This laboratory activity demonstrates **real-time, bidirectional control** of an Arduino board through a **FastAPI web server**. The system integrates hardware inputs (via push buttons) and software-triggered HTTP requests, allowing both physical and web-based mechanisms to toggle LED states. This experiment models an **IoT architecture** by showcasing how **hardware events** and **API-based commands** can seamlessly work together for synchronized device control.

***

### II. Objectives  
1. Implement Arduino Serial communication for hardware control.  
2. Utilize **Python** and **FastAPI** to create HTTP endpoints for Arduino interaction.  
3. Develop a **bidirectional control system** integrating physical inputs with web-based command execution.  

***

### III. Concepts Applied  
- Serial communication between Arduino and Python  
- Digital input handling using **push buttons**  
- **Edge detection** and LED state toggling logic  
- Digital output control for LED indicators  
- HTTP server creation and route handling using **FastAPI**  
- Mapping **web requests** to **serial commands**  
- Synchronization of LED states between hardware and software  

***

### IV. System Behavior  

#### A. Hardware Configuration  
- **Components Used:**  
  - **Three LEDs:** Red, Green, Blue  
  - **Three Push Buttons:** corresponding to each LED  

- **Pin Assignments:**  
  - Red LED → Digital Pin **5**  
  - Green LED → Digital Pin **6**  
  - Blue LED → Digital Pin **7**  
  - Button 1 → Digital Pin **10**  
  - Button 2 → Digital Pin **11**  
  - Button 3 → Digital Pin **12**  

#### B. Arduino Sketch Behavior  
1. Continuously **reads button inputs** and toggles corresponding LEDs when pressed.  
2. Listens for incoming **serial commands** from the Python FastAPI server.  
3. Parses characters from Serial to toggle LEDs accordingly.  
4. Maintains synchronized LED states whether triggered manually or via software.  

#### C. FastAPI Application Behavior  
1. Runs a local **HTTP server** that defines interactive endpoints for LED control:  
   - `/led/red` → Toggle **Red LED**  
   - `/led/green` → Toggle **Green LED**  
   - `/led/blue` → Toggle **Blue LED**  
   - `/led/on` → Turn **all LEDs ON**  
   - `/led/off` → Turn **all LEDs OFF**  
2. Sends corresponding **single-character serial commands** to Arduino via **PySerial**.  
3. Ensures LED states remain consistent, even when hardware buttons are used.  

***

### V. Circuit Diagram and Wiring  
- **Arduino Uno connections:**  
  - LEDs connected to **Pins 5, 6, and 7** through **220Ω resistors** → GND  
  - Push buttons connected to **Pins 10, 11, and 12** using pull-down or internal pull-up configuration  
- **Power Supply:** USB-connected, enabling both power and serial communication with the FastAPI server.  
- The system operates interactively, enabling LED control via both **physical** (push button) and **remote API requests**.  

***

### VI. Team Members  
- **Team Leader:** Dela Cerna, Gabrielle  
- **Members:**  
  - Atas, Mikkos Cepie  
  - Bonganay, Lhojen Faith  
  - Gito, Rhic Emmanuel  
  - Ocubillo, Gypsy Brygx  
  - Serrona, John Mark  
  - Villamor, Lester John  

***
