# Arduino-Stepper-Motor-Control
Precise angular position control of a 28BYJ-48 Stepper Motor using Arduino Uno and ULN2003 driver board.⁠

## 📌 Project Overview

The main objective of this lab experiment is to achieve precise rotational position control of a unipolar stepper motor. By writing a custom dynamic step-calculation algorithm in Arduino C++, the motor rotates an indicator arrow through a controlled sequence of predefined angles ($90^\circ$, $180^\circ$, $270^\circ$, and $360^\circ$) and then reverses direction to return to its origin.

---

## 🧰 Hardware Components Used

| Quantity | Component Description | Role / Function |
| :---: | :--- | :--- |
| 1 | Arduino Uno | Main Microcontroller Unit (MCU) |
| 1 | 28BYJ-48 Stepper Motor | Provides precise angular displacement |
| 1 | ULN2003 Driver Board | Darlington transistor array to power the motor |
| Set | Jumper Wires | Interconnecting power and control signals |
| 1 | Indicator Arrow | Cardboard attachment for visual direction tracking |

---

## ⚡ Circuit Diagram & Pin Mapping

The ULN2003 motor driver acts as an amplifier interface between the low-power Arduino control pins and the higher-current stepper motor coils.

### Connection Table

| ULN2003 Driver Pin | Arduino Uno Pin | Signal Description |
| :---: | :---: | :--- |
| IN1 | Pin 8 | Coil Phase A Control |
| IN2 | Pin 9 | Coil Phase B Control |
| IN3 | Pin 10 | Coil Phase C Control |
| IN4 | Pin 11 | Coil Phase D Control |
| GND | GND | Ground Reference |
| VCC (+5V) | 5V | Power Supply Terminal |

---

## ⚙️ Control Logic & Algorithm

The system leverages the native Arduino Stepper.h library configured for a 4-step sequence motor with a step resolution of $2048$ steps per complete revolution ($360^\circ$).

### Dynamic Angle Calculation Formula
To convert degrees ($\theta$) into exact physical motor steps ($S$), the following ratio is applied inside the code:

$$S = \frac{\theta \times 2048}{360^\circ}$$

### Execution Sequence
1. $90^\circ$ Clockwise Shift: Turns quarter-round $\rightarrow$ Holds position for $1\text{ second}$.
2. $180^\circ$ Clockwise Shift: Turns half-round $\rightarrow$ Holds position for $1\text{ second}$.
3. $270^\circ$ Clockwise Shift: Turns three-quarter round $\rightarrow$ Holds position for $1\text{ second}$.
4. $360^\circ$ Full Revolution: Complete turn $\rightarrow$ Holds position for $2\text{ seconds}$.
5. $-360^\circ$ Counter-Clockwise: Full reverse rotation back to the initial starting point ($0^\circ$).

---

## 🎬 Project Execution 





https://github.com/user-attachments/assets/656ed277-313a-4b4e-a547-a5f87a055e83


