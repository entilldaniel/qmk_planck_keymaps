#pragma once

/*
  Set any config.h overrides for your specific keymap here.
  See config.h options at https://docs.qmk.fm/#/config_options?id=the-configh-file
*/
#define ORYX_CONFIGURATOR
#define FIRMWARE_VERSION u8"Jwwap/Pp0g9"


#define PLANCK_EZ_USER_LEDS

#define PLANCK_EZ_LED_LOWER 2
#define PLANCK_EZ_LED_RAISE 3
#define PLANCK_EZ_LED_ADJUST 4


#define UNICODE_KEY_LNX LCTL(LSFT(KC_U))
#define UNICODE_SELECTED_MODES UNICODE_MODE_LINUX, UNICODE_MODE_EMACS
