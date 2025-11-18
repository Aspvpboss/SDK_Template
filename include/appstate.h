#pragma once

#include "SDK1/SDK.h"
#include <math.h>





typedef struct{

    SDK_Display *display;
    SDK_Time *time;
    SDK_Input *input;
    SDK_TextDisplay *fps_text;

} Appstate;