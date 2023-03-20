#define COMBO(KP, KEYPOS1, KEYPOS2) \
    combo_##KEYPOS1_##KEYPOS2 { \
        timeout-ms = <40>; \
        key-positions = <KEYPOS1 KEYPOS2>; \
        layers = <0>; \
        bindings = <&kp KP>; \
    };
