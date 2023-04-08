// menus: needs arrows, ent, esc
/*l*/#define P_STRPOP  &kp LA(M)            // string manipulation popup
/*l*/#define P_DIFPOP  &kp LC(LS(D))        // popup: most commonly used diff commands in differences-viewer

// one action
/*l*/#define P_undo    &kp LA(   BSPC )     // Edit: Undo
/*l*/#define P_redo    &kp LA(LS(BSPC))     // Edit: Redo
/*l*/#define P_LOCPRV  &kp LC(LS(PG_UP))    // Navigate: Last Edit Location (custom, else C(S(BSPC)))
/*l*/#define P_LOCNXW  &kp LC(LS(PG_DN))    // Navigate: Next Edit Location (custom)
/*l*/#define P_ACTION  &kp LC(LS(A))        // Find action...
/*l*/#define P_CLPCMP  &kp LA(LS(D))        // compare with clipboard
/*l*/#define P_DUPLIC  &kp LC(D)            // duplicate line/selection
/*l*/#define P_COMPAR  &kp LC(D)            // compare
/*l*/#define P_DEL_L   &kp LC(DE_Y)         // delete line
/*_*/#define P_INTENT  &kp LC(LA(I))        // intent
/*_*/#define P_REFORM  &kp LC(LA(L))        // reformat
/*_*/#define P_CAR_UP  &kp LC(LA(PG_UP))    // clone caret above
/*_*/#define P_CAR_DN  &kp LC(LA(PG_DN))    // clone caret above
/*r*/#define P_F_STRK  &kp LC(F12)          // File structure popup :D
/*r*/#define P_TEMPL   &kp LC(J)            // Insert live template (awesome!!!), postfix completion (awesome!)

/*_*/#define P_RENAME  &kp LS(F6)           // Rename selected file, function, variable,...
/*_*/#define P_DECLAR  &kp LC(B)            // Goto declaration or usages
/*_*/#define P_PARAMS  &kp LC(P)            // Parameter popup (shiftable)
/*_*/#define P_Q_DOC   &kp LC(Q)            // Quick documentation
/*_*/#define P_Q_DEF   &kp LC(LS(I))        // Quick definition

// Tool windows
#define P_W_GIT    &kp LA(N9)         // GIT
#define P_W_TERM   &kp LA(F12)        // Terminal

// viel mit arrows danach
/*l*/#define P_COLAPS  &kp LC(KP_MINUS)     // collapse block        (+alt recursive, +LS=all)
/*l*/#define P_EXPAND  &kp LC(KP_PLUS)      // expand block          (+alt recursive, +LS=all)
/*l*/#define P_FOLD    &kp LC(DE_DOT)       // Fold selection

// shiftable
/*l*/#define P_RECENT  &kp LC(E)            // recent files + recent locations
/*l*/#define P_RCNT_F  &kp LC(E)            // recent files
/*l*/#define P_RCNT_L  &kp LS(LC(E))        // recent locations
/*l*/#define P_SELOCC  &kp LA(J)            // select next occurance (+LC+LS=all, auch von der Suche aus)
/*l*/#define P_SELOC_  &kp LS(LA(J))        // unselect last occurance
/*l*/#define P_NEXT    &kp F3               // next occurance (of search or current selection)
/*l*/#define P_PREV    &kp LS(F3)           // prev occurance (of search or current selection)
/*_*/#define P_SELMOR  &kp LC(W)            // extend selection
/*_*/#define P_SELMO_  &kp LS(LC(W))        // shrink selection
/*l*/#define P_NEXT    &kp F3               // next occurance (of search or current selection) + previous
/*_*/#define P_EXT_S   &kp LC(W)            // extend selection + shrink
/*r*/#define P_NAVIGT  &kp LC(N)            // Navigate Classes + Files

/*_*/#define P_BOKMRK  &kp F11              // toggle bookmark + show all (+LC=mnemonic)
/*l*/#define P_COMENT  &kp LC(DE_HASH)      // comment current line + selection (custom shortcut, default is with "/")
/*l*/#define P_CMNT_B  &kp LS(LC(DE_HASH))  // block comment selection
/*r*/#define P_FIND    &kp u_FIND           // find
/*r*/#define P_FINDA   &kp LS(u_FIND)       // find overall
/*r*/#define P_REPLAC  &kp LC(R)            // replace + overall
/*r*/#define P_REPLAA  &kp LS(LC(R))        // replace overall

/*l*/#define P_REFACT  &kp LC(LA(LS(T)))    // Refactor this
//#define P_IN_VAR  &kp LC(LA(V))             // Introduce variable
//#define P_IN_PAR  &kp LC(LA(P))             // Introduce parameter
//#define P_IN_CON  &kp LC(LA(C))             // Introduce constant
//#define P_IN_FLD  &kp LC(LA(F))             // Introduce field
//#define P_SURRWI  &kp LC(LA(M))             // Extract method
/*_*/#define P_SURRWI  &kp LA(KP_N0)        // surround with, LC(LA(T))

// git
/*_*/#define P_GITPOP  &kp LA(DE_PLUS)      // VCS Actions Popup

// Comparison window
/*_*/#define P_CMPNXT  &kp LA(LS(RIGHT))    // Compare next file
/*_*/#define P_CMPPRV  &kp LA(LS(LEFT))     // Compare previous file
/*_*/#define P_DIFNXT  &kp F7               // Go to next difference
/*_*/#define P_DIFPRV  &kp LS(F7)           // Go to previous difference


