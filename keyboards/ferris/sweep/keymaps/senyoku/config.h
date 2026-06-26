/*
 * Senyoku Keymap Configuration
 */

#pragma once

/* --- Handedness --- */
#define MASTER_LEFT

/* --- Tapping & Hold Logic --- */
#define CHORDAL_HOLD    // Bilateral combinations
#define PERMISSIVE_HOLD
#define TAPPING_TERM 200
#define TAPPING_TOGGLE 1

/* --- Combos & One-Shot --- */
#define ONESHOT_TIMEOUT 3000
#define COMBO_TERM_PER_COMBO

/* --- Hardware Specifics --- */
#define RP2040_BOOTLOADER_DOUBLE_TAP_RESET // Quick bootloader entry for Blok
