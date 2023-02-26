#include <SDL2/SDL.h>

namespace Engage
{
    class Color
    {
    public:
        uint8_t r, g, b, a;
        Color(uint8_t r, uint8_t g, uint8_t b);
        Color(uint8_t r, uint8_t g, uint8_t b, uint8_t a);
    };

    class Canvas
    {
    public:
        Canvas(int width, int height);

        SDL_Texture *GetSDLTexture();

        void DrawPixel(int x, int y, Color color);

    private:
        int width_, height_;
        SDL_Texture *texture_;
    };

    class Window
    {
    public:
        Window(int width, int height, const char *title);
        SDL_Window *GetWindow();
        SDL_Renderer *GetRenderer();
        Canvas *GetCanvas();
        void Update();

    private:
        SDL_Window *window_;
        SDL_Renderer *renderer_;
        int width_, height_;
        Engage::Canvas *canvas_;
    };

    Window *window_instance = NULL;
}