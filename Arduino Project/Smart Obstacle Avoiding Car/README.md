# 🚗 Smart Obstacle Avoiding Robot Car

This project is an Arduino-based smart robotic car that can operate in both **manual (Bluetooth-controlled)** and **automatic (obstacle-avoiding)** modes. It also includes real-world features like reverse warning system, headlights, and obstacle alert.

---

## 🔥 Features

* 🤖 **Automatic Obstacle Avoidance Mode**
* 📱 **Bluetooth Manual Control**
* 💡 **Headlight Control (ON/OFF via remote)**
* 🔊 **Reverse Buzzer (3 beeps per second)**
* 🚨 **Obstacle Detection Buzzer**
* 💡 **Reverse LED Indicator**
* 🔁 Mode switching via button or remote

---

## ⚙️ Components Used

* Arduino Uno
* L293D Motor Driver Shield (AFMotor)
* 4 DC Motors + Chassis
* Ultrasonic Sensor (HC-SR04)
* Servo Motor (for sensor rotation)
* Bluetooth Module (HC-05/HC-06)
* LEDs (Headlight + Reverse light)
* Buzzer (Obstacle + Reverse)
* 18650 Batteries (7.4V recommended)
* Resistors

---

## 🎮 Control System

### 🔘 Modes

* **Automatic Mode** → Command: `1`
* **Manual Mode** → Command: `2`

### 🚗 Movement

* Forward → `forward` / `go`
* Backward → `backward`
* Left → `left`
* Right → `right`
* Stop → `stop`

### 💡 Headlight

* ON → `3`
* OFF → `4`

---

## 🔌 Pin Configuration

| Component          | Pin |
| ------------------ | --- |
| Ultrasonic Echo    | A0  |
| Ultrasonic Trigger | A1  |
| Button             | A2  |
| Servo              | D10 |
| Obstacle Buzzer    | D2  |
| Reverse Buzzer     | D4  |
| Reverse LED        | D9  |
| Headlight          | D12 |

---

## ⚡ Power Setup

* Recommended: **2 × 3.7V (7.4V total)**
* Avoid using higher voltage without regulation
* Ensure common ground for all components

---

## 📸 Project Preview

*Add your project images here*

---

## 🚀 Future Improvements

* Automatic headlight (light sensor based)
* Turn indicators (left/right blink)
* Speed control
* Mobile app UI upgrade

---

## 👨‍💻 Author

**Shakil**

---

## ⭐ If you like this project

Give it a ⭐ on GitHub and share with others!
