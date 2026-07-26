# Arduino Two-Row LCD Name Display

A small embedded-systems project: an **Arduino-compatible board** drives a
**two-row display LCD** to show a name across its two rows.

![The project running on a breadboard, showing "Situ / Zhao" on the LCD](docs/arduino.jpg)

## What it does

On power-up, the board initializes the LCD and prints text on the two rows:

```
Situ
Zhao
```

The display is controlled with the Arduino `LiquidCrystal` library in **4-bit
mode**, which uses only the four high data lines plus two control lines — a
common technique to save microcontroller I/O pins.

## Hardware

- An **Arduino-compatible board** (with a prototyping shield, in the photo)
- A **two-row display LCD**
- A breadboard and jumper wires
- A resistor for the LCD backlight
- USB cable for power and programming

## Wiring (by role)

The LCD connects to the board by function. Exact board pin numbers are not
documented here because they could not be recovered from the photo — the
sketch uses the standard `LiquidCrystal` example pins, which you can change to
match your own wiring.

| LCD pin | Role |
|---------|------|
| VSS | Ground |
| VDD | +5V power |
| V0  | Contrast |
| RS  | Register Select (control) |
| RW  | Read/Write — tied to Ground for write-only |
| E   | Enable (control) |
| D4–D7 | Data lines (4-bit mode) |
| D0–D3 | Unused in 4-bit mode |
| A   | Backlight + (through a resistor) |
| K   | Backlight − (Ground) |

## Build & run

**On real hardware (Arduino IDE):**

1. Open `arduino_display.ino` in the Arduino IDE.
2. Adjust the pin numbers in the `LiquidCrystal lcd(...)` line to match your wiring.
3. Select your board and serial port under **Tools**.
4. Click **Upload**. The text appears on the LCD once the upload completes.

**Without hardware (simulation):**

You can rebuild and run this virtually for free in
[Tinkercad Circuits](https://www.tinkercad.com/circuits): drop in an Arduino
and an LCD, wire them up, paste in the sketch, and press **Start Simulation**.

## A note on reconstruction

This is a genuine project I built some years ago. The original source code and
build notes were lost, so this repository is a faithful reconstruction from a
photo of the working circuit (see above). The hardware is described only as far
as the photo confirms it.

## Author

Situ Zhao
