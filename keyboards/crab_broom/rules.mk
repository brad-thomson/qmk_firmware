# Crab Broom Build Rules
# Ported from Voyager Senyoku

# --- Hardware Core ---
MCU = RP2040
BOARD = QMK_BLOK
BOOTLOADER = rp2040

# --- Feature Set ---
CAPS_WORD_ENABLE = yes
COMBO_ENABLE = yes
TAP_DANCE_ENABLE = yes
LTO_ENABLE = yes       // Link Time Optimization for smaller binary

# --- Disabled (Minimalist) ---
CONSOLE_ENABLE = no
COMMAND_ENABLE = no
MOUSEKEY_ENABLE = no
SPACE_CADET_ENABLE = no
GRAVE_ESC_ENABLE = no
MAGIC_ENABLE = no

# --- RP2040 Drivers ---
SERIAL_DRIVER = vendor
WS2812_DRIVER = vendor
