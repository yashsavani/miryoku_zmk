// Copyright 2022 Manna Harbour
// https://github.com/manna-harbour/miryoku
// generated -*- buffer-read-only: t -*-
// target: zmk

#pragma once

// &kp SQT,           &kp COMMA,         &kp DOT,           &kp P,             &kp Y,             &kp F,             &kp G,             &kp C,             &kp R,             &kp L,             \
// U_MT(LCTRL, A),    U_MT(LALT, O),     U_MT(LGUI, E),     U_MT(LSHFT, U),     &kp I,             &kp D,             U_MT(LSHFT, H),    U_MT(LGUI, T),     U_MT(LALT, N),     U_MT(LCTRL, S),     \

#define MIRYOKU_ALTERNATIVES_BASE_DVORAK \
U_MT(LCTRL, SQT),  U_MT(LALT, COMM),  U_MT(LGUI, DOT),   U_MT(LSHFT, P),     &kp Y,             &kp F,             U_MT(LSHFT, G),    U_MT(LGUI, C),     U_MT(LALT, R),     U_MT(LCTRL, L),     \
&kp A,             &kp O,             &kp E,             &kp U,             &kp I,             &kp D,             &kp H,             &kp T,             &kp N,             &kp S,             \
U_LT(U_BUTTON, SLASH),U_MT(RALT, Q),  &kp J,             &kp K,             &kp X,             &kp B,             &kp M,             &kp W,             U_MT(RGUI, V),     U_LT(U_BUTTON, Z),  \
U_NP,              U_NP,              U_LT(U_MEDIA, ESC),U_LT(U_NAV, SPACE),U_LT(U_MOUSE, TAB),U_LT(U_SYM, RET),  U_LT(U_NUM, BSPC),  U_LT(U_FUN, DEL),  U_NP,              U_NP

#define MIRYOKU_ALTERNATIVES_TAP_DVORAK \
&kp SQT,           &kp COMMA,         &kp DOT,           &kp P,             &kp Y,             &kp F,             &kp G,             &kp C,             &kp R,             &kp L,             \
&kp A,             &kp O,             &kp E,             &kp U,             &kp I,             &kp D,             &kp H,             &kp T,             &kp N,             &kp S,             \
&kp SLASH,         &kp Q,             &kp J,             &kp K,             &kp X,             &kp B,             &kp M,             &kp W,             &kp V,             &kp Z,             \
U_NP,              U_NP,              &kp ESC,           &kp SPACE,         &kp TAB,           &kp RET,           &kp BSPC,          &kp DEL,           U_NP,              U_NP

#define MIRYOKU_ALTERNATIVES_NAV_INVERTEDT \
&kp LCTRL,         &kp LALT,          &kp LGUI,          &kp LSHFT,         &kp PG_UP,         &kp INS,           &kp HOME,          &kp UP,            &kp END,           &kp RIGHT,         \
U_BOOT,            &u_to_U_TAP,       &u_to_U_EXTRA,     &u_to_U_BASE,      &kp PG_DN,         &u_caps_word,      &kp LEFT,          &kp DOWN,          &kp RIGHT,         U_NP,              \
U_NA,              &kp RALT,          &kp DOWN,          &kp UP,            &u_to_U_NAV,       U_RDO,             U_PST,             U_CPY,             U_CUT,             U_UND,             \
U_NP,              U_NP,              U_NA,              U_NA,              &u_to_U_NUM,       &kp RET,           &kp BSPC,          &kp DEL,           U_NP,              U_NP

#define MIRYOKU_ALTERNATIVES_MOUSE_INVERTEDT \
&kp LCTRL,         &kp LALT,          &kp LGUI,          &kp LSHFT,         U_NA,              U_NU,              U_WH_L,            U_MS_U,            U_WH_R,            U_WH_U,            \
U_BOOT,            &u_to_U_TAP,       &u_to_U_EXTRA,     &u_to_U_BASE,      U_NA,              U_NU,              U_MS_L,            U_MS_D,            U_MS_R,            U_WH_D,            \
U_NA,              &kp RALT,          &u_to_U_SYM,       &u_to_U_MOUSE,     U_NA,              U_RDO,             U_PST,             U_CPY,             U_CUT,             U_UND,             \
U_NP,              U_NP,              U_NA,              U_NA,              U_NA,              U_BTN2,            U_BTN1,            U_BTN3,            U_NP,              U_NP

#define MIRYOKU_ALTERNATIVES_MEDIA_INVERTEDT \
&kp LCTRL,         &kp LALT,          &kp LGUI,          &kp LSHFT,         U_NA,              U_RGB_TOG,         U_RGB_EFF,         &kp C_VOL_UP,      U_RGB_HUI,         U_RGB_SAI,         \
U_BOOT,            &u_to_U_TAP,       &u_to_U_EXTRA,     &u_to_U_BASE,      U_NA,              U_EP_TOG,          &kp C_PREV,        &kp C_VOL_DN,      &kp C_NEXT,        U_RGB_BRI,         \
U_NA,              &kp RALT,          &u_to_U_FUN,       &u_to_U_MEDIA,     U_NA,              &u_out_tog,        &u_bt_sel_0,       &u_bt_sel_1,       &u_bt_sel_2,       &u_bt_sel_3,       \
U_NP,              U_NP,              U_NA,              U_NA,              U_NA,              &kp C_STOP,        &kp C_PP,          &kp C_MUTE,        U_NP,              U_NP

#define MIRYOKU_ALTERNATIVES_NUM \
&kp LBKT,          &kp N7,            &kp N8,            &kp N9,            &kp RBKT,          U_NA,              &kp LSHFT,         &kp LGUI,          &kp LALT,          &kp LCTRL,         \
&kp SEMI,          &kp N4,            &kp N5,            &kp N6,            &kp EQUAL,         U_NA,              &u_to_U_BASE,      &u_to_U_EXTRA,     &u_to_U_TAP,       U_BOOT,            \
&kp GRAVE,         &kp N1,            &kp N2,            &kp N3,            &kp BSLH,          U_NA,              &u_to_U_NUM,       &u_to_U_NAV,       &kp RALT,          U_NA,              \
U_NP,              U_NP,              &kp DOT,           &kp N0,            &kp MINUS,         U_NA,              U_NA,              U_NA,              U_NP,              U_NP

#define MIRYOKU_ALTERNATIVES_SYM \
&kp LBRC,          &kp AMPS,          &kp ASTRK,         &kp LPAR,          &kp RBRC,          U_NA,              &kp LSHFT,         &kp LGUI,          &kp LALT,          &kp LCTRL,         \
&kp COLON,         &kp DLLR,          &kp PRCNT,         &kp CARET,         &kp PLUS,          U_NA,              &u_to_U_BASE,      &u_to_U_EXTRA,     &u_to_U_TAP,       U_BOOT,            \
&kp TILDE,         &kp EXCL,          &kp AT,            &kp HASH,          &kp PIPE,          U_NA,              &u_to_U_SYM,       &u_to_U_MOUSE,     &kp RALT,          U_NA,              \
U_NP,              U_NP,              &kp LPAR,          &kp RPAR,          &kp UNDER,         U_NA,              U_NA,              U_NA,              U_NP,              U_NP

#define MIRYOKU_ALTERNATIVES_FUN \
&kp F12,           &kp F7,            &kp F8,            &kp F9,            &kp PSCRN,         U_NA,              &kp LSHFT,         &kp LGUI,          &kp LALT,          &kp LCTRL,         \
&kp F11,           &kp F4,            &kp F5,            &kp F6,            &kp SLCK,          U_NA,              &u_to_U_BASE,      &u_to_U_EXTRA,     &u_to_U_TAP,       U_BOOT,            \
&kp F10,           &kp F1,            &kp F2,            &kp F3,            &kp PAUSE_BREAK,   U_NA,              &u_to_U_FUN,       &u_to_U_MEDIA,     &kp RALT,          U_NA,              \
U_NP,              U_NP,              &kp K_APP,         &kp SPACE,         &kp TAB,           U_NA,              U_NA,              U_NA,              U_NP,              U_NP


#define MIRYOKU_ALTERNATIVES_BUTTON \
&kp LCTRL,         &kp LALT,          &kp LGUI,          &kp LSHFT,         U_RDO,             U_RDO,             &kp LSHFT,         &kp LGUI,          &kp LALT,          &kp LCTRL,         \
U_UND,             U_CUT,             U_CPY,             U_PST,             U_NU,              U_NU,              U_PST,             U_CPY,             U_CUT,             U_UND,             \
U_UND,             U_CUT,             U_CPY,             U_PST,             U_RDO,             U_RDO,             U_PST,             U_CPY,             U_CUT,             U_UND,             \
U_NP,              U_NP,              U_BTN3,            U_BTN1,            U_BTN2,            U_BTN2,            U_BTN1,            U_BTN3,            U_NP,              U_NP
