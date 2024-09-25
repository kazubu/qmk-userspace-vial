/* SPDX-License-Identifier: GPL-2.0-or-later */

#include QMK_KEYBOARD_H

enum layers {
    _BASE = 0,
    _LOWER,
    _RAISE,
    _ADJUST
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [_BASE] = LAYOUT(
        KC_ESC,   KC_1,     KC_2,     KC_3,     KC_4,     KC_5,                             KC_6,     KC_7,      KC_8,     KC_9,      KC_0,     KC_MINS,
        KC_TAB,   KC_Q,     KC_W,     KC_E,     KC_R,     KC_T,                             KC_Y,     KC_U,      KC_I,     KC_O,      KC_P,     KC_BSPC,
        KC_LCTL,  KC_A,     KC_S,     KC_D,     KC_F,     KC_G,                             KC_H,     KC_J,      KC_K,     KC_L,      KC_SCLN,  KC_QUOT,
        KC_LSFT,  KC_Z,     KC_X,     KC_C,     KC_V,     KC_B,                             KC_N,     KC_M,      KC_COMM,  KC_DOT,    KC_SLSH,  KC_BSLS,
        KC_LGUI,  KC_LALT,  XXXXXXX,  XXXXXXX,  LT(1,KC_LNG2),LALT_T(KC_SPC),               RALT_T(KC_ENT),LT(2,KC_LNG1),XXXXXXX, XXXXXXX, KC_RALT,  KC_APP,
        XXXXXXX,
        KC_MS_WH_UP,  KC_MS_WH_LEFT,  KC_MS_BTN1, KC_MS_WH_RIGHT, KC_MS_WH_DOWN,  //left stick UP LEFT CENTER RIGHT DOWN
        KC_MS_BTN1,   KC_MS_BTN2,     KC_MS_BTN1, KC_MS_BTN2,     KC_MS_BTN1,     //right stick
        XXXXXXX
    ),

    [_LOWER] = LAYOUT(
        _______,  _______,  _______,  _______,  _______,  _______,                          _______,  _______,   _______,  _______,  _______,  KC_DEL,
        _______,  KC_1,     KC_2,     KC_3,     KC_4,     KC_5,                             KC_6,     KC_7,      KC_8,     KC_9,     KC_0,     _______,
        _______,  KC_HOME,  KC_PGDN,  KC_PGUP,  KC_END,   XXXXXXX,                          KC_LEFT,  KC_DOWN,   KC_UP,    KC_RIGHT, _______,  _______,
        _______,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,                          XXXXXXX,  XXXXXXX,   _______,  _______,  _______,  _______,
        _______,  _______,  _______,  _______,  _______,  _______,                          _______,  _______,   _______,  _______,  _______,  _______,
        XXXXXXX,
        _______,      _______,        KC_MS_BTN2, _______,        _______,
        KC_MS_WH_UP,  KC_MS_WH_LEFT,  KC_MS_BTN2, KC_MS_WH_RIGHT, KC_MS_WH_DOWN,
        XXXXXXX
    ),

    [_RAISE] = LAYOUT(
        _______,  S(KC_1),  S(KC_2),  S(KC_3),  S(KC_4),  S(KC_5),                          S(KC_6),  S(KC_7),  S(KC_8),  S(KC_9),  S(KC_0), _______,
        _______,  S(KC_1),  S(KC_2),  S(KC_3),  S(KC_4),  S(KC_5),                          S(KC_6),  S(KC_7),  S(KC_8),  S(KC_9),  S(KC_0), _______,
        _______,  _______,  _______,  _______,  _______,  _______,                          KC_MINS,  KC_EQL,   KC_LBRC,  KC_RBRC,  KC_BSLS, KC_GRV,
        _______,  _______,  _______,  _______,  _______,  _______,                          S(KC_MINS),S(KC_EQL),S(KC_LBRC),S(KC_RBRC),S(KC_BSLS), S(KC_GRV),
        _______,  _______,  _______,  _______,  _______,  _______,                          _______,  _______,  _______,  _______,  _______, _______,
        XXXXXXX,
        _______,      KC_WWW_BACK,    KC_MS_BTN2, KC_WWW_FORWARD, _______,
        _______,      _______,        KC_MS_BTN2, _______,        _______,
        XXXXXXX
    ),
    
    [_ADJUST] = LAYOUT(
        QK_BOOT,  KC_F1,    KC_F2,    KC_F3,    KC_F4,    KC_F5,                            KC_F6,    KC_F7,    KC_F8,    KC_F9,    KC_F10,   KC_F11,
        _______,  KC_F1,    KC_F2,    KC_F3,    KC_F4,    KC_F5,                            KC_F6,    KC_F7,    KC_F8,    KC_F9,    KC_F10,   KC_F11,
        _______,  _______,  KC_BRIU,  KC_VOLU,  KC_LNG2,  _______,                          _______,  KC_LNG1,  _______,  _______,  _______,  KC_F12,
        _______,  _______,  KC_BRID,  KC_VOLD,  KC_MUTE,  _______,                          _______,  _______,  _______,  _______,  KC_SCRL,  KC_PSCR,
        _______,  _______,  _______,  _______,  _______,  _______,                          _______,  _______,  _______,  _______,  _______,  _______,
        XXXXXXX,
        _______,      _______,        _______,    _______,        _______,
        _______,      _______,        _______,    _______,        _______,
        XXXXXXX
    )
};

layer_state_t layer_state_set_user(layer_state_t state) {
    return update_tri_layer_state(state, _LOWER, _RAISE, _ADJUST);
}

//void keyboard_post_init_user(void) {
//  debug_enable=true;
//  debug_matrix=true;
//  debug_keyboard=true;
//  debug_mouse=true;
//}
