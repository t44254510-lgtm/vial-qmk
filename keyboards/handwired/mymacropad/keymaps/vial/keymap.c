#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [0] = LAYOUT_ortho_4x4(
        KC_1, KC_2, KC_3, KC_4,
        KC_5, KC_6, KC_7, KC_8,
        KC_9, KC_A, KC_B, KC_C,
        KC_D, KC_E, KC_F, KC_G
    ),
    [1] = LAYOUT_ortho_4x4(
        _______, _______, _______, _______,
        _______, _______, _______, _______,
        _______, _______, _______, _______,
        _______, _______, _______, _______
    )
};

// تشغيل البكرة (تعلية وتوطية الصوت)
#if defined(ENCODER_ENABLE)
bool encoder_update_user(uint8_t index, bool clockwise) {
    if (index == 0) {
        if (clockwise) {
            tap_code(KC_VOLU);
        } else {
            tap_code(KC_VOLD);
        }
    }
    return false;
}
#endif

// كود الشاشة والأنيميشن البسيط
#ifdef OLED_ENABLE
bool oled_task_user(void) {
    // 1. عرض الطبقة الحالية
    oled_write_P(PSTR("Layer: "), false);
    switch (get_highest_layer(layer_state)) {
        case 0:
            oled_write_P(PSTR("Base\n\n"), false);
            break;
        case 1:
            oled_write_P(PSTR("Macros\n\n"), false);
            break;
        default:
            oled_write_P(PSTR("Unknown\n\n"), false);
    }

    // 2. أنيميشن نبض مبرمج (بدون صور لتوفير المساحة)
    static uint32_t anim_timer = 0;
    static uint8_t frame = 0;
    
    // التبديل كل 500 ملي ثانية
    if (timer_elapsed32(anim_timer) > 500) {
        anim_timer = timer_read32();
        frame = !frame; 
    }
    
    // رسم الأنيميشن
    if(frame) {
        oled_write_P(PSTR("   [ * ]   \n"), false);
    } else {
        oled_write_P(PSTR("   [   ]   \n"), false);
    }

    return false;
}
#endif