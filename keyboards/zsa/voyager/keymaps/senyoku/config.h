#pragma once

// --- Tapping & Hold Settings (Native QMK Chordal Hold) ---
#define CHORDAL_HOLD
#define PERMISSIVE_HOLD
#define TAPPING_TERM 200
#define TAPPING_TOGGLE 1
#define FLOW_TAP_TERM 150 // Force tap when typing fast (require-prior-idle)

// --- Combos & One-Shot ---
#undef ONESHOT_TIMEOUT
#define ONESHOT_TIMEOUT 3000
#define COMBO_TERM_PER_COMBO

// --- RGB Matrix Minimalist Settings ---
#define RGB_MATRIX_STARTUP_SPD 60
#define RGB_DISABLE_WHEN_USB_SUSPENDED true
#define RGB_MATRIX_SLEEP
#undef RGB_MATRIX_TIMEOUT
#define RGB_MATRIX_TIMEOUT 300000

// Strip out QMK's built-in RGB animations to save memory
#undef RGB_MATRIX_ANIMATIONS
#undef RGB_MATRIX_KEYPRESSES

// --- System ---
#define LAYER_STATE_16BIT
#define USB_SUSPEND_WAKEUP_DELAY 0
