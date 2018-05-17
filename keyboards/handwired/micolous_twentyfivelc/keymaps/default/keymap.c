/* -*- mode: c; indent-tabs-mode: nil; tab-width: 4 -*-
Copyright 2012,2013 Jun Wako <wakojun@gmail.com>
Copyright 2018 Michael Farrell <micolous+git@gmail.com>

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

#include "micolous_twentyfivelc.h"
#include "keymap_steno.h"

const uint16_t keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    {
        {STN_SL,  STN_TL, STN_PL, STN_HL, STN_A, STN_E, STN_FR, STN_PR, STN_LR, STN_TR, STN_DR},
        {STN_STR, STN_KL, STN_WL, STN_RL, STN_O, STN_U, STN_RR, STN_BR, STN_GR, STN_SR, STN_ZR},
    },
};

const uint16_t fn_actions[] = {
};
