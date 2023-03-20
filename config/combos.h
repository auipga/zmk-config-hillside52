#define COMBO(KEYPOS1, KEYPOS2, KP) \
    combo_##KEYPOS1##_##KEYPOS2 { \
        timeout-ms = <40>; \
        key-positions = <KEYPOS1 KEYPOS2>; \
        layers = <0>; \
        bindings = <&kp KP>; \
    };
