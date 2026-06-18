/*
 * Senyoku Keymap Configuration
 */

#pragma once

/* --- Handedness --- */
#define MASTER_LEFT  // Default to Left side as USB master

/* --- Tapping & Hold Logic --- */
#define CHORDAL_HOLD    // Native bilateral combinations
#define PERMISSIVE_HOLD // Fast tap-hold resolution
#define TAPPING_TERM 200
#define TAPPING_TOGGLE 1

/* --- Combos & One-Shot --- */
#define ONESHOT_TIMEOUT 3000
#define COMBO_TERM_PER_COMBO // Per-combo timing in keymap.c

/* --- Hardware Specifics --- */
#define RP2040_BOOTLOADER_DOUBLE_TAP_RESET // Quick entry for Blok
