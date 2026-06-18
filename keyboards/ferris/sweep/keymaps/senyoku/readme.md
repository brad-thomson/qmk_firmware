# Senyoku Keymap for Ferris Sweep (Crab Broom)

This is a port of the Voyager Senyoku keymap, adapted for the 34-key Ferris Sweep (specifically built using a Crab Broom case and Boardsource Blok microcontrollers).

## Overview
- **Layout**: 34-key split (3x5+2)
- **Base Layouts**: Mac and PC variations
- **Key Features**:
  - Native bilateral combinations (`CHORDAL_HOLD`)
  - Fast tap-hold resolution (`PERMISSIVE_HOLD`)
  - Extensive combos for layer toggling (e.g. Navigation, Symbols, Function, Numpad, and Creator layers)
  - Custom tap dances for OS-specific macros and quick keys

## Hardware specifics
This keymap is compiled targeting the **Boardsource Blok** (RP2040).
To flash this keymap, use QMK's converter to translate the Pro Micro pinout to the Blok:

```bash
make ferris/sweep:senyoku CONVERT_TO=blok
```
*(Or use `qmk compile -kb ferris/sweep -km senyoku -e CONVERT_TO=blok`)*

Then flash the resulting `.uf2` file to both halves by putting the Blok into bootloader mode (double-tap reset or hold boot while plugging in).
