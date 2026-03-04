#pragma once

#define VENDOR_ID       0xFEED
#define PRODUCT_ID      0x6060
#define DEVICE_VER      0x0001
#define MANUFACTURER    Royal Keys
#define PRODUCT         Rival Pad 16

#define MATRIX_ROWS 4
#define MATRIX_COLS 4

// مطابقة تماماً للسكيماتيك الجديد
#define MATRIX_ROW_PINS { F4, F5, F6, F7 }
#define MATRIX_COL_PINS { B4, B5, B6, B7 }
#define DIODE_DIRECTION COL2ROW

// إعدادات البكرة (Encoder)
#define ENCODERS_PAD_A { B3 }
#define ENCODERS_PAD_B { B1 }
#define ENCODER_RESOLUTION 4

// إعدادات إضاءة الـ RGB
#define RGB_DI_PIN B2
#define RGBLED_NUM 16 // لو عدد الليدات مختلف غير الرقم ده
#define RGBLIGHT_ANIMATIONS