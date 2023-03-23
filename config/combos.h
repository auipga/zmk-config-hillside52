#define COMBO(KEYPOS1, KEYPOS2, KP) \
    combo_##KEYPOS1##_##KEYPOS2 { \
        timeout-ms = <40>; \
        key-positions = <KEYPOS1 KEYPOS2>; \
        layers = <DVORAK_L DK_HRM_L NUM_L>; \
        bindings = <&kp KP>; \
    };
