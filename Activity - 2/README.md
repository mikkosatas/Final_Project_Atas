**Laboratory Activity #2 – Working with Analog Signals**  

***

### I. Description  
This laboratory activity introduces the concept of **analog signals** and their implementation in an **Arduino-based circuit**. It extends the digital running light experiment from *Laboratory Activity #1* by adding **analog output control** to vary LED brightness. The experiment demonstrates how analog values represent signal intensities and how these can be used to control hardware components such as LEDs, providing insight into **analog-to-digital interfacing** within IoT systems.

***

### II. Objectives  
1. Discuss analog signals and their implementation in Arduino circuits.  
2. Understand analog-to-digital signal conversion and scaling concepts.  

***

### III. Concepts Applied  
- Analog signal representation  
- **Pulse Width Modulation (PWM)** using `analogWrite()`  
- Use of arrays for efficient pin management  
- Iterative control through `while()` loops  
- Sequential logic execution  
- Timing control using `delay()` functions  

***

### IV. System Behavior  
- **Pins used:** Digital Pins 8–12  
- **Control method:** LED pin numbers stored in an array for structured looping.  
- **Sequence operation:**  
  1. The program gradually **increases** LED brightness from **Pin 12 → Pin 8**, reaching maximum analog value.  
  2. Once all LEDs are fully lit, it gradually **decreases** brightness from **Pin 12 → Pin 8** back to zero.  
- **Visual effect:**  
  The LEDs create a flowing light pattern with varying brightness, illustrating how analog output modifies signal intensity.  
- **Control logic:**  
  Arrays and iterative loops simplify management and sequencing of multiple LEDs for a smooth brightness transition.  

***

### V. Circuit Diagram and Wiring  
- **Arduino Uno** connected to five LEDs on **digital pins 8–12**.  
- **Array structure:** `int ledPins[5] = {8, 9, 10, 11, 12};`  
- **Connection setup:**  
  Each LED is connected in series with a **220Ω resistor** leading to **GND**.  
- The PWM effect controls LED brightness through `analogWrite()` rather than simple ON/OFF logic.  

***

### VI. Team Members  
- **Team Leader:** Gito, Rhic Emmanuel  
- **Members:**  
  - Atas, Mikkos Cepie — *Score: 99*  
  - Serrona, John Mark — *Score: 100*  

***
