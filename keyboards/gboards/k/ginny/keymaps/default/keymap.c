#include QMK_KEYBOARD_H
#include "g/engine.h"
#include "g/keymap_engine.h"

/* Note: Don't edit this file! 
 *
 * You can tweak what dictionaries/languages are loaded in dicts.def
 * Your personal keymap is over in user.def
 *
 * This is the most non-QMK powered device ever :)
 * Happy Hacking,
 *		-- Germ
 */

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
[0] = LAYOUT_ginny(
    MI_C_1, MI_D_1, MI_E_1, MI_F_1, MI_G_1,
    MI_C_2, MI_D_2, MI_E_2, MI_F_2, MI_G_2
		//KC_A, KC_S, KC_E, KC_T, KC_L, KC_R, KC_N, KC_I, KC_O, KC_P
)};
