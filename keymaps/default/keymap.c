// Copyright 2023 QMK
// SPDX-License-Identifier: GPL-2.0-or-later

#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    /*
     * ┌───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┐
     * │ A │ B │ C │ D │ E │ F │ G │ H │ I │ J │ K │ L │
     * ├───┼───┼───┼───┼───┼───┼───┼───┼───┼───┼───┼───┤
     * │ A │ B │ C │ D │ E │ F │ G │ H │ I │ J │ K │ L │
     * ├───┼───┼───┼───┼───┼───┼───┼───┼───┼───┼───┼───┤
     * │ A │ B │ C │ D │ E │ F │ G │ H │ I │ J │ K │ L │
     * ├───┼───┼───┼───┼───┼───┼───┼───┼───┼───┼───┼───┤
     * │ A │ B │ C │ D │ E │ F │ G │ H │ I │ J │ K │ L │
     * └───┴───┴───┴───┴───┴───┴───┴───┴───┴───┴───┴───┘
     */
    [0] = LAYOUT_4x12(
        KC_ESC, KC_Q, KC_W, KC_E, KC_R, KC_T, 
		KC_SPC, KC_A, KC_S, KC_D, KC_F, KC_G, 
		KC_LGUI, KC_Z, KC_X, KC_C, KC_V, KC_B, 
		                MO(1), KC_SPC, KC_TAB, 
                                                        KC_SPC, KC_P, KC_O, KC_I, KC_U, KC_Y, 
                                                        KC_QUOT, KC_SCLN, KC_L, KC_K, KC_J, KC_H, 
                                                        KC_SPC, KC_SLSH, KC_DOT, KC_COMM, KC_M, KC_N, 
                                                        KC_SPC, KC_SPC, KC_SPC
    )
    [1] = LAYOUT_4X12(
        KC_TRNS, KC_F1, KC_F2, KC_F3, KC_4, KC_TRNS, 
		KC_TRNS, KC_1, KC_2, KC_3, KC_4, KC_5, 
		KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, 
		                            KC_TRNS, KC_TRNS, KC_TRNS, 
                                                                    KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, 
                                                                    KC_TRNS, KC_0, KC_9, KC_8, KC_7, KC_6, 
                                                                    RESET, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, 
                                                                    KC_TRNS, KC_TRNS, KC_TRNS),
    )
};
