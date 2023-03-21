/*
 * Aliases for outer keys
*/

// Left Outer Pinky
#define LOP_1   &kp ESC
#define LOP_2   &kp LSHFT
#define LOP_3   &kp LCTRL

// Right Outer Pinky (1 and 2 are already defined by the keymap)
//#define ROP_1   &kp BSPC
//#define ROP_2   &kp ENTER
#define ROP_3   &kp RSHFT


// Left Arrow Area
#define LAR_1   &kp C_MUTE
#define LAR_2   &kp ESC     // ✔
#define LAR_3   &kp K_PP

// Right Arrow Area ✔
#define RAR_0   &kp UP    // ✔
#define RAR_1   &kp LEFT  // ✔
#define RAR_2   &kp DOWN  // ✔
#define RAR_3   &kp RIGHT // ✔


// Left Thumb Keys
#define LTK_1    TAB   //
#define LTK_2    SPACE // ✔
#define LTK_3    ESC   // LALT
//#define LTK_4    L_ENC ✔ LGUI
#define LTK_2_1  DE_Z

// Right Thumb Keys
#define RTK_1    RET  // ✔
#define RTK_2    BSPC // ✔
#define RTK_3    DEL  // ✔
//#define RTK_4    R_ENC ✔
#define RTK_2_1  DE_FSLH


//----------------------------------------------------------------
#define LT_1    &kp    LTK_1
#define LT_2    &lt NAV_L LTK_2
#define LT_3    &kp    LTK_3
#define LT_4    &none   // ENC   LTK_4
#define LT_2_1  &kp    LTK_2_1
//
#define RT_1    &kp    RTK_1
#define RT_2    &lt SYM_L RTK_2
#define RT_3    &kp    RTK_3
#define RT_4    &none   // ENC   RTK_4
#define RT_2_1  &kp    RTK_2_1
