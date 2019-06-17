#define X_uST   64
#define Y_uST   64
#define Z_uST   64
#define E0_uST  64

#define X_degStepper    0.9
#define Y_degStepper    0.9
#define Z_degStepper    1.8
#define E0_degStepper   0.9

#define X_pitch_belt    2
#define X_teeth       16
#define Y_pitch_belt    2
#define Y_teeth       16
#define Z_pitch_Thread    8
#define E0_diam     10

#define PI 3.1415926535897932384626433832795028841971693993751058

#define X_St_per_U  (360/X_degStepper*X_uST)/(X_pitch_belt*X_teeth)
#define Y_St_per_U  (360/Y_degStepper*Y_uST)/(Y_pitch_belt*Y_teeth)
#define Z_St_per_U  360/Z_degStepper*Z_uST/Z_pitch_Thread
#define E0_St_per_U  (360/E0_degStepper*E0_uST)/(E0_diam*PI)
