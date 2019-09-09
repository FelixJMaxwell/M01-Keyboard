
#define DEVICE_VER      0x0001
#define MANUFACTURER    thefallingboy
#define PRODUCT         M01
#define DESCRIPTION     A QMK-powered custom keyboard

/* key matrix size */
#define MATRIX_ROWS 5
#define MATRIX_COLS 13

/*
 * Keyboard Matrix Assignments
 *
 * Change this to how you wired your keyboard
 * COLS: AVR pins used for columns, left to right
 * ROWS: AVR pins used for rows, top to bottom
 * DIODE_DIRECTION: COL2ROW = COL = Anode (+), ROW = Cathode (-, marked on diode)
 *                  ROW2COL = ROW = Anode (+), COL = Cathode (-, marked on diode)
 *
 */
#define MATRIX_ROW_PINS { D3, D2, D1, D0, D4 }
#define MATRIX_COL_PINS { C6, D7, E6, B4, B5, B6, B2, B3, B1, F7, F6, F5, F4 }

#define DIODE_DIRECTION COL2ROW


// generated by KBFirmware JSON to QMK Parser
// https://noroadsleft.github.io/kbf_qmk_converter/