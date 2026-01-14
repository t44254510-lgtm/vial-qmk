#pragma once


#define VENDOR_ID       0xFEED
#define PRODUCT_ID      0x6060
#define DEVICE_VER      0x0001
#define MANUFACTURER    RoyalKeys
#define PRODUCT         MyMacroPad


#define MATRIX_ROWS 4
#define MATRIX_COLS 4


#define MATRIX_ROW_PINS { F4, F5, F6, F7 }
#define MATRIX_COL_PINS { B1, B3, B2, B6 }
#define DIODE_DIRECTION COL2ROW


#define ENCODERS_PAD_A { D0 }
#define ENCODERS_PAD_B { D1 }
#define ENCODER_RESOLUTION 4


#define RGB_DI_PIN D3    
#define RGBLED_NUM 16       
#define RGBLIGHT_ANIMATIONS 

/* 5. إعدادات Vial */
#define VIAL_KEYBOARD_UID {0x8F, 0x45, 0x12, 0xAB, 0xCD, 0xEF, 0x54, 0x32}
#define VIAL_UNLOCK_COMBO_ROWS { 0, 0 }
#define VIAL_UNLOCK_COMBO_COLS { 0, 1 }
