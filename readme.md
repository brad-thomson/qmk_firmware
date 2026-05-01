# Senyoku: Custom ZSA Voyager Keymap

A highly optimized, cross-platform QMK firmware configuration for the ZSA Voyager. Designed for efficiency, this layout bridges the gap between daily ergonomic typing and highly specific creative software workflows.

## Layout Overview

*The visualizer below is automatically generated and updated via GitHub Actions using Keymap Drawer.*

![Voyager Layout](voyager_keymap.svg)

## Core Features

* **Colemak-DH Base:** Ergonomic alpha layout optimized for reduced finger travel.
* **Bottom Row Mod-Taps:** Primary modifiers are mapped to the bottom row rather than the home row, ensuring clean taps and holds.
* **Native Bilateral Combinations:** Utilizes QMK's native `CHORDAL_HOLD` and `PERMISSIVE_HOLD` settings to strictly enforce opposite-hand modifier activation on base layers, preventing misfires during rapid typing.
* **Cross-Platform Parity:** Mirrored matrix stacks for both macOS and Windows/PC. The layout maintains identical physical positions for OS-specific modifiers (GUI vs. Ctrl) across environments.
* **Creator Layers:** Dedicated modes (Layers 12 & 13) for creative workflows. These layers feature dynamic C-level overrides to bypass strict bilateral rules, allowing for instantaneous, same-hand shortcut combinations.
* **Hardware KVM Macros:** Integrated macros (`MACRO_KVM_1`, `MACRO_KVM_2`) that simultaneously trigger the hardware display switch and shift the keyboard to the corresponding OS base layer.
* **Optimized RGB Matrix:** Custom, integer-based HSV-to-RGB conversion logic. Strips out bulky QMK animations to conserve microcontroller cycles while maintaining crisp, layer-specific color indication.

## Repository Structure

* `keymap.c`: The core layout matrix, combo configurations, tap-dance logic, and custom RGB event loops.
* `config.h`: Tapping term definitions, hardware-level hold behaviors, and RGB matrix system configurations.
* `rules.mk`: Minimized compiler settings, disabling unused QMK features to optimize firmware size and enable Link Time Optimization (LTO).

## Build and Flash Instructions

To compile and flash this keymap directly to the Voyager, ensure your local QMK environment is up to date and run the following command from the root of the `qmk_firmware` repository:
```bash
qmk flash -kb zsa/voyager -km senyoku
