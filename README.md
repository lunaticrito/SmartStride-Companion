# SmartStride-Companion

## INSPIRATION
- Visually impaired individuals face challenges in navigating safely and independently (i.e crossing the road)
- Elderly individuals, including Glaucoma patients, face such issues too
- Traditional canes do not detect head-level or distant obstacles
- Lack of real-time feedback, voice control, or location sharing in low-cost assistive devices
Through this project, we aim to provide an affordable,feature-rich navigation system using accessible hardware.

## OBJECTIVE
Our system focuses on designing a real-time assistive navigation system and aims to enhance user safety, independence, and spatial awareness during mobility.
* Vision : Smart, real-time assistive system to support the mobility of visually impaired individuals.
* Functionality : obstacle detection, voice command interaction, location tracking, and alert communication.
* Relevance : Support the safety and mobility of visually impaired individuals and make them self-reliant.

## OVERVIEW
This device combines several technologies on one platform:  
+ At its heart is the Arduino Nano, coordinating all input and feedback.
+ Ultrasonic sensors detect nearby obstacles.
+ GPS module offers precise location guidance. 
+ Voice recognition empowers the user with control via spoken commands. 
+ The vibration motor provides tactile alerts. 
+ The SIM800L GSM module adds emergency connectivity.

With these elements, our system enhances safety, confidence, and autonomy for users. 

## COMPONENTS
- Arduino Nano: Compact, popular microcontroller 
- HC-SR04 Ultrasonic Sensor: Detects objects up to 2 meters away, 96% measurement accuracy  
- Neo 6M GPS Module: Provides real-time geolocation  
- Voice Recognition Module: Supports multiple commands, 90%+ accuracy in controlled environments  
- Vibration Motor: Delivers instant tactile feedback  
- SIM800L GSM Module: Sends SMS or makes calls in emergencies  
- 12V Battery: Powers entire device  
- DC to DC Boost Converter: Stabilizes voltage  
Resistors, toggle switch, and NPN transistor: Basic circuit regulation and switching

## WIRING: 
* Ultrasonic Sensor : TRIG → A1, ECHO → A0, VCC → 5V, GND → GND
* GPS Module : TX → D8, RX → D9
* SIM800L : RXD → D2, TXD → D3, Power from Boost Converter
* Vibration Motor : Driven by NPN transistor with 200Ω base resistor
* Power System : 12V battery → Arduino VIN & DC Boost → SIM800L
* Voice Module : RDX → D8, RTX → D9 (shared serial)

### Feature - A : Obstacle Detection 
- HC-SR04 sensors: VCC to 5V, GND to GND (breadboard)
- Trig/Echo pins: connected to separate Arduino digital pins
- Piezo buzzer: Arduino digital pin → resistor → buzzer → GND
- Breadboard: Power distribution (5V and GND rails)
- Jumper wires: connect all components to Arduino and breadboard

## CODE & EXPLANATION
The code is structured into key sections: 
* Sensor Reading: Continuously polls the HC-SR04 for distances  
* Obstacle Logic: If an obstacle is detected within a set threshold, the Arduino signals the vibration motor through the transistor. 
* Navigation: GPS data can be processed to alert or inform the user of location or initiate emergency sequence via GSM. 
* Voice Recognition: Listens for user commands ("stop," "turn," etc.) and triggers respective actions. 
* Emergency Handling: On command or specific triggers, uses SIM800L to send SMS with coordinates. 

## CHALLENGES FACED
- Interference and signal noise with GSM and GPS modules, especially indoors
- False positives/negatives from ultrasonic detection, especially with soft or angled surfaces 
- Voice recognition sensitivity fluctuated in noisy settings, requiring fine-tuning 
- Battery management for all-day operation
- Ensuring compactness and wearability without sacrificing functionality

## FUTURE IMPROVEMENTS
+ Integrate AI-based object recognition using cameras 
+ Enhance voice command library for more natural conversation 
+ Develop a wearable, lightweight casing 
+ Add Bluetooth or Wi-Fi for mobile app connectivity  Improve power efficiency and battery technology

