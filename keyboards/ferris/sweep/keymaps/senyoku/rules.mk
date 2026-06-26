# Senyoku Keymap Build Rules

# --- Feature Set ---
CAPS_WORD_ENABLE = yes
COMBO_ENABLE = yes
TAP_DANCE_ENABLE = yes
LTO_ENABLE = yes

# --- Split Transport ---
# RP2040 (Blok) requires the hardware PIO serial driver.
SERIAL_DRIVER = vendor

# --- Disabled (Minimalist) ---
CONSOLE_ENABLE = no
COMMAND_ENABLE = no
MOUSEKEY_ENABLE = no
SPACE_CADET_ENABLE = no
GRAVE_ESC_ENABLE = no
MAGIC_ENABLE = no
