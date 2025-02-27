#ifndef MINI_CONNECT_H
#define MINI_CONNECT_H

#include "quantum.h"

#define LAYOUT( \
	K00, K01, K02, K03, K04, K05, \
	K10, K11, K12, K13, K14, K15, \
	K20, K21, K22, K23, K24, K25, \
	               K33, K34, K35, \
	K40, K41, K42, K43, K44, K45, \
	K50, K51, K52, K53, K54, K55, \
	K60, K61, K62, K63, K64, K65, \
	K73, K74, K75  \
) { \
	{ K00,   K01,   K02,   K03,   K04,   K05 }, \
	{ K10,   K11,   K12,   K13,   K14,   K15 }, \
	{ K20,   K21,   K22,   K23,   K24,   K25 }, \
	{ KC_NO, KC_NO, KC_NO, K33,   K34,   K35 }, \
	{ K40,   K41,   K42,   K43,   K44,   K45 }, \
	{ K50,   K51,   K52,   K53,   K54,   K55 }, \
	{ K60,   K61,   K62,   K63,   K64,   K65 }, \
	{ K73,   K74,   K75,   KC_NO, KC_NO, KC_NO}  \
}

#endif