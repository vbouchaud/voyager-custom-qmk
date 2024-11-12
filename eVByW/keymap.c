#include QMK_KEYBOARD_H
#include "version.h"
#define MOON_LED_LEVEL LED_LEVEL
#define ML_SAFE_RANGE SAFE_RANGE

enum custom_keycodes {
  RGB_SLD = ML_SAFE_RANGE,
};



enum tap_dance_codes {
  DANCE_0,
  DANCE_1,
  DANCE_2,
  DANCE_3,
  DANCE_4,
  DANCE_5,
  DANCE_6,
  DANCE_7,
  DANCE_8,
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [0] = LAYOUT_voyager(
    TD(DANCE_0),    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_Q,           KC_W,           KC_E,           KC_R,           KC_T,                                           KC_Y,           KC_U,           KC_I,           KC_O,           KC_P,           KC_TRANSPARENT, 
    KC_TRANSPARENT, TD(DANCE_1),    MT(MOD_LGUI, KC_S),MT(MOD_LALT, KC_D),MT(MOD_LCTL, KC_F),TD(DANCE_2),                                    KC_H,           MT(MOD_RCTL, KC_J),MT(MOD_RALT, KC_K),MT(MOD_RGUI, KC_L),LT(3,KC_SCLN),  KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_Z,           KC_X,           KC_C,           TD(DANCE_3),    KC_B,                                           KC_N,           KC_M,           KC_COMMA,       KC_DOT,         KC_SLASH,       KC_TRANSPARENT, 
                                                    LT(2,KC_ENTER), MT(MOD_LSFT, KC_TAB),                                KC_BSPC,        LT(1,KC_SPACE)
  ),
  [1] = LAYOUT_voyager(
    KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,                                          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          
    KC_NO,          KC_F9,          KC_F10,         KC_F11,         KC_F12,         KC_NO,                                          KC_KP_SLASH,    KC_7,           KC_8,           KC_9,           KC_KP_ASTERISK, KC_NO,          
    KC_NO,          KC_F5,          MT(MOD_LGUI, KC_F6),MT(MOD_LALT, KC_F7),MT(MOD_LCTL, KC_F8),KC_NO,                                          KC_DOT,         KC_4,           KC_5,           KC_6,           KC_KP_MINUS,    KC_NO,          
    KC_NO,          KC_F1,          KC_F2,          KC_F3,          KC_F4,          KC_NO,                                          KC_0,           KC_1,           KC_2,           KC_3,           KC_KP_PLUS,     KC_NO,          
                                                    KC_NO,          KC_NO,                                          KC_NO,          KC_TRANSPARENT
  ),
  [2] = LAYOUT_voyager(
    KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,                                          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          QK_BOOT,        
    KC_NO,          KC_NO,          KC_AUDIO_VOL_DOWN,KC_AUDIO_MUTE,  KC_AUDIO_VOL_UP,KC_NO,                                          KC_PAGE_UP,     KC_HOME,        TD(DANCE_4),    KC_END,         KC_NO,          KC_NO,          
    KC_NO,          KC_NO,          MT(MOD_LGUI, KC_MEDIA_PREV_TRACK),MT(MOD_LALT, KC_MEDIA_PLAY_PAUSE),MT(MOD_LCTL, KC_MEDIA_NEXT_TRACK),KC_NO,                                          KC_PGDN,        KC_LEFT,        KC_UP,          KC_RIGHT,       KC_NO,          KC_NO,          
    KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,                                          KC_NO,          LCTL(LSFT(KC_TAB)),KC_DOWN,        LCTL(KC_TAB),   KC_NO,          KC_NO,          
                                                    KC_TRANSPARENT, KC_NO,                                          KC_NO,          KC_NO
  ),
  [3] = LAYOUT_voyager(
    KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,                                          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          
    KC_NO,          KC_NO,          KC_MS_WH_LEFT,  KC_MS_WH_UP,    KC_MS_WH_RIGHT, KC_NO,                                          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          
    KC_NO,          KC_NO,          MT(MOD_LGUI, KC_MS_BTN3),KC_MS_BTN1,     MT(MOD_LCTL, KC_MS_BTN2),KC_NO,                                          KC_NO,          KC_MS_LEFT,     KC_MS_UP,       KC_MS_RIGHT,    KC_TRANSPARENT, KC_NO,          
    KC_NO,          KC_NO,          KC_NO,          KC_MS_WH_DOWN,  KC_NO,          KC_NO,                                          KC_NO,          KC_NO,          KC_MS_DOWN,     KC_NO,          KC_NO,          KC_NO,          
                                                    KC_NO,          KC_NO,                                          KC_NO,          KC_NO
  ),
  [4] = LAYOUT_voyager(
    KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,                                          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          
    KC_NO,          LGUI(LSFT(KC_Q)),LGUI(LSFT(KC_R)),TD(DANCE_5),    LGUI(KC_R),     LGUI(LSFT(KC_J)),                                KC_NO,          TD(DANCE_6),    KC_NO,          KC_NO,          KC_NO,          KC_NO,          
    KC_NO,          KC_TRANSPARENT, LGUI(LSFT(KC_LEFT)),LGUI(LSFT(KC_UP)),LGUI(LSFT(KC_RIGHT)),LGUI(KC_M),                                     LGUI(KC_A),     LGUI(KC_LEFT),  LGUI(KC_UP),    LGUI(KC_RIGHT), KC_NO,          KC_NO,          
    KC_NO,          KC_NO,          KC_NO,          LGUI(LSFT(KC_DOWN)),KC_NO,          LGUI(KC_B),                                     KC_NO,          TD(DANCE_7),    LGUI(KC_DOWN),  TD(DANCE_8),    KC_NO,          KC_NO,          
                                                    LGUI(LCTL(KC_LEFT)),KC_NO,                                          KC_NO,          LGUI(LCTL(KC_RIGHT))
  ),
  [5] = LAYOUT_voyager(
    KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,                                          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          
    KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,                                          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          
    KC_NO,          KC_1,           KC_2,           KC_3,           KC_4,           KC_5,                                           KC_6,           KC_7,           KC_8,           KC_9,           KC_0,           KC_NO,          
    KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,                                          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          
                                                    KC_NO,          KC_NO,                                          KC_NO,          KC_NO
  ),
};



extern rgb_config_t rgb_matrix_config;

void keyboard_post_init_user(void) {
  rgb_matrix_enable();
}

const uint8_t PROGMEM ledmap[][RGB_MATRIX_LED_COUNT][3] = {
    [0] = { {82,89,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {41,255,255}, {0,0,255}, {0,0,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,255}, {197,227,255}, {41,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0} },

    [1] = { {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {144,255,255}, {144,255,255}, {144,255,255}, {144,255,255}, {0,0,0}, {0,0,0}, {144,255,255}, {41,255,255}, {0,0,255}, {0,0,255}, {0,0,0}, {0,0,0}, {144,255,255}, {144,255,255}, {144,255,255}, {144,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {82,218,204}, {41,255,255}, {41,255,255}, {41,255,255}, {82,218,204}, {0,0,0}, {82,218,204}, {41,255,255}, {41,255,255}, {41,255,255}, {82,218,204}, {0,0,0}, {41,255,255}, {41,255,255}, {41,255,255}, {41,255,255}, {82,218,204}, {0,0,0}, {0,0,0}, {0,0,0} },

    [2] = { {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {20,218,204}, {20,218,204}, {20,218,204}, {0,0,0}, {0,0,0}, {0,0,0}, {38,136,255}, {38,136,255}, {38,136,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,85,255}, {42,218,204}, {42,218,204}, {82,89,255}, {42,218,204}, {0,0,0}, {0,0,0}, {42,218,204}, {12,209,255}, {12,209,255}, {12,209,255}, {0,0,0}, {0,0,0}, {0,0,0}, {144,218,255}, {12,209,255}, {144,218,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0} },

    [3] = { {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {159,173,188}, {159,173,188}, {159,173,188}, {0,0,0}, {0,0,0}, {0,0,0}, {139,188,252}, {139,67,171}, {139,188,252}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {159,173,188}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {139,188,252}, {139,188,252}, {139,188,252}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {139,188,252}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0} },

    [4] = { {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,255,255}, {37,255,255}, {0,4,255}, {37,255,255}, {0,255,255}, {0,0,0}, {0,0,0}, {97,255,255}, {97,255,255}, {97,255,255}, {37,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {97,255,255}, {0,0,0}, {37,255,255}, {0,0,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {165,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {130,255,255}, {130,255,255}, {130,255,255}, {130,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {165,255,255}, {130,255,255}, {165,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,255} },

    [5] = { {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {36,190,255}, {36,190,255}, {36,190,255}, {36,190,255}, {36,190,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {36,190,255}, {36,190,255}, {36,190,255}, {36,190,255}, {36,190,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0} },

};

void set_layer_color(int layer) {
  for (int i = 0; i < RGB_MATRIX_LED_COUNT; i++) {
    HSV hsv = {
      .h = pgm_read_byte(&ledmap[layer][i][0]),
      .s = pgm_read_byte(&ledmap[layer][i][1]),
      .v = pgm_read_byte(&ledmap[layer][i][2]),
    };
    if (!hsv.h && !hsv.s && !hsv.v) {
        rgb_matrix_set_color( i, 0, 0, 0 );
    } else {
        RGB rgb = hsv_to_rgb( hsv );
        float f = (float)rgb_matrix_config.hsv.v / UINT8_MAX;
        rgb_matrix_set_color( i, f * rgb.r, f * rgb.g, f * rgb.b );
    }
  }
}

bool rgb_matrix_indicators_user(void) {
  if (rawhid_state.rgb_control) {
      return false;
  }
  if (keyboard_config.disable_layer_led) { return false; }
  switch (biton32(layer_state)) {
    case 0:
      set_layer_color(0);
      break;
    case 1:
      set_layer_color(1);
      break;
    case 2:
      set_layer_color(2);
      break;
    case 3:
      set_layer_color(3);
      break;
    case 4:
      set_layer_color(4);
      break;
    case 5:
      set_layer_color(5);
      break;
   default:
    if (rgb_matrix_get_flags() == LED_FLAG_NONE)
      rgb_matrix_set_color_all(0, 0, 0);
    break;
  }
  return true;
}

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  switch (keycode) {

    case RGB_SLD:
      if (record->event.pressed) {
        rgblight_mode(1);
      }
      return false;
  }
  return true;
}


typedef struct {
    bool is_press_action;
    uint8_t step;
} tap;

enum {
    SINGLE_TAP = 1,
    SINGLE_HOLD,
    DOUBLE_TAP,
    DOUBLE_HOLD,
    DOUBLE_SINGLE_TAP,
    MORE_TAPS
};

static tap dance_state[9];

uint8_t dance_step(tap_dance_state_t *state);

uint8_t dance_step(tap_dance_state_t *state) {
    if (state->count == 1) {
        if (state->interrupted || !state->pressed) return SINGLE_TAP;
        else return SINGLE_HOLD;
    } else if (state->count == 2) {
        if (state->interrupted) return DOUBLE_SINGLE_TAP;
        else if (state->pressed) return DOUBLE_HOLD;
        else return DOUBLE_TAP;
    }
    return MORE_TAPS;
}


void on_dance_0(tap_dance_state_t *state, void *user_data);
void dance_0_finished(tap_dance_state_t *state, void *user_data);
void dance_0_reset(tap_dance_state_t *state, void *user_data);

void on_dance_0(tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(KC_ESCAPE);
        tap_code16(KC_ESCAPE);
        tap_code16(KC_ESCAPE);
    }
    if(state->count > 3) {
        tap_code16(KC_ESCAPE);
    }
}

void dance_0_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[0].step = dance_step(state);
    switch (dance_state[0].step) {
        case SINGLE_TAP: register_code16(KC_ESCAPE); break;
        case DOUBLE_TAP: register_code16(LALT(LCTL(KC_H))); break;
        case DOUBLE_SINGLE_TAP: tap_code16(KC_ESCAPE); register_code16(KC_ESCAPE);
    }
}

void dance_0_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[0].step) {
        case SINGLE_TAP: unregister_code16(KC_ESCAPE); break;
        case DOUBLE_TAP: unregister_code16(LALT(LCTL(KC_H))); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(KC_ESCAPE); break;
    }
    dance_state[0].step = 0;
}
void on_dance_1(tap_dance_state_t *state, void *user_data);
void dance_1_finished(tap_dance_state_t *state, void *user_data);
void dance_1_reset(tap_dance_state_t *state, void *user_data);

void on_dance_1(tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(KC_A);
        tap_code16(KC_A);
        tap_code16(KC_A);
    }
    if(state->count > 3) {
        tap_code16(KC_A);
    }
}

void dance_1_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[1].step = dance_step(state);
    switch (dance_state[1].step) {
        case SINGLE_TAP: register_code16(KC_A); break;
        case SINGLE_HOLD: layer_on(4); break;
        case DOUBLE_TAP: register_code16(LGUI(LSFT(KC_W))); break;
        case DOUBLE_SINGLE_TAP: tap_code16(KC_A); register_code16(KC_A);
    }
}

void dance_1_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[1].step) {
        case SINGLE_TAP: unregister_code16(KC_A); break;
        case SINGLE_HOLD:
          layer_off(4);
        break;
        case DOUBLE_TAP: unregister_code16(LGUI(LSFT(KC_W))); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(KC_A); break;
    }
    dance_state[1].step = 0;
}
void on_dance_2(tap_dance_state_t *state, void *user_data);
void dance_2_finished(tap_dance_state_t *state, void *user_data);
void dance_2_reset(tap_dance_state_t *state, void *user_data);

void on_dance_2(tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(KC_G);
        tap_code16(KC_G);
        tap_code16(KC_G);
    }
    if(state->count > 3) {
        tap_code16(KC_G);
    }
}

void dance_2_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[2].step = dance_step(state);
    switch (dance_state[2].step) {
        case SINGLE_TAP: register_code16(KC_G); break;
        case DOUBLE_TAP: register_code16(LGUI(KC_G)); break;
        case DOUBLE_SINGLE_TAP: tap_code16(KC_G); register_code16(KC_G);
    }
}

void dance_2_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[2].step) {
        case SINGLE_TAP: unregister_code16(KC_G); break;
        case DOUBLE_TAP: unregister_code16(LGUI(KC_G)); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(KC_G); break;
    }
    dance_state[2].step = 0;
}
void on_dance_3(tap_dance_state_t *state, void *user_data);
void dance_3_finished(tap_dance_state_t *state, void *user_data);
void dance_3_reset(tap_dance_state_t *state, void *user_data);

void on_dance_3(tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(KC_V);
        tap_code16(KC_V);
        tap_code16(KC_V);
    }
    if(state->count > 3) {
        tap_code16(KC_V);
    }
}

void dance_3_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[3].step = dance_step(state);
    switch (dance_state[3].step) {
        case SINGLE_TAP: register_code16(KC_V); break;
        case DOUBLE_TAP: set_oneshot_layer(5, ONESHOT_START); set_oneshot_layer(5, ONESHOT_PRESSED); break;
        case DOUBLE_SINGLE_TAP: tap_code16(KC_V); register_code16(KC_V);
    }
}

void dance_3_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[3].step) {
        case SINGLE_TAP: unregister_code16(KC_V); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(KC_V); break;
    }
    dance_state[3].step = 0;
}
void on_dance_4(tap_dance_state_t *state, void *user_data);
void dance_4_finished(tap_dance_state_t *state, void *user_data);
void dance_4_reset(tap_dance_state_t *state, void *user_data);

void on_dance_4(tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(KC_PSCR);
        tap_code16(KC_PSCR);
        tap_code16(KC_PSCR);
    }
    if(state->count > 3) {
        tap_code16(KC_PSCR);
    }
}

void dance_4_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[4].step = dance_step(state);
    switch (dance_state[4].step) {
        case SINGLE_TAP: register_code16(KC_PSCR); break;
        case DOUBLE_TAP: register_code16(LSFT(KC_PSCR)); break;
        case DOUBLE_HOLD: register_code16(LCTL(LSFT(KC_PSCR))); break;
        case DOUBLE_SINGLE_TAP: tap_code16(KC_PSCR); register_code16(KC_PSCR);
    }
}

void dance_4_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[4].step) {
        case SINGLE_TAP: unregister_code16(KC_PSCR); break;
        case DOUBLE_TAP: unregister_code16(LSFT(KC_PSCR)); break;
        case DOUBLE_HOLD: unregister_code16(LCTL(LSFT(KC_PSCR))); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(KC_PSCR); break;
    }
    dance_state[4].step = 0;
}
void on_dance_5(tap_dance_state_t *state, void *user_data);
void dance_5_finished(tap_dance_state_t *state, void *user_data);
void dance_5_reset(tap_dance_state_t *state, void *user_data);

void on_dance_5(tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(LGUI(KC_I));
        tap_code16(LGUI(KC_I));
        tap_code16(LGUI(KC_I));
    }
    if(state->count > 3) {
        tap_code16(LGUI(KC_I));
    }
}

void dance_5_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[5].step = dance_step(state);
    switch (dance_state[5].step) {
        case SINGLE_TAP: register_code16(LGUI(KC_I)); break;
        case DOUBLE_TAP: register_code16(LGUI(KC_T)); break;
        case DOUBLE_HOLD: register_code16(LGUI(KC_S)); break;
        case DOUBLE_SINGLE_TAP: tap_code16(LGUI(KC_I)); register_code16(LGUI(KC_I));
    }
}

void dance_5_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[5].step) {
        case SINGLE_TAP: unregister_code16(LGUI(KC_I)); break;
        case DOUBLE_TAP: unregister_code16(LGUI(KC_T)); break;
        case DOUBLE_HOLD: unregister_code16(LGUI(KC_S)); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(LGUI(KC_I)); break;
    }
    dance_state[5].step = 0;
}
void on_dance_6(tap_dance_state_t *state, void *user_data);
void dance_6_finished(tap_dance_state_t *state, void *user_data);
void dance_6_reset(tap_dance_state_t *state, void *user_data);

void on_dance_6(tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(LGUI(LSFT(KC_C)));
        tap_code16(LGUI(LSFT(KC_C)));
        tap_code16(LGUI(LSFT(KC_C)));
    }
    if(state->count > 3) {
        tap_code16(LGUI(LSFT(KC_C)));
    }
}

void dance_6_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[6].step = dance_step(state);
    switch (dance_state[6].step) {
        case SINGLE_TAP: register_code16(LGUI(LSFT(KC_C))); break;
        case DOUBLE_TAP: register_code16(LGUI(KC_C)); break;
        case DOUBLE_SINGLE_TAP: tap_code16(LGUI(LSFT(KC_C))); register_code16(LGUI(LSFT(KC_C)));
    }
}

void dance_6_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[6].step) {
        case SINGLE_TAP: unregister_code16(LGUI(LSFT(KC_C))); break;
        case DOUBLE_TAP: unregister_code16(LGUI(KC_C)); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(LGUI(LSFT(KC_C))); break;
    }
    dance_state[6].step = 0;
}
void on_dance_7(tap_dance_state_t *state, void *user_data);
void dance_7_finished(tap_dance_state_t *state, void *user_data);
void dance_7_reset(tap_dance_state_t *state, void *user_data);

void on_dance_7(tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(LCTL(LGUI(KC_SPACE)));
        tap_code16(LCTL(LGUI(KC_SPACE)));
        tap_code16(LCTL(LGUI(KC_SPACE)));
    }
    if(state->count > 3) {
        tap_code16(LCTL(LGUI(KC_SPACE)));
    }
}

void dance_7_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[7].step = dance_step(state);
    switch (dance_state[7].step) {
        case SINGLE_TAP: register_code16(LCTL(LGUI(KC_SPACE))); break;
        case DOUBLE_TAP: register_code16(LGUI(KC_SPACE)); break;
        case DOUBLE_SINGLE_TAP: tap_code16(LCTL(LGUI(KC_SPACE))); register_code16(LCTL(LGUI(KC_SPACE)));
    }
}

void dance_7_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[7].step) {
        case SINGLE_TAP: unregister_code16(LCTL(LGUI(KC_SPACE))); break;
        case DOUBLE_TAP: unregister_code16(LGUI(KC_SPACE)); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(LCTL(LGUI(KC_SPACE))); break;
    }
    dance_state[7].step = 0;
}
void on_dance_8(tap_dance_state_t *state, void *user_data);
void dance_8_finished(tap_dance_state_t *state, void *user_data);
void dance_8_reset(tap_dance_state_t *state, void *user_data);

void on_dance_8(tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(LGUI(KC_X));
        tap_code16(LGUI(KC_X));
        tap_code16(LGUI(KC_X));
    }
    if(state->count > 3) {
        tap_code16(LGUI(KC_X));
    }
}

void dance_8_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[8].step = dance_step(state);
    switch (dance_state[8].step) {
        case SINGLE_TAP: register_code16(LGUI(KC_X)); break;
        case DOUBLE_TAP: register_code16(KC_ESCAPE); break;
        case DOUBLE_SINGLE_TAP: tap_code16(LGUI(KC_X)); register_code16(LGUI(KC_X));
    }
}

void dance_8_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[8].step) {
        case SINGLE_TAP: unregister_code16(LGUI(KC_X)); break;
        case DOUBLE_TAP: unregister_code16(KC_ESCAPE); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(LGUI(KC_X)); break;
    }
    dance_state[8].step = 0;
}

tap_dance_action_t tap_dance_actions[] = {
        [DANCE_0] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_0, dance_0_finished, dance_0_reset),
        [DANCE_1] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_1, dance_1_finished, dance_1_reset),
        [DANCE_2] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_2, dance_2_finished, dance_2_reset),
        [DANCE_3] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_3, dance_3_finished, dance_3_reset),
        [DANCE_4] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_4, dance_4_finished, dance_4_reset),
        [DANCE_5] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_5, dance_5_finished, dance_5_reset),
        [DANCE_6] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_6, dance_6_finished, dance_6_reset),
        [DANCE_7] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_7, dance_7_finished, dance_7_reset),
        [DANCE_8] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_8, dance_8_finished, dance_8_reset),
};
