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
| Image                                                                                                                                                 | Description               |
| ----------------------------------------------------------------------------------------------------------------------------------------------------- | ------------------------- |
| ![IMG_1896](https://github.com/user-attachments/assets/acb04815-c15a-4ef5-b143-f7d6ee226407                                                           | **🔌 Circuit Connection** |
| Displays how the rain sensor, servo motor, and Arduino are connected on the project baseboard.                                                        |                           |
| ![IMG_1894](https://github.com/user-attachments/assets/b321ab4a-3df9-478c-9296-e46bf297dbfe)                                                          | **🌤️ No Rain Condition** |
| The clothesline remains outside. No rain is detected, and the servo motor holds its initial position.                                                 |                           |
| ![Uploading IMG_1895.jpeg…]()                                                                                                                         | **🌧️ Rain Condition**    |
| Rain is detected by the sensor, triggering the servo motor to pull the clothesline inside the coverd area to protect the clothes.                     |                           |


# Future Improvements
- Integrate WiFi module (ESP8266) to send rain alerts via smartphone.
- Add manual override button to control clothesline manually.
