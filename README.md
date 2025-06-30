# On-Off-LED-Pattern
# LED Sequence Control with Push Button

This is an Arduino project that cycles through a sequence of 8 LEDs, allowing the user to pause and resume the sequence using a push button.

## 🔧 Overview

- The project lights up 8 LEDs in sequence with a small delay between each.
- A **push button** toggles between two states:
  - **Running**: LEDs continue to light in sequence.
  - **Paused**: The current LED turns off and the sequence halts until the button is pressed again.

## 🎮 How It Works

- The system starts in the **running** state (`state = 1`).
- Each press of the button toggles between `state = 1` (run) and `state = 0` (pause).
- While in `state = 0`, the LEDs stop, and the system waits for another button press to resume.

## 🛠 Hardware Required

| Component   | Quantity | Notes                              |
|------------|----------|------------------------------------|
| Arduino UNO (or similar) | 1        | Microcontroller board           |
| LEDs        | 8        | Connected to pins 6 through 13     |
| Push Button | 1        | Connected to digital pin 3         |
| 220Ω Resistors | 8     | Current limiting for each LED      |
| Breadboard & Jumper Wires | -      | For prototyping                 |

## ⚙️ Pin Configuration

| Pin # | Function       |
|-------|----------------|
| D3    | Push button input |
| D6–D13| LEDs            |
