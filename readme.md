# Senyoku: Custom QMK Keymaps (Voyager & Crab Broom)

Highly optimized, cross-platform QMK firmware configurations designed for efficiency and ergonomic comfort.

## Keyboards

### 1. ZSA Voyager
*   **MCU:** STM32F303
*   **Keymap:** `senyoku`
*   **Features:** Colemak-DH, Dual-OS support, RGB Matrix indicators, Hardware KVM macros.

### 2. Crab Broom / Ferris Sweep
*   **MCU:** RP2040 (Boardsource Blok)
*   **Keymap:** `senyoku`
*   **Features:** Ported Voyager layout (3x5+2), Minimalist (No RGB), Optimized for the Blok controller.

## Core Features (Both Boards)

*   **Colemak-DH Base:** Ergonomic alpha layout optimized for reduced finger travel.
*   **Native Bilateral Combinations:** Utilizes QMK's native `CHORDAL_HOLD` and `PERMISSIVE_HOLD` settings to strictly enforce opposite-hand modifier activation, preventing misfires during rapid typing.
*   **Cross-Platform Parity:** Mirrored matrix stacks for both macOS and Windows/PC. Maintaining identical physical positions for OS-specific modifiers.
*   **Hardware KVM Macros:** Integrated macros (`MACRO_KVM_1`, `MACRO_KVM_2`) that simultaneously trigger hardware display switches and shift the keyboard to the corresponding OS layer.

## Build and Flash Instructions

### Prerequisites (Nix)
This environment uses `nix-shell` for reproducible builds. Ensure Nix is installed and run commands from the project root.

### ZSA Voyager
To compile and flash the Voyager:
```bash
nix-shell -p qmk --run "qmk flash -kb zsa/voyager -km senyoku"
```

### Crab Broom (RP2040)
To compile the Crab Broom firmware:
```bash
nix-shell -p qmk --run "make crab_broom:senyoku"
```
The build will generate a `crab_broom_senyoku.uf2` file in the root directory.

**To Flash:**
1. Put the Boardsource Blok into bootloader mode (double-tap the Reset button or hold Boot while plugging in).
2. The controller will appear as a USB drive named `RPI-RP2`.
3. Drag and drop the `crab_broom_senyoku.uf2` file onto the drive.
4. Repeat for the other half.
