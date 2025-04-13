// Copyright 2025 DV (@iamdanielv)
// SPDX-License-Identifier: GPL-2.0-or-later

#pragma once

enum layer_names {
    BASE_LYR,     // 0 - regular qwerty
    HRM_BASE_LYR, // 1 - home row mods qwerty
    EXT_LYR,      // 2 - similar to extend
    KBCTL_LYR,    // 3 - keyboard control layer
    NUM_LYR,      // 4 - numpad
    MEDIA_LYR     // 5 - media keys
};

// clang-format off
/*  LED Matrix
    ESC  1    2    3    4    5    6    7    8    9    0    -    =    BSPC INS  BULB
    0    1    2    3    4    5    6    7    8    9    10   11   12   13   14   15

    TAB  Q    W    E    R    T    Y    U    I    O    P    [    ]    BSLS END  DEL
    16   17   18   19   20   21   22   23   24   25   26   27   28   29   30   31

    CAPS A    S    D    F    G    H    J    K    L    ;    '         ENT  HOME PGUP
    32   33   34   35   36   37   38   39   40   41   42   43        44   45   46

    LSFT Z    X    C    V    B    N    M    ,    .    /        RSFT       UP   PGDN
    47   48   49   50   51   52   53   54   55   56   57       58         59   60

    LCTL LG   LALT           SPC            RALT RCTL Fn1  fn2 LEFT       DOWN RGHT
    61   62   63             64             65   66   67   68  69         70   71
*/
// clang-format on

// ***************
// * Key Indexes *
// ***************

#define ESC_KI 0
#define BSPC_KI 13

// Modifiers
#define GRV_KI 0
#define TAB_KI 16
#define CAPS_KI 32
#define LEFT_SFT_KI 47
#define LEFT_CTL_KI 61
#define LEFT_WIN_KI 62
#define LEFT_ALT_KI 63
#define SPACE_KI 64
#define FN1_KI 67
#define FN2_KI 68
#define RIGHT_ALT_KI 65
#define RIGHT_CTL_KI 66
#define RIGHT_SFT_KI 58
#define ENTER_KI 44
#define INS_KI  14
#define BULB_KI 15
#define END_KI  30
#define DEL_KI  31
#define HOME_KI 45
#define PGUP_KI 46
#define PGDN_KI 60

// Letter Keys
#define A_KI 33
#define B_KI 52
#define C_KI 50
#define D_KI 35
#define E_KI 19
#define F_KI 36
#define G_KI 37
#define H_KI 38
#define I_KI 24
#define J_KI 39
#define K_KI 40
#define L_KI 41
#define M_KI 54
#define N_KI 53
#define O_KI 25
#define P_KI 26
#define Q_KI 17
#define R_KI 20
#define S_KI 34
#define T_KI 21
#define U_KI 23
#define V_KI 51
#define W_KI 18
#define X_KI 49
#define Y_KI 22
#define Z_KI 48

// number keys
#define N1_KI 1
#define N2_KI 2
#define N3_KI 3
#define N4_KI 4
#define N5_KI 5
#define N6_KI 6
#define N7_KI 7
#define N8_KI 8
#define N9_KI 9
#define N0_KI 10

// F Keys
#define F1_KI  1
#define F2_KI  2
#define F3_KI  3
#define F4_KI  4
#define F5_KI  5
#define F6_KI  6
#define F7_KI  7
#define F8_KI  8
#define F9_KI  9
#define F10_KI 10
#define F11_KI 11
#define F12_KI 12

// symbols
#define COMM_KI 55 // ,
#define DOT_KI  56  // .
#define BSLS_KI 29 // \ backslash
#define SLSH_KI 57 // / forwardslash
#define SCLN_KI 42 // ;
#define QUOT_KI 43 // '
#define MINS_KI 11 // -
#define EQL_KI  12  // =

// arrows
#define UP_KI    59
#define LEFT_KI  69
#define DOWN_KI  70
#define RIGHT_KI 71


// ******************************
// * Aliases to simplify keymap *
// ******************************

// *****************
// * Home Row Mods *
// *****************
// based on: https://precondition.github.io/home-row-mods#getting-started-with-home-row-mods-on-qmk

// Left-hand home row mods
#define GUI_A LGUI_T(KC_A)
#define ALT_S LALT_T(KC_S)
#define SFT_D LSFT_T(KC_D)
#define CTL_F LCTL_T(KC_F)

// Right-hand home row mods
#define CTL_J RCTL_T(KC_J)
#define SFT_K RSFT_T(KC_K)
#define ALT_L RALT_T(KC_L)
#define GUI_SCLN RGUI_T(KC_SCLN)

// *******************************
// * More keycodes for HRM Layer *
// *******************************
#define CTLS_C C_S_T(KC_C) // tap: C ; hold: ctl and shift

// Keycodes using the LT(0,KC) trick
#define CTLH_T    LT(0, KC_T) // tap: t; hold: ctl and h
#define CTLR_R    LT(0, KC_R) // tap: r; hold: ctl and r
#define CTLG_G    LT(0, KC_G) // tap: G ; hold: ctl and g
#define LSFT_LLCK LT(0, KC_LSFT) // double tap: Layer lock ; hold: left shift
#define HM_SCLN   LT(0, KC_SCLN) // tap: ; ; hold: Home key
#define END_QUOT  LT(0, KC_QUOT) // tap: ' ; hold: End key
#define ALFT_COMM LT(0, KC_COMM) // tap: , ; hold: alt and left arrow
#define ARGT_DOT  LT(0, KC_DOT) // tap: . ; hold: alt and right arrow
#define MY_ENT    LT(0, KC_ENT) // tap: Enter ; hold: Shift

#define MO_CAPS   TD(TD_MO_CAPS)
#define MO_RALT   TD(TD_RALT)
#define MY_GRV    TD(TD_GRV)

// *************
// * Shortcuts *
// *************
#define MY_UNDO   C(KC_Z)
#define MY_CUT    C(KC_X)
#define MY_COPY   C(KC_INS)
#define MY_PASTE  S(KC_INS)
#define MY_TASK   LCTL(LSFT(KC_ESC))
#define MY_CONS   LCTL(LSFT(KC_GRV))
#define MY_BACK   A(KC_LEFT)
#define MY_FWD    A(KC_RIGHT)
#define MSW_UP    KC_MS_WH_UP
#define MSW_DN    KC_MS_WH_DOWN

// ***********
// * Toggles *
// ***********
#define TG_NUM    TG(NUM_LYR)
#define TG_EXT    TG(EXT_LYR)
#define TG_KBCTL  TG(KBCTL_LYR)
#define TG_MEDIA  TG(MEDIA_LYR)
#define MO_KBCTL  MO(KBCTL_LYR)
#define MO_EXT    MO(EXT_LYR)
#define TD_KB_RST TD(TD_RESET)
#define TD_KB_CLR TD(TD_CLEAR)

// by default, use a regular key layout without home row mods
// the KB_CTL_LYR can toggle the home row mod enabled layer
#define TG_HRM TG(HRM_BASE_LYR)
