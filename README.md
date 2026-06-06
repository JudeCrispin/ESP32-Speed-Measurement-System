# 🚗 ESP32-Based Speed Measurement System Using IR Sensors

A real-time speed measurement system that calculates the speed of a moving object using two IR sensors and displays the result on an OLED screen.

This project integrates:

* **ESP32** – Main controller
* **Dual IR Sensors** – Object detection
* **SSD1306 OLED Display** – Speed visualization
* **Serial Monitor** – Debugging and monitoring

---

# 📌 Features

* 🚗 Real-time speed measurement
* 📏 Fixed-distance object tracking
* ⚡ Fast response using ESP32
* 📺 OLED speed display
* 🖥️ Serial monitor output
* 🔍 Non-contact speed detection
* 🎓 Ideal for embedded systems learning

---

# 🛠️ Hardware Requirements

## Components Used

* ESP32 Development Board
* 2 × IR Obstacle Sensors
* SSD1306 OLED Display (128×64, I2C)
* Breadboard
* Jumper Wires
* USB Cable

---

# ⚙️ Working Principle

The system uses two IR sensors placed at a known distance apart.

When an object passes:

1. Sensor 1 detects the object and starts the timer.
2. Sensor 2 detects the object and stops the timer.
3. The ESP32 calculates the time taken to travel between the sensors.
4. Speed is calculated using:

```text
Speed = Distance / Time
```

5. The calculated speed is displayed on the OLED screen.

---

# 📐 Speed Calculation Formula

Distance between sensors:

```text
0.10 meters (10 cm)
```

Speed formula:

```text
Speed = Distance / Time Taken
```

Example:

```text
Distance = 0.10 m
Time = 0.5 s

Speed = 0.10 / 0.5
       = 0.2 m/s
```

---

# 🔌 Circuit Connections

## IR Sensor 1

| IR Sensor | ESP32   |
| --------- | ------- |
| VCC       | 3.3V    |
| GND       | GND     |
| OUT       | GPIO 34 |

---

## IR Sensor 2

| IR Sensor | ESP32   |
| --------- | ------- |
| VCC       | 3.3V    |
| GND       | GND     |
| OUT       | GPIO 35 |

---

## OLED Display (SSD1306)

| OLED Pin | ESP32   |
| -------- | ------- |
| VCC      | 3.3V    |
| GND      | GND     |
| SDA      | GPIO 21 |
| SCL      | GPIO 22 |

---

# 📂 Project Structure

```text
ESP32-Speed-Monitor/
├── ESP32_Speed_Monitor.ino
├── circuit_diagram.png
├── Working_video.mp4
├── README.md
└── LICENSE
```

---

# 📦 Required Libraries

Install the following libraries using Arduino IDE Library Manager:

```text
Adafruit GFX Library
Adafruit SSD1306 Library
Wire Library
```

---

# ▶️ How to Run the Project

## Step 1 — Install Arduino IDE

Download and install Arduino IDE.

---

## Step 2 — Install ESP32 Board Package

Open:

```text
File → Preferences
```

Add:

```text
https://raw.githubusercontent.com/espressif/arduino-esp32/gh-pages/package_esp32_index.json
```

Then install ESP32 boards through:

```text
Tools → Board Manager
```

---

## Step 3 — Install Required Libraries

Install:

* Adafruit GFX
* Adafruit SSD1306

---

## Step 4 — Connect Components

Connect the IR sensors and OLED display according to the circuit diagram.

---

## Step 5 — Upload the Code

1. Select ESP32 board.
2. Select COM Port.
3. Upload the sketch.

---

## Step 6 — Test the System

Move an object through:

```text
IR Sensor 1 → IR Sensor 2
```

The OLED will display the calculated speed.

---

# 📺 Example OLED Output

```text
Speed:
0.45 m/s
```

---

# 🧠 System Flow

```text
Object Passes IR1
        ↓
Start Timer
        ↓
Object Passes IR2
        ↓
Stop Timer
        ↓
Calculate Time Taken
        ↓
Compute Speed
        ↓
Display on OLED
```

---

# 📸 Project Demonstration

## Hardware Setup

(Add image here)

---

## Testing Phase

(Add image here)

---

## OLED Output

(Add image here)

---

# 🚀 Applications

* Vehicle Speed Detection
* Conveyor Belt Monitoring
* Industrial Automation
* Robotics
* Smart Traffic Systems
* Motion Analysis
* Embedded Systems Education

---

# 🔮 Future Enhancements

* Wireless monitoring using Wi-Fi
* Data logging to cloud platforms
* Mobile app integration
* Multiple sensor checkpoints
* Vehicle counting system
* Speed violation alert system
* IoT dashboard visualization

---

# 📊 Technical Specifications

| Parameter       | Value               |
| --------------- | ------------------- |
| Controller      | ESP32               |
| Sensor Type     | IR Obstacle Sensors |
| Display         | SSD1306 OLED        |
| Sensor Distance | 10 cm               |
| Communication   | I2C                 |
| Speed Unit      | m/s                 |

---

# 📜 License

This project is intended for educational, academic, and research purposes.

---

⭐ If you find this project useful, please consider starring the repository.
