/*
  Set any config.h overrides for your specific keymap here.
  See config.h options at https://docs.qmk.fm/#/config_options?id=the-configh-file
*/
#define ORYX_CONFIGURATOR
#define USB_SUSPEND_WAKEUP_DELAY 0
#define FORCE_NKRO
#undef MOUSEKEY_INTERVAL
#define MOUSEKEY_INTERVAL 25

#undef CAPS_WORD_IDLE_TIMEOUT
#define CAPS_WORD_IDLE_TIMEOUT 3000 // 3 seconds

#undef MOUSEKEY_MAX_SPEED
#define MOUSEKEY_MAX_SPEED 5

#define FIRMWARE_VERSION u8"q0yM5/ybXW0"
