#include "engage.hpp"

int main(int argc, char **argv)
{
    Engage::Window window = Engage::Window(640, 640, "Lmao");
    Engage::Canvas canvas = Engage::Canvas(200, 200);
    Engage::Canvas *window_canvas;

    while(1)
    {
        window_canvas = window.GetCanvas();
        window_canvas->DrawPixel(2, 2, Engage::Color(0, 0, 0));
    }
}
