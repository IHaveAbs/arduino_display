/*
 * Two-Row LCD Name Display
 * ------------------------
 * Drives a two-row display LCD from an Arduino-compatible board and shows a
 * name across the two rows:
 *
 *     Row 1:  Situ
 *     Row 2:  Zhao
 *
 * The LCD is driven in 4-bit mode using the built-in LiquidCrystal library,
 * which only needs the four high data lines (D4-D7) plus the Register-Select
 * and Enable control lines.
 *
 * Note: This sketch is a faithful reconstruction of an earlier project of
 * mine; the original source was lost, so it was rebuilt from a photo of the
 * working circuit. The pin numbers below are the standard LiquidCrystal
 * example values -- adjust them to match how your own LCD is wired.
 *
 * Author: Situ Zhao
 */

#include <LiquidCrystal.h>

// LiquidCrystal(rs, enable, d4, d5, d6, d7)
// Standard example pins -- change these to match your wiring.
LiquidCrystal lcd(12, 11, 5, 4, 3, 2);

void setup() {
  // Tell the library the display geometry: 16 columns, 2 rows.
  lcd.begin(16, 2);

  // Print the first name on the top row.
  lcd.setCursor(0, 0);
  lcd.print("Situ");

  // Move the cursor to the start of the second row and print the last name.
  lcd.setCursor(0, 1);
  lcd.print("Zhao");
}

void loop() {
  // Nothing to repeat -- the text stays on screen after setup() runs.
}
