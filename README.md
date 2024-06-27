# Arduino Mega LED Bar Graph Display

#### Project Overview

This project demonstrates how to create an LED bar graph display with an Arduino Mega. The bar graph consists of 10 LEDs that visually represent an analog sensor's value connected to A0. As the sensor value changes, the number of illuminated LEDs in the bar graph changes accordingly.

#### Components Needed

- **Arduino Mega**
- **10x LEDs**
- **10x Resistors (appropriate values for your LEDs)**
- **Jumper Wires**

#### Block diagram


#### Circuit Setup

1. **Connect LEDs to Arduino Mega:**
   - **LED Cathodes (Shorter leg):** Connect each to a digital pin (2 to 11) through a current-limiting resistor (typically 220 ohms).
   - **LED Anodes (Longer leg):** Connect them all to GND.

2. **Analog Sensor (e.g., Potentiometer):**
   - Connect the sensor output to A0.

#### Instructions

1. **Circuit Setup:**
   - Connect the LEDs and the analog sensor as described in the circuit setup section.

2. **Code Upload:**
   - Open the Arduino IDE and create a new sketch.
   - Copy and paste the provided Arduino code into the sketch.

3. **Testing:**
   - Upload the code to the Arduino Mega.
   - Observe the LED bar graph. As you vary the analog sensor (e.g., turn the potentiometer), the number of illuminated LEDs should change to reflect the sensor value.

#### Applications

- **Visual Feedback:** Use for visualizing sensor data or analog input levels.
- **Monitoring Systems:** Implement in projects where quick visual feedback of data is beneficial.
- **Prototyping:** Useful for testing and prototyping projects requiring LED bar graph displays.

#### Notes

- Adjust the `ledPins[]` array and `numLeds` variable if you use different pin configurations or a different number of LEDs.
- Ensure each LED is properly connected with a current-limiting resistor to prevent damage to the LEDs and Arduino.

---

🌐 [ProjectsLearner](https://projectslearner.com/learn/arduino-mega-led-bar-graph-display)  
📧 [projectslearner@gmail.com](mailto:projectslearner@gmail.com)  
📸 [Instagram](https://www.instagram.com/projectslearner/)  
📘 [Facebook](https://www.facebook.com/projectslearner)  
▶️ [YouTube](https://www.youtube.com/@ProjectsLearner)  
📘 [LinkedIn](https://www.linkedin.com/in/projectslearner)  

Crafted for you with ❤️ from ProjectsLearner