# Senyoku Keymap Build Rules

# --- Feature Set ---
CAPS_WORD_ENABLE = yes
COMBO_ENABLE = yes
TAP_DANCE_ENABLE = yes
LTO_ENABLE = yes

# --- Split Transport ---
# RP2040 (Blok): use the hardware PIO serial driver instead of the default
# bit-bang software serial. Bit-bang blocks the CPU on every inter-half
# transfer, adding latency/jitter that wrecks tap-hold timing on the
# peripheral (right) half. PIO is non-blocking and much lower latency.
SERIAL_DRIVER = vendor

# --- Debounce ---
# Eager-on-press debounce: register key presses immediately instead of the
# default sym_defer_pk 5ms delay. Lower latency + sharper timing for the
# combo engine and tap-holds on the split (still filters chatter on release).
DEBOUNCE_TYPE = asym_eager_defer_pk

# --- Disabled (Minimalist) ---
CONSOLE_ENABLE = no
COMMAND_ENABLE = no
MOUSEKEY_ENABLE = no
SPACE_CADET_ENABLE = no
GRAVE_ESC_ENABLE = no
MAGIC_ENABLE = no
