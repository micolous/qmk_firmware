/*
Copyright 2012,2013 Jun Wako <wakojun@gmail.com>

This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 2 of the License, or
(at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "chibios_test.h"
#ifdef STENO_ENABLE
#include "keymap_steno.h"
#endif
#include "keymap_plover.h"

const uint16_t keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
#ifdef STENO_ENABLE
    {
        {STN_SL,  STN_TL, STN_PL, STN_HL, STN_A, STN_E, STN_FR, STN_PR, STN_LR, STN_TR, STN_DR},
        {STN_STR, STN_KL, STN_WL, STN_RL, STN_O, STN_U, STN_RR, STN_BR, STN_GR, STN_SR, STN_ZR},
    },
#endif
    {
        {PV_LS,   PV_LT, PV_LP, PV_LH, PV_A, PV_E, PV_RF, PV_RP, PV_RL, PV_RT, PV_RD},
        {PV_STAR, PV_LK, PV_LW, PV_LR, PV_O, PV_U, PV_RR, PV_RB, PV_RG, PV_RS, PV_RZ},
    },
    {
		{KC_Q, KC_W, KC_E, KC_R, KC_T, KC_Y, KC_U, KC_I, KC_O, KC_P, KC_LBRC},
		{KC_A, KC_S, KC_D, KC_F, KC_G, KC_H, KC_J, KC_K, KC_L, KC_SCLN, KC_QUOT},
		//{KC_Z, KC_X, KC_C, KC_V}
	 }, // test with KC_CAPS, KC_A, RESET
};

const uint16_t fn_actions[] = {
};


void matrix_init_user() {
#ifdef STENO_ENABLE
    steno_set_mode(STENO_MODE_BOLT);
#endif
}

