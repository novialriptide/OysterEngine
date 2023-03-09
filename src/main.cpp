#include "engage.hpp"
#include <iostream>

int main(int argc, char **argv)
{
    Engage::Window window = Engage::Window(640, 640, "Lmao");
    Engage::Canvas canvas = Engage::Canvas(200, 200);

    while(1)
    {
        Engage::Canvas *window_canvas = window.GetCanvas();
        Engage::Canvas *window_canvas2 = window.GetCanvas();
        printf("%p\n", (void*)&window_canvas);
        printf("%p\n", (void*)&window_canvas2);
        window_canvas->DrawPixel(200, 200, Engage::Color(0, 255, 255, 255));
        window.Update();
    }
}
