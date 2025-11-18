#include "render.h"


int render(Appstate *state){

    SDK_Display *display = state->display;

    SDL_RenderClear(display->renderer);

    SDK_Text_Render(state->fps_text);

    SDL_RenderPresent(display->renderer);

    return 0;
}