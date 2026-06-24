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
#define FLOW_TAP_TERM 150 // Force tap during fast typing (mirrors ZMK require-prior-idle-ms=150)

/* --- Combos & One-Shot --- */
#define ONESHOT_TIMEOUT 3000
#define COMBO_TERM_PER_COMBO // Per-combo timing in keymap.c
#define COMBO_STRICT_TIMER   // Consistent combo window under fast typing

/* --- Hardware Specifics --- */
#define RP2040_BOOTLOADER_DOUBLE_TAP_RESET // Quick entry for Blok
