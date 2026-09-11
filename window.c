
#include "window.h"


windowattr create_window(const int width, const int height, const char* title, const int fps) {
    const windowattr attr = {
        width, height, fps, title, false
    };
    InitWindow(width, height, title);
    SetTargetFPS(fps);
    return attr;
}
