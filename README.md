# Rain-Sensor-Clothes-Protection-System
This Arduino-based project detects rainfall using a rain sensor and automatically pulls in hanging clothes using a servo motor. It is designed to prevent clothes from getting wet when it rains.

# Working Principle
The rain sensor detects the presence of rain by sensing water droplets. When rain is detected, the sensor sends a signal to the Arduino. The Arduino then triggers the servo motor, which moves the clothes to a covered area to protect them from getting wet, Once the rain stops, the system can return the clothes to their original drying position.

# Components Used

| Component                      | Description                                                               |
| ------------------------------ | ------------------------------------------------------------------------- |
| **Arduino Uno**                | Main microcontroller that reads sensor data and controls the servo motor. |
| **Rain Sensor Module**         | Detects rain through conductive pads and sends a signal to the Arduino.   |
| **Servo Motor (SG90)**         | Rotates to move the clothesline when rain is detected.                    |
| **Jumper Wires**               | Connect all the components electrically to the Arduino.                   |
| **9V Battery**                 | Provides portable power to the Arduino and other components.              |
| **Cardboard House Model**      | Simulated house used as a visual prototype for mounting components.       |
| **Clothesline + Mini Clothes** | Represents hanging clothes that are automatically pulled inside.          |
| **Baseboard (Black Platform)** | A sturdy surface to mount the house and components.                       |

# Project Showcase

Circuit Connection
The image below shows the full hardware setup. It includes the Arduino Uno, rain sensor, servo motor, and the power supply all mounted on a black baseboard.

![IMG_1896](https://github.com/user-attachments/assets/bb8300f3-62cc-4974-aba3-03f36dce9e0d)

No Rain Condition
This is the default state. When there is no rain detected, the clothesline remains outside the coverd area, and the servo motor holds its initial angle.

![IMG_1894](https://github.com/user-attachments/assets/e575addb-0d60-4155-8393-72c4a1b41d68)

Rain Condition
When rain is detected by the sensor, the Arduino activates the servo motor to pull the clothesline inside the coverd area, protecting the clothes from getting wet.

![IMG_1895](https://github.com/user-attachments/assets/fc0f7e98-4518-4156-aaf4-abccea094ca9)


# Future Improvements
- Integrate WiFi module (ESP8266) to send rain alerts via smartphone.
- Add manual override button to control clothesline manually.
