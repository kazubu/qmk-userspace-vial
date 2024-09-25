# QMK Userspace

This repository contains my custom keyboard/keymap definitions for Vial-QMK.

Need to build with Vial QMK.

## Keyboard

 * YMDK Air40
   - Disabled LED due to flash size limitation.
 * YK DO52 PRO
   - HW with some modifications:
     - Replaced MCU to [ProMicro RP2040](https://s.click.aliexpress.com/e/_DBskPyz)
     - Swap DATA/CLK pins of Track Point module
   - Need to disable PS2_MOUSE_USE_REMOTE_MODE for left hand to reduce delay.
