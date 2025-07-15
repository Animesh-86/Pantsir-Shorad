# 🛡️ PANTSIR SHORAD – Arduino-Powered 6-Wheeled Mobile Defense System

A 2nd-semester group project that simulates a **SHORAD (Short Range Air Defense)** system using an Arduino-powered, app-controlled, 6-wheeled mobile turret truck. It detects targets via ultrasonic sensors and simulates firing through pressure-powered syringe launchers. The system is wirelessly controlled using a custom-built Android app.

---

## 🚀 Project Overview

**PANTSIR SHORAD** is a smart, Arduino-based defense vehicle prototype designed to mimic short-range missile defense systems. The turret is mounted on a 6-wheeled robotic truck chassis and controlled via an Android app featuring a joystick-style button layout and a turret rotation slider.

### 🔑 Core Capabilities:
- 🚗 Full mobility (forward, backward, left, right)
- 🎯 360° turret rotation via app slider
- 🔫 4 syringe-based launchers with up/down control
- 🔍 Ultrasonic sensor for target detection
- 📱 Android app for total wireless control

---

## 🧰 Tech Stack & Hardware

- **Microcontroller**: Arduino Uno
- **Software**: Arduino IDE
- **Sensors**: Ultrasonic Sensor (HC-SR04)
- **Motors**:
  - 6x DC Motors (truck movement)
  - 3x Servo Motors:
    - 1 for turret rotation (360°)
    - 2 for syringe elevation (up/down)
- **Launch Mechanism**: Modified syringes + perfume/methanol for pressure-based firing
- **Modules & Components**:
  - Relay Modules
  - Voltage Booster
  - Battery Packs
  - Jumper Wires
  - 6-Wheel Chassis
  - Android App (Bluetooth/Wi-Fi based control)

---

## 🔧 Features

| Feature               | Description |
|------------------------|-------------|
| 6-Wheel Drive          | Controlled via app buttons for forward, backward, left, right |
| Turret Rotation        | 360° turret control using slider in the mobile app |
| Syringe Launchers      | 4 launchers (2 each side), move up/down via 2 servo motors |
| Ultrasonic Detection   | Detects objects/enemies with HC-SR04 ultrasonic sensor |
| Launch Simulation      | Perfume + voltage spark causes pressure-firing of syringe pistons |
| Android App Control    | User-friendly app with direction buttons and turret slider |

---

## 📱 Mobile App Interface

- 🎮 **Movement Controls**: On-screen buttons for:
  - Forward
  - Backward
  - Left Turn
  - Right Turn
- 🧭 **Turret Control**: Slider to rotate the turret smoothly up to 360°
- 🔘 All actions are mapped to signals received by the Arduino via Bluetooth/Wi-Fi

---

## 📸 Demonstration

Click the link below to view our working demo videos on Google Drive:

➡️ [Open Video Folder on Google Drive](https://drive.google.com/drive/folders/1P77771KLTzxsRbrKuZMiQimBULgIWe9E?usp=sharing)

---

## 🛠️ How It Works

1. The **ultrasonic sensor** detects nearby targets.
2. The **Arduino Uno** receives commands from the app and triggers:
   - **Truck motion** via 6 DC motors
   - **Turret rotation** via 1 servo motor (controlled using a slider)
   - **Syringe elevation** via 2 servo motors (one for each side)
3. **Voltage Booster** sends high voltage to simulate firing.
4. **Perfume or methanol** creates internal pressure, launching the syringe piston like a projectile.

---

## 🔋 Components Used

- Arduino Uno
- 6x DC Motors with driver module
- 3x Servo Motors (1 for turret, 2 for syringe control)
- 4x Syringes (modified as launchers)
- Ultrasonic Sensor (HC-SR04)
- Relay modules
- Voltage Booster
- Battery Pack
- Jumper wires
- 6-Wheel Chassis
- Android Mobile App

---

## 🔮 Future Improvements

- Use solenoids or pneumatic actuators for safer, controlled firing
- Add live video streaming with AI-based target recognition (OpenCV)
- Enable autonomous navigation with GPS and LIDAR
- Improve mobile app with real-time telemetry and visuals

---

## 📄 Project Status

✅ **Completed** as an academic prototype in Semester 2  
🧪 Future-ready for AI, IoT, and embedded system upgrades

---

## 📜 License

This project is intended for **educational use only**.  
Do not use for real-world defense or commercial deployment.

---

## 🙌 Acknowledgements

Huge thanks to our faculty, lab assistants, and teammates for supporting us through the development and testing of the PANTSIR SHORAD system.
