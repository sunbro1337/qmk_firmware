// RGB Lighting https://docs.qmk.fm/#/feature_rgblight
#ifdef RGBLIGHT_ENABLE

#   undef RGBLIGHT_LIMIT_VAL
#   undef RGBLIGHT_SPLIT
#   define RGBLIGHT_EFFECT_BREATHING
#   define RGBLIGHT_EFFECT_CHRISTMAS
#   define RGBLIGHT_EFFECT_KNIGHT
#   define RGBLIGHT_EFFECT_RAINBOW_MOOD
#   define RGBLIGHT_EFFECT_RAINBOW_SWIRL
#   define RGBLIGHT_EFFECT_SNAKE
#   define RGBLIGHT_EFFECT_STATIC_GRADIENT
#   define RGBLIGHT_EFFECT_TWINKLE

#   define RGBLIGHT_HUE_STEP           8                           // The number of steps to cycle through the hue by
#   define RGBLIGHT_SAT_STEP           17                          // The number of steps to increment the saturation by
#   define RGBLIGHT_VAL_STEP           17                          // The number of steps to increment the brightness by
#   define RGBLIGHT_LIMIT_VAL          255                         // The maximum brightness level
#   define RGBLIGHT_SLEEP                                          // If defined, the RGB lighting will be switched off when the host goes to sleep
#   define RGBLIGHT_SPLIT                                          // If defined, synchronization functionality for split keyboards is added
// #    define RGBLIGHT_DISABLE_KEYCODES                               // If defined, disables the ability to control RGB Light from the keycodes. You must use code functions to control the feature
#   define RGBLIGHT_DEFAULT_MODE       RGBLIGHT_MODE_STATIC_LIGHT     // The default mode to use upon clearing the EEPROM
#   define RGBLIGHT_DEFAULT_HUE        201                         // The default hue to use upon clearing the EEPROM
#   define RGBLIGHT_DEFAULT_SAT        UINT8_MAX                   // The default saturation to use upon clearing the EEPROM
#   define RGBLIGHT_DEFAULT_VAL        RGBLIGHT_LIMIT_VAL          // The default value (brightness) to use upon clearing the EEPROM
#   define RGBLIGHT_DEFAULT_SPD        0                           // The default speed to use upon clearing the EEPROM
// #    define RGBLIGHT_DEFAULT_ON         true                        // Enable RGB lighting upon clearing the EEPROM

#endif // #ifdef RGBLIGHT_ENABLE
