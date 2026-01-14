#include QMK_KEYBOARD_H
const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [0] = LAYOUT_ortho_4x4(
        KC_P7, KC_P8, KC_P9, KC_A,
        KC_P4, KC_P5, KC_P6, KC_B,
        KC_P1, KC_P2, KC_P3, KC_C,
        KC_P0, KC_DOT, KC_ENT, KC_D
    )
};
#if defined(ENCODER_ENABLE)
const uint16_t PROGMEM encoder_map[][NUM_ENCODERS][2] = {
    [0] = { ENCODER_CCW_CW(KC_VOLD, KC_VOLU) }
};
#endif
