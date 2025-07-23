# 3D Printed 5 DOF Robotic Arm with Gripper

This project presents the design, fabrication, and control of a **5 Degrees of Freedom (DOF) Robotic Arm** with an attached gripper, built using **FDM 3D printing** and **open-source electronics/software**. The robotic arm is capable of basic pick-and-place operations and can be operated in both position and velocity control modes using an Arduino.

---

## 🔧 Project Objectives

1. **Fabrication** of the robotic arm using open-source 3D-printable designs and FDM (Fused Deposition Modeling) technology.
2. **Motion control** using open-source Windows software to control each servo motor individually.
3. **Hardcoded routines** for pick-and-place operations for repeatability and precision.
4. **Arduino programming** to enable both:
   - Position control mode
   - Velocity control mode

---

## 🧠 Additional Contributions

Apart from the core goals, the following enhancements were implemented:

- ✅ **Custom parallel connection** designed and fabricated to manage all six motors efficiently.
- ✅ **DC-to-DC Buck Converter** integrated in parallel configuration to:
  - Prevent voltage surges.
  - Maintain a constant potential supply.
- ✅ **Modular design** with easily removable joints and links for effortless **customization, maintenance, and upgrades**.

---

## 🗂️ Repository Contents

| File/Folder                | Description                                                   |
|---------------------------|---------------------------------------------------------------|
| `Arduino_Code/`           | Arduino sketches for interpreting commands and controlling motors |
| `Windows_Software/`       | Open-source control software for sending commands via USB/Serial |
| `Videos/Gripper_Test.mp4` | Demonstration of gripper actuation and grasping capability    |
| `Videos/Pick_Place.mp4`   | Full demonstration of pick and place routine                  |
| `README.md`               | This file                                                     |

---

## 🚀 Getting Started

### 🔌 Hardware Setup

1. Print all parts using an FDM 3D printer.
2. Assemble the arm and gripper.
3. Connect all 6 servo motors using the custom parallel wiring configuration.
4. Integrate the DC-DC Buck Converter for regulated voltage supply.

### 🖥️ Software Setup

1. Install the open-source control software (see `Windows_Software/`).
2. Upload the provided Arduino code to your Arduino board (UNO/Nano/etc.).
3. Connect the Arduino to your PC via USB.
4. Use the software GUI to send joint commands in either:
   - Manual control mode
   - Predefined pick and place sequences

---

## 🎥 Demonstration Videos

- Gripper Test – Shows the gripper opening and closing with precision.
- Pick and Place Demo – Demonstrates complete robotic movement with object handling.

---

## ⚙️ Technologies Used

- **FDM 3D Printing** – Fabrication of structural components
- **Arduino UNO/Nano** – Microcontroller for motor control
- **Servo Motors (x6)** – Actuators for joints and gripper
- **DC-DC Buck Converter** – Power management and surge protection
- **Open Source Software** – GUI-based motor control via Serial interface

---

## 🛠️ Future Scope

- Integrate Inverse Kinematics for smoother trajectory control
- Implement feedback-based control using sensors (e.g., potentiometers or encoders)
- Develop web-based or wireless control interface
- Explore computer vision for object detection and autonomous pick-and-place

---
