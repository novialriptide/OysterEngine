#include <SDL2/SDL.h>

namespace Engage
{
    class Color
    {
    public:
        Color(uint8_t r, uint8_t g, uint8_t b);
        Color(uint8_t r, uint8_t g, uint8_t b, uint8_t a);
        uint8_t r, g, b, a;
    };

    class Canvas
    {
    public:
        Canvas();
        Canvas(int width, int height);

        SDL_Surface *GetSDLSurface();
        SDL_Texture *GetSDLTexture();

        void DrawPixel(int x, int y, Color color);

    private:
        int width_, height_;
        SDL_Surface *surface_;
        SDL_Texture *texture_;
    };

    class Window
    {
    public:
        Window(int width, int height, const char *title);
        static Window &GetInstance();
        SDL_Window *GetWindow();
        SDL_Renderer *GetRenderer();
        Canvas *GetCanvas();
        void Update();

    private:
        SDL_Window *window_;
        SDL_Renderer *renderer_;
        int width_, height_;
        Engage::Canvas *canvas_;
        Window *instance_;
    };
    
    static Window *window_instance;
}