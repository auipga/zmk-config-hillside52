#define COMBO(KP, KEYPOS, NAME) \
    combo_##NAME { \
        timeout-ms = <40>; \
        key-positions = <KEYPOS>; \
        layers = <0>; \
        bindings = <&kp KP>; \
    };
