/*
 * Crab Broom Keymap (Ported from Voyager Senyoku)
 * Layout: 34-key Split (3x5+2)
 */

#include QMK_KEYBOARD_H

#ifndef ZSA_SAFE_RANGE
#define ZSA_SAFE_RANGE SAFE_RANGE
#endif

// --- Custom Keycodes ---
enum custom_keycodes {
  MACRO_KVM_1 = ZSA_SAFE_RANGE,
  MACRO_KVM_2,
};

// --- Tap Dance Declarations ---
enum tap_dance_codes {
  TD_QWERTY_MAC,
  TD_QWERTY_PC,
  TD_TAB_ESC,
  TD_ESC_EQL
};

// --- Keymap Definition ---
const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

  // Layer 0: Base (Mac)
  [0] = LAYOUT_split_3x5_2(
    KC_Q,               KC_W,               KC_F,               KC_P,               KC_B,               KC_J,               KC_L,               KC_U,               KC_Y,               KC_QUOTE,
    KC_A,               KC_R,               KC_S,               KC_T,               KC_G,               KC_M,               KC_N,               KC_E,               KC_I,               KC_O,
    MT(MOD_LCTL, KC_Z), MT(MOD_LALT, KC_X), MT(MOD_LGUI, KC_C), MT(MOD_LSFT, KC_D), KC_V,               KC_K,               MT(MOD_RSFT, KC_H), MT(MOD_RGUI, KC_COMMA), MT(MOD_LALT, KC_DOT), MT(MOD_RCTL, KC_SLASH),
                                                        MO(2),              KC_SPACE,                                   OSM(MOD_LSFT),      OSL(4)
  ),

  // Layer 1: Base (PC)
  [1] = LAYOUT_split_3x5_2(
    KC_Q,               KC_W,               KC_TRANSPARENT,     KC_TRANSPARENT,     KC_TRANSPARENT,     KC_TRANSPARENT,     KC_TRANSPARENT,     KC_TRANSPARENT,     KC_TRANSPARENT,     KC_TRANSPARENT,
    KC_TRANSPARENT,     KC_TRANSPARENT,     KC_TRANSPARENT,     KC_TRANSPARENT,     KC_TRANSPARENT,     KC_TRANSPARENT,     KC_TRANSPARENT,     KC_TRANSPARENT,     KC_TRANSPARENT,     KC_TRANSPARENT,
    MT(MOD_LGUI, KC_Z), MT(MOD_LALT, KC_X), MT(MOD_LCTL, KC_C), MT(MOD_LSFT, KC_D), KC_TRANSPARENT,     KC_TRANSPARENT,     MT(MOD_RSFT, KC_H), MT(MOD_RCTL, KC_COMMA), MT(MOD_RALT, KC_DOT), MT(MOD_RGUI, KC_SLASH),
                                                        MO(3),              KC_SPACE,                                   OSM(MOD_LSFT),      OSL(5)
  ),

  // Layer 2: Navigation (Mac)
  [2] = LAYOUT_split_3x5_2(
    KC_ESCAPE,          LCTL(LSFT(KC_TAB)), LGUI(KC_F),         LCTL(KC_TAB),       KC_INSERT,          KC_PAGE_UP,         KC_HOME,            KC_UP,              KC_END,             CW_TOGG,
    OSM(MOD_LCTL),      OSM(MOD_LALT),      OSM(MOD_LGUI),      OSM(MOD_LSFT),      OSM(MOD_RALT),      KC_PGDN,            KC_LEFT,            KC_DOWN,            KC_RIGHT,           KC_DELETE,
    LCMD(KC_Z),         LCMD(KC_X),         LCMD(KC_C),         KC_LEFT_GUI,        LCMD(KC_V),         KC_ENTER,           KC_BSPC,            KC_TAB,             KC_APPLICATION,     LGUI(LSFT(KC_3)),
                                                        KC_TRANSPARENT,     KC_TRANSPARENT,                                 KC_ENTER,           KC_ESCAPE
  ),

  // Layer 3: Navigation (PC)
  [3] = LAYOUT_split_3x5_2(
    KC_ESCAPE,          LCTL(LSFT(KC_TAB)), LCTL(KC_F),         LCTL(KC_TAB),       KC_INSERT,          KC_PAGE_UP,         KC_HOME,            KC_UP,              KC_END,             CW_TOGG,
    OSM(MOD_LGUI),      OSM(MOD_LALT),      OSM(MOD_LCTL),      OSM(MOD_LSFT),      OSM(MOD_RALT),      KC_PGDN,            KC_LEFT,            KC_DOWN,            KC_RIGHT,           KC_DELETE,
    LCTL(KC_Z),         LCTL(KC_X),         LCTL(KC_C),         KC_LEFT_GUI,        LCTL(KC_V),         KC_ENTER,           KC_BSPC,            KC_TAB,             KC_APPLICATION,     KC_PSCR,
                                                        KC_TRANSPARENT,     KC_TRANSPARENT,                                 KC_ENTER,           KC_ESCAPE
  ),

  // Layer 4: Symbols (Mac)
  [4] = LAYOUT_split_3x5_2(
    KC_EXLM,            KC_AT,              KC_HASH,            KC_DLR,             KC_PERC,            KC_EQUAL,           KC_GRAVE,           KC_COLN,            KC_SCLN,            KC_PLUS,
    OSM(MOD_LCTL),      OSM(MOD_LALT),      OSM(MOD_LGUI),      OSM(MOD_LSFT),      KC_CIRC,            KC_ASTR,            KC_LPRN,            KC_LCBR,            KC_LBRC,            KC_MINUS,
    MACRO_KVM_1,        MACRO_KVM_2,        KC_BSLS,            KC_PIPE,            KC_AMPR,            KC_TILD,            KC_RPRN,            KC_RCBR,            KC_RBRC,            KC_UNDS,
                                                        KC_TRANSPARENT,     KC_TRANSPARENT,                                 KC_TRANSPARENT,     TO(0)
  ),

  // Layer 5: Symbols (PC)
  [5] = LAYOUT_split_3x5_2(
    KC_EXLM,            KC_AT,              KC_HASH,            KC_DLR,             KC_PERC,            KC_EQUAL,           KC_GRAVE,           KC_COLN,            KC_SCLN,            KC_PLUS,
    OSM(MOD_LGUI),      OSM(MOD_LALT),      OSM(MOD_LCTL),      OSM(MOD_LSFT),      KC_CIRC,            KC_ASTR,            KC_LPRN,            KC_LCBR,            KC_LBRC,            KC_MINUS,
    MACRO_KVM_1,        MACRO_KVM_2,        KC_BSLS,            KC_PIPE,            KC_AMPR,            KC_TILD,            KC_RPRN,            KC_RCBR,            KC_RBRC,            KC_UNDS,
                                                        KC_TRANSPARENT,     KC_TRANSPARENT,                                 KC_TRANSPARENT,     TO(1)
  ),

  // Layer 6: Function (Mac)
  [6] = LAYOUT_split_3x5_2(
    KC_MEDIA_STOP,      KC_MEDIA_PREV_TRACK,KC_MEDIA_PLAY_PAUSE,KC_MEDIA_NEXT_TRACK,KC_BRIU,            KC_F12,             KC_F7,              KC_F8,              KC_F9,              KC_SCRL,
    OSM(MOD_LCTL),      OSM(MOD_LALT),      OSM(MOD_LGUI),      OSM(MOD_LSFT),      KC_BRID,            KC_F11,             KC_F4,              KC_F5,              KC_F6,              TO(10),
    KC_AUDIO_MUTE,      KC_AUDIO_VOL_DOWN,  LCTL(LSFT(KC_C)),   KC_AUDIO_VOL_UP,    LCTL(LSFT(KC_V)),   KC_F10,             KC_F1,              KC_F2,              KC_F3,              KC_NO,
                                                        KC_TRANSPARENT,     KC_TRANSPARENT,                                 KC_TRANSPARENT,     KC_TRANSPARENT
  ),

  // Layer 7: Function (PC)
  [7] = LAYOUT_split_3x5_2(
    KC_MEDIA_STOP,      KC_MEDIA_PREV_TRACK,KC_MEDIA_PLAY_PAUSE,KC_MEDIA_NEXT_TRACK,KC_BRIU,            KC_F12,             KC_F7,              KC_F8,              KC_F9,              KC_SCRL,
    OSM(MOD_LGUI),      OSM(MOD_LALT),      OSM(MOD_LCTL),      OSM(MOD_LSFT),      KC_BRID,            KC_F11,             KC_F4,              KC_F5,              KC_F6,              TO(11),
    KC_AUDIO_MUTE,      KC_AUDIO_VOL_DOWN,  LCTL(LSFT(KC_C)),   KC_AUDIO_VOL_UP,    LCTL(LSFT(KC_V)),   KC_F10,             KC_F1,              KC_F2,              KC_F3,              KC_NO,
                                                        KC_TRANSPARENT,     KC_TRANSPARENT,                                 KC_TRANSPARENT,     KC_TRANSPARENT
  ),

  // Layer 8: Numpad (Mac)
  [8] = LAYOUT_split_3x5_2(
    KC_NO,              KC_NO,              KC_NO,              KC_DLR,             KC_PERC,            KC_KP_EQUAL,        KC_7,               KC_8,               KC_9,               KC_KP_PLUS,
    OSM(MOD_LCTL),      OSM(MOD_LALT),      OSM(MOD_LGUI),      OSM(MOD_LSFT),      OSM(MOD_RALT),      KC_KP_ASTERISK,     KC_4,               KC_5,               KC_6,               KC_KP_MINUS,
    KC_NO,              KC_APPLICATION,     KC_TAB,             KC_BSPC,            KC_ENTER,           KC_0,               KC_1,               KC_2,               KC_3,               KC_SLASH,
                                                        KC_DOT,             KC_TRANSPARENT,                                 KC_TRANSPARENT,     KC_TRANSPARENT
  ),

  // Layer 9: Numpad (PC)
  [9] = LAYOUT_split_3x5_2(
    KC_NO,              KC_NO,              KC_NO,              KC_DLR,             KC_PERC,            KC_KP_EQUAL,        KC_7,               KC_8,               KC_9,               KC_KP_PLUS,
    OSM(MOD_LGUI),      OSM(MOD_LALT),      OSM(MOD_LCTL),      OSM(MOD_LSFT),      OSM(MOD_RALT),      KC_KP_ASTERISK,     KC_4,               KC_5,               KC_6,               KC_KP_MINUS,
    KC_NO,              KC_APPLICATION,     KC_TAB,             KC_BSPC,            KC_ENTER,           KC_0,               KC_1,               KC_2,               KC_3,               KC_SLASH,
                                                        KC_DOT,             KC_TRANSPARENT,                                 KC_TRANSPARENT,     KC_TRANSPARENT
  ),

  // Layer 10: QWERTY (Mac)
  [10] = LAYOUT_split_3x5_2(
    KC_Q,               KC_W,               KC_E,               KC_R,               KC_T,               KC_Y,               KC_U,               KC_I,               KC_O,               KC_P,
    KC_A,               KC_S,               KC_D,               KC_F,               KC_G,               KC_H,               KC_J,               KC_K,               KC_L,               TD(TD_QWERTY_MAC),
    MT(MOD_LCTL, KC_Z), MT(MOD_LALT, KC_X), MT(MOD_LGUI, KC_C), MT(MOD_LSFT, KC_V), KC_B,               KC_N,               MT(MOD_RSFT, KC_M), MT(MOD_RGUI, KC_COMMA), MT(MOD_LALT, KC_DOT), MT(MOD_RCTL, KC_SLASH),
                                                        KC_LEFT_ALT,        KC_TRANSPARENT,                                 KC_BSPC,            KC_ENTER
  ),

  // Layer 11: QWERTY (PC)
  [11] = LAYOUT_split_3x5_2(
    KC_Q,               KC_W,               KC_E,               KC_R,               KC_T,               KC_Y,               KC_U,               KC_I,               KC_O,               KC_P,
    KC_A,               KC_S,               KC_D,               KC_F,               KC_G,               KC_H,               KC_J,               KC_K,               KC_L,               TD(TD_QWERTY_PC),
    MT(MOD_LGUI, KC_Z), MT(MOD_LALT, KC_X), MT(MOD_LCTL, KC_C), MT(MOD_LSFT, KC_V), KC_B,               KC_N,               MT(MOD_RSFT, KC_M), MT(MOD_RCTL, KC_COMMA), MT(MOD_RALT, KC_DOT), MT(MOD_RGUI, KC_SLASH),
                                                        KC_LEFT_ALT,        KC_TRANSPARENT,                                 KC_BSPC,            KC_ENTER
  ),

  // Layer 12: Creator (Mac)
  [12] = LAYOUT_split_3x5_2(
    TD(TD_TAB_ESC),     KC_1,               KC_2,               KC_3,               KC_B,               LCTL(KC_KP_3),      LCTL(KC_KP_7),      KC_KP_7,            KC_KP_3,            KC_KP_1,
    MT(MOD_LCTL, KC_A), MT(MOD_LALT, KC_R), MT(MOD_LGUI, KC_S), MT(MOD_LSFT, KC_F), KC_G,               LALT(KC_S),         KC_J,               KC_K,               KC_L,               LSFT(KC_Z),
    KC_Z,               KC_X,               KC_C,               KC_E,               KC_V,               KC_N,               KC_O,               LSFT(KC_D),         LGUI(KC_G),         LGUI(KC_J),
                                                        TO(0),              KC_SPACE,                                   KC_ENTER,           KC_BSPC
  ),

  // Layer 13: Creator (PC)
  [13] = LAYOUT_split_3x5_2(
    TD(TD_TAB_ESC),     KC_1,               KC_2,               KC_3,               KC_B,               LCTL(KC_KP_3),      LCTL(KC_KP_7),      KC_KP_7,            KC_KP_3,            KC_KP_1,
    MT(MOD_LGUI, KC_A), MT(MOD_LALT, KC_R), MT(MOD_LCTL, KC_S), MT(MOD_LSFT, KC_F), KC_G,               LALT(KC_S),         KC_J,               KC_K,               KC_L,               LSFT(KC_Z),
    KC_Z,               KC_X,               KC_C,               KC_E,               KC_V,               KC_N,               KC_O,               LSFT(KC_D),         LCTL(KC_G),         LCTL(KC_J),
                                                        TO(1),              KC_SPACE,                                   KC_ENTER,           KC_BSPC
  ),
};

// --- Hand Tracking for Native Chordal Hold ---
const char chordal_hold_layout[MATRIX_ROWS][MATRIX_COLS] PROGMEM = LAYOUT_split_3x5_2(
  'L', 'L', 'L', 'L', 'L',   'R', 'R', 'R', 'R', 'R',
  'L', 'L', 'L', 'L', 'L',   'R', 'R', 'R', 'R', 'R',
  'L', 'L', 'L', 'L', 'L',   'R', 'R', 'R', 'R', 'R',
            '*', '*',           '*', '*'
);

// --- Combos ---
const uint16_t PROGMEM combo0[] = { MO(2), OSL(4), COMBO_END};
const uint16_t PROGMEM combo1[] = { MO(3), OSL(5), COMBO_END};
const uint16_t PROGMEM combo2[] = { MT(MOD_LCTL, KC_Z), MT(MOD_LALT, KC_X), COMBO_END};
const uint16_t PROGMEM combo3[] = { KC_SPACE, OSL(4), COMBO_END};
const uint16_t PROGMEM combo4[] = { KC_SPACE, OSL(5), COMBO_END};
const uint16_t PROGMEM combo5[] = { MT(MOD_LGUI, KC_Z), MT(MOD_LALT, KC_X), COMBO_END};
const uint16_t PROGMEM combo6[] = { MO(2), OSM(MOD_LSFT), COMBO_END};
const uint16_t PROGMEM combo7[] = { MO(3), OSM(MOD_LSFT), COMBO_END};
const uint16_t PROGMEM combo8[] = { KC_S, KC_T, COMBO_END};
const uint16_t PROGMEM combo9[] = { KC_N, KC_E, COMBO_END};
const uint16_t PROGMEM combo10[] = { KC_R, KC_S, COMBO_END};
const uint16_t PROGMEM combo11[] = { KC_E, KC_I, COMBO_END};
const uint16_t PROGMEM combo12[] = { KC_A, KC_R, COMBO_END};
const uint16_t PROGMEM combo13[] = { KC_I, KC_O, COMBO_END};

combo_t key_combos[] = {
    COMBO(combo0, TT(6)),
    COMBO(combo1, TT(7)),
    COMBO(combo2, TO(1)), 
    COMBO(combo3, TT(8)),
    COMBO(combo4, TT(9)),
    COMBO(combo5, TO(0)), 
    COMBO(combo6, TT(12)),
    COMBO(combo7, TT(13)),
    COMBO(combo8, KC_ESC),
    COMBO(combo9, KC_ESC),
    COMBO(combo10, KC_ENTER),
    COMBO(combo11, KC_ENTER),
    COMBO(combo12, KC_TAB),
    COMBO(combo13, KC_TAB),
};

#ifdef COMBO_TERM_PER_COMBO
uint16_t get_combo_term(uint16_t index, combo_t *combo) {
    switch (combo->keycode) {
        case KC_ESC:
        case KC_ENTER:
        case KC_TAB:
            return 20;
        default:
            return 50;
    }
}
#endif

// --- Tap Dance Logic ---
void q_dance_each(tap_dance_state_t *state, void *user_data) {}
void q_dance_reset(tap_dance_state_t *state, void *user_data) {}

void q_mac_finished(tap_dance_state_t *state, void *user_data) {
  if (state->pressed) { layer_move(0); }
  else { tap_code16(KC_SCLN); }
}

void q_pc_finished(tap_dance_state_t *state, void *user_data) {
  if (state->pressed) { layer_move(1); }
  else { tap_code16(KC_SCLN); }
}

void tab_esc_finished(tap_dance_state_t *state, void *user_data) {
  if (state->pressed) { register_code16(KC_ESCAPE); }
  else { tap_code16(KC_TAB); }
}

void tab_esc_reset(tap_dance_state_t *state, void *user_data) {
  if (state->pressed) { unregister_code16(KC_ESCAPE); }
}

void esc_eql_finished(tap_dance_state_t *state, void *user_data) {
  if (state->pressed) { register_code16(KC_EQUAL); }
  else { tap_code16(KC_ESCAPE); }
}

void esc_eql_reset(tap_dance_state_t *state, void *user_data) {
  if (state->pressed) { unregister_code16(KC_EQUAL); }
}

tap_dance_action_t tap_dance_actions[] = {
  [TD_QWERTY_MAC] = ACTION_TAP_DANCE_FN_ADVANCED(q_dance_each, q_mac_finished, q_dance_reset),
  [TD_QWERTY_PC]  = ACTION_TAP_DANCE_FN_ADVANCED(q_dance_each, q_pc_finished, q_dance_reset),
  [TD_TAB_ESC]    = ACTION_TAP_DANCE_FN_ADVANCED(NULL, tab_esc_finished, tab_esc_reset),
  [TD_ESC_EQL]    = ACTION_TAP_DANCE_FN_ADVANCED(NULL, esc_eql_finished, esc_eql_reset)
};

// --- Main Event Loop ---
bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  switch (keycode) {
    case MACRO_KVM_1:
      if (record->event.pressed) {
        SEND_STRING(SS_TAP(X_RCTL)SS_DELAY(10)  SS_TAP(X_RCTL)SS_DELAY(10)  SS_TAP(X_1));
        layer_move(0);
      }
      return false;

    case MACRO_KVM_2:
      if (record->event.pressed) {
        SEND_STRING(SS_TAP(X_RCTL)SS_DELAY(10)  SS_TAP(X_RCTL)SS_DELAY(10)  SS_TAP(X_2));
        layer_move(1);
      }
      return false;
  }
  return true;
}
