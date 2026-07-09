// muwat's Glorious GMMK 2 %96 ISO Keyboard QMK Configuration

#include QMK_KEYBOARD_H

#define _BL 0
#define _FL 1
#define _NU 2
#define _WASD 3

// HELD Bindings (Mod-Tap)
#define HOME_A LALT_T(KC_A)  // A acts as Left Alt
#define HOME_S LCTL_T(KC_S)  // S acts as Left Ctrl
#define HOME_D LSFT_T(KC_D)  // D acts as Left Shift
#define HOME_F LGUI_T(KC_F)  // F acts as Left Super

#define HOME_J RGUI_T(KC_J)  // J acts as Right Super
#define HOME_K RSFT_T(KC_K)  // K acts as Right Shift
#define HOME_L RCTL_T(KC_L)  // L acts as Right Ctrl
#define HOME_SCLN RALT_T(KC_SCLN)  // ; acts as Right Alt

// Re-Positioning
#define RE_CAPS KC_GESC // Caps Lock key acts as ESCAPE key

// Custom Alt keys
#define ALT_LFT LT(_NU, KC_BSPC)
#define ALT_RGT TG(_WASD)

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  /* Keymap _BL: Base Layer (Default Layer) */
[_BL] = LAYOUT(
  KC_GESC,  KC_F1,    KC_F2,    KC_F3,    KC_F4,    KC_F5,    KC_F6,    KC_F7,    KC_F8,    KC_F9,    KC_F10,   KC_F11,   KC_F12,   KC_PSCR,  KC_DEL,   KC_INS,   KC_PGUP,  KC_PGDN,
  KC_GRV,   KC_1,     KC_2,     KC_3,     KC_4,     KC_5,     KC_6,     KC_7,     KC_8,     KC_9,     KC_0,     KC_MINS,  KC_EQL,   KC_BSPC,  KC_NLCK,  KC_PSLS,  KC_PAST,  KC_PMNS,
  KC_TAB,   KC_Q,     KC_W,     KC_E,     KC_R,     KC_T,     KC_Y,     KC_U,     KC_I,     KC_O,     KC_P,     KC_LBRC,  KC_RBRC,  KC_ENT,   KC_P7,    KC_P8,    KC_P9,    KC_PPLS,
  RE_CAPS,  HOME_A,   HOME_S,   HOME_D,   HOME_F,   KC_G,     KC_H,     HOME_J,   HOME_K,   HOME_L,   HOME_SCLN,KC_QUOT,  KC_NUHS,            KC_P4,    KC_P5,    KC_P6,
  KC_LSFT,  KC_NUBS,  KC_Z,     KC_X,     KC_C,     KC_V,     KC_B,     KC_N,     KC_M,     KC_COMM,  KC_DOT,   KC_SLSH,  KC_RSFT,  KC_UP,    KC_P1,    KC_P2,    KC_P3,    KC_PENT,
  KC_LCTL,  KC_LGUI,  ALT_LFT,                      KC_SPC,                                 ALT_RGT,  MO(_FL),  KC_RCTL,  KC_LEFT,  KC_DOWN,  KC_RGHT,  KC_P0,    KC_PDOT),

  /* Keymap _FL: Function Layer */
[_FL] = LAYOUT(
    RESET,  KC_MYCM,  KC_WHOM,  KC_CALC,  KC_MSEL,  KC_MPRV,  KC_MRWD,  KC_MPLY,  KC_MSTP,  KC_MUTE,  KC_VOLD,  KC_VOLU,  _______,   _______,  _______,  _______,  _______,  _______,
  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,   _______,  _______,  _______,  _______,  _______,
  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,   _______,  _______,  _______,  _______,  _______,
  _______,  KC_BRID,  KC_BRIU,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,             _______,  _______,  _______,
  _______,  _______,  RGB_SAI,  RGB_SAD,  RGB_SPD,  RGB_SPI,  _______,  _______,  _______,  _______,  _______,  _______,  _______,   RGB_VAI,  _______,  _______,  _______,  _______,
  _______,  UC_M_WI,  _______,                      _______,                                _______,  _______,  _______, RGB_RMOD,   RGB_VAD,  RGB_MOD,  _______,  _______),

  // NUMBERS LAYER
[_NU] = LAYOUT(
  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,   _______,  _______,  _______,  _______,  _______,
  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,   _______,  _______,  _______,  _______,  _______,
  _______,  KC_1,     KC_2,     KC_3,     KC_4,     KC_5,     KC_6,     KC_7,     KC_8,     KC_9,     KC_0,     _______,  _______,   _______,  _______,  _______,  _______,  _______,
  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,             _______,  _______,  _______,
  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,   _______,  _______,  _______,  _______,  _______,
  _______,  _______,  _______,                      _______,                                _______,  _______,  _______,  _______,   _______,  _______,  _______,  _______),

  // WASD LAYER
[_WASD] = LAYOUT(
  _______,  KC_F1,    KC_F2,    KC_F3,    KC_F4,    KC_F5,    KC_F6,    KC_F7,    KC_F8,    KC_F9,    KC_F10,   KC_F11,   KC_F12,   KC_PSCR,  KC_DEL,   KC_INS,   KC_PGUP,  KC_PGDN,
  _______,  KC_1,     KC_2,     KC_3,     KC_4,     KC_5,     KC_6,     KC_7,     KC_8,     KC_9,     KC_0,     KC_MINS,  KC_EQL,   KC_BSPC,  KC_NLCK,  KC_PSLS,  KC_PAST,  KC_PMNS,
  _______,  KC_Q,     KC_W,     KC_E,     KC_R,     KC_T,     KC_Y,     KC_U,     KC_I,     KC_O,     KC_P,     KC_LBRC,  KC_RBRC,  KC_ENT,   KC_P7,    KC_P8,    KC_P9,    KC_PPLS,
  _______,  KC_A,     KC_S,     KC_D,     KC_F,     KC_G,     KC_H,     KC_J,     KC_K,     KC_L,     KC_SCLN,  KC_QUOT,  KC_NUHS,            KC_P4,    KC_P5,    KC_P6,
  _______,  KC_NUBS,  KC_Z,     KC_X,     KC_C,     KC_V,     KC_B,     KC_N,     KC_M,     KC_COMM,  KC_DOT,   KC_SLSH,  KC_RSFT,  KC_UP,    KC_P1,    KC_P2,    KC_P3,    KC_PENT,
  _______,  _______,  _______,                      _______,                                _______,  _______,  _______,  _______,   _______,  _______,  _______,  _______)
};
