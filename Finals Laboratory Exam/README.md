**Finals Laboratory Exam – Arduino-to-Python Client System**  



***

### I. Description  
This laboratory activity demonstrates an **Arduino-to-Python client system** where a **push button on an Arduino** remotely triggers actions on a separate LED system through a **Python-based API client**. The Arduino does not communicate directly with the API; instead, it sends data via **serial communication** to a Python program, which subsequently invokes an **HTTP endpoint** and displays the resulting response in the terminal. This setup highlights how hardware input can drive network-based operations, bridging physical and web-based control systems.  

***

### II. Objectives  
1. Implement serial communication between Arduino and Python.  
2. Use a push button as an input device with **software debouncing** for accuracy.  
3. Send a signal representing the **group number** from Arduino to Python.  
4. Trigger HTTP requests from Python to a **remote API endpoint** based on Arduino input.  
5. Provide clear terminal feedback corresponding to each API call and response.  

***

### III. Concepts Applied  
- Digital input reading using `digitalRead()`.  
- **Software debouncing** to ensure single detection per button press.  
- Serial communication between Arduino and Python for data transmission.  
- Continuous serial listening in Python using the **`serial`** module.  
- HTTP requests handling in Python via the **`requests`** library.  
- Case-insensitive input processing and normalization of received values.  
- Error handling and command validation on both Arduino and Python sides.  

***

### IV. System Behavior  

#### A. Components  
- **Arduino board** – equipped with one **push button** for user input.  
- **Python client program** – running on a computer to receive serial data and handle API calls.  
- **Remote LED API endpoint** – accessible via HTTP, capable of toggling LEDs based on incoming group identifiers.  

***

#### B. Workflow Overview  
1. The user **presses the button** on the Arduino.  
2. Arduino sends a **group number** through the Serial interface.  
3. The Python application continuously listens for serial input.  
4. Upon receiving a valid signal, the Python client sends an **HTTP request** to:  
   `/led/group/<group_number>/toggle`  
5. The Python terminal then prints:  
   - The **group number received** from Arduino  
   - The **API endpoint** called  
   - The **API response** (success or error message)  

***

#### C. Rules of Operation  
- Each **button press** must trigger **exactly one API request**.  
- **Long or held presses** must not produce repeated API calls, ensured by the software debounce function.  
- All **serial inputs** are validated to avoid invalid or malformed data transmission.  

***

### V. Circuit Diagram and Wiring  
- **Arduino Uno connections:**  
  - Push Button → Digital Pin **2** (configured with INPUT_PULLUP)  
  - Button’s opposite leg → **GND** through resistor  
- **Power Source:** USB (providing both power and serial data connection)  
- **Python Client:** communicates using **PySerial** and **Requests** libraries.  
- **Network Requirements:** Python script must have internet access to reach the remote LED API.  

***

### VI. Example Interaction Flow  
| Action | Arduino Output | Python Terminal Output |
|:--------|:----------------|:------------------------|
| Button press detected | Sends `3` | “Group 3 received → Calling /led/group/3/toggle … Response: Success” |
| Invalid serial data | Sends malformed value | “Error: Invalid input received” |
| Held button | Single signal due to debounce | “Group 3 received → API call executed once” |

This demonstrates a dependable **real-time linkage** between physical user input and web-based API processing, simulating scalable IoT interactions.  

***

### VII. Team Members  
- **Team Leader:** Dela Cerna, Gabrielle  
- **Members:**  
  - Atas, Mikkos Cepie  
  - Bonganay, Lhojen Faith  
  - Gito, Rhic Emmanuel  
  - Ocubillo, Gypsy Brygx  
  - Serrona, John Mark  
  - Villamor, Lester John  

***

Would you like me to include a **“VIII. Program Code and Explanation”** section next — showing both the Arduino sketch and the Python client structure (with sample FastAPI endpoint calls and serial handling)?
