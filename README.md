# Final Project – Serrona (COSC 111B: Internet of Things)

This repository contains all the laboratory activities and exam projects for **COSC 111B – CS Elective 3 (Internet of Things)**.  
It documents practical work on **Arduino, Python, FastAPI, sensors, LEDs, and serial communication**, progressing from basic digital output control to full IoT-style systems.

***

##  Repository Structure

### Midterm Activities
    Folder  Description 
    
    **Lab_Act_#1**  Digital signals, running light LEDs 
    **Lab_Act_#2**  Analog signals and PWM LED brightness control 
    **Lab_Act_#3**  Sensor-based fire detection using thermistor and LDR 
    **Lab_Act_#4**  Serial monitoring and control with a photoresistor 
    **Midterms_Lab_Exam** Smart lighting system with manual/auto modes 

###  Final Activities
    Folder | Description |
    
    **Lab_Act_#5** Python-to-Arduino serial LED control
    **Lab_Act_#6** Bidirectional Arduino–Python communication (button and LED control)
    **Lab_Act_#7** Web-controlled LEDs using FastAPI and Arduino
    **Finals_Lab_Exam** Arduino-to-Python client triggering remote LED API

> Each folder includes the source files and documentation relevant to that specific activity.

***

##  Common Files in Each Lab

| File / Asset | Description |
|---------------|-------------|
| `main.ino` | Main Arduino sketch for the activity |
| `main.py` | Python script for serial/API interaction (if applicable) |
| `main_functions.h` | Header file containing reusable Arduino functions |
| `breadboard_diagram.png` | Wiring or schematic diagram for hardware setup |

> Note: Not every lab includes all files — each folder contains only the files relevant to its specific task.

***

##  Tools and Technologies

- **Arduino IDE** – for compiling and uploading sketches  
- **Python** – with libraries: `pyserial`, `requests`, and `FastAPI`  
- **Code Editor** – Visual Studio Code or preferred IDE  
- **Hardware Components:** LEDs, resistors, push buttons, thermistor, photoresistor, breadboard, and jumper wires  

***

##  Notes

- Each lab is **self-contained**, with all files dedicated to its respective task.  
- Activities are divided into **Midterms** and **Finals** for easy navigation across course modules.  
- The repository acts as a **learning record and project portfolio**, highlighting the progression from basic Arduino I/O to integrated web-controlled IoT systems.

***

##  How to Use

1. Open the specific lab folder you wish to run.  
2. For Arduino-based activities:  
   - Open `main.ino` in the **Arduino IDE**.  
   - Select the correct **board** and **port**, then upload.  
3. For Python-enabled activities:  
   - Install all required dependencies.  
   - Run the script using:  
     ```bash
     python main.py
     ```
4. Follow the wiring setup in `breadboard_diagram.png` (or equivalent schematic).

***

###  Important

Don’t forget to check the [`README.md`](README.md) file in each lab for **detailed objectives, setup instructions, and system overviews**.

***
