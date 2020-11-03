#include "jetfuel33.h"

#define _______ KC_TRNS
#define XXXXXXX KC_NO

#define _RAISE 1
#define _LOWER 2
#define Z_SFT MT(MOD_LSFT, KC_Z)
#define B_LWR LT(_LOWER, KC_B)
#define SPC_RSE LT(_RAISE, KC_SPC)
#define N_LWR LT(_LOWER, KC_N)
#define SH_ENT MT(MOD_RSFT, KC_ENT)
#define CTRL_A MT(MOD_LCTL, KC_A)
#define ALT_C MT(MOD_LALT, KC_C)
#define CMD_V MT(MOD_LGUI, KC_V)
#define CMD_J MT(MOD_RGUI, KC_J)
#define CTRL_QU MT(MOD_LCTL, KC_QUOT)

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

    /* Default Layer
     * ,---------------------------------------------------------------------------------------.
     * |   Q   |   W   |   E   |   R   |   T   |   Y   |   U   |   I   |   O   |   P   | BSPC  |
     * |---------------------------------------------------------------------------------------|
     * | CTL A |   S   |   D   |   F   |   G   |   H   | CMD J |   K   |   L   |   ;   | CTL ' |
     * |---------------------------------------------------------------------------------------|
     * | SH Z  |   X   | ALT C | CMD V |   B   |  SPC  |   N   |   M   |   ,   |   .   | SHENT |
     * |---------------------------------------------------------------------------------------|
     */
  [0] = KEYMAP(
    KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,    KC_Y,    KC_U,   KC_I,    KC_O,    KC_P,    KC_BSPC,
    CTRL_A,  KC_S,    KC_D,    KC_F,    KC_G,    KC_H,    CMD_J,  KC_K,    KC_L,    KC_SCLN, CTRL_QU,
    Z_SFT,   KC_X,    ALT_C,   CMD_V,   B_LWR,   SPC_RSE, KC_N,   KC_M,    KC_COMM, KC_DOT,  SH_ENT
  ),

  /* Lower
     * ,---------------------------------------------------------------------------------------.
     * |  !    |   @   |   #   |   $   |   %   |   ^   |   &   |   *   |       |       |
     * |---------------------------------------------------------------------------------------|
     * |  TAB  |  ESC  |       |       |       |       |       |       |       |       |   _   |
     * |---------------------------------------------------------------------------------------|
     * |   (   |       |       |       |       |       |       |       |       |       |   )   |
     * |---------------------------------------------------------------------------------------|
     */
  [_LOWER] = KEYMAP(
    KC_EXLM,   KC_AT,   KC_HASH, KC_DLR , KC_PERC, KC_CIRC, KC_AMPR, KC_ASTR, XXXXXXX, XXXXXXX, XXXXXXX,
    KC_TAB,    KC_ESC,  XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, KC_UNDS,
    KC_LPRN,   XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, KC_RPRN
  ),
  /* Raise
     * ,---------------------------------------------------------------------------------------.
     * |  1    |   2   |   3   |   4   |   5   |   6   |   7   |   8   |   9   |   0   |       |
     * |---------------------------------------------------------------------------------------|
     * |   \   |   {   |   =   |   }   |   `   |       | LEFT  |  DOWN |   UP  | RIGHT |   -   |
     * |---------------------------------------------------------------------------------------|
     * |   |   |   [   |   +   |   ]   |   ~   |       |       |       |       |       |   /   |
     * |---------------------------------------------------------------------------------------|
     */
  [_RAISE] = KEYMAP(
    KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    XXXXXXX,
    KC_BSLS, KC_LCBR, KC_EQL,  KC_RCBR, KC_GRV,  KC_LEFT, KC_DOWN, KC_UP,   KC_RGHT, XXXXXXX, KC_MINS,
    KC_PIPE, KC_LBRC, KC_PLUS, KC_RBRC, KC_TILD, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, KC_SLSH
  )
};
