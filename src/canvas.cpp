#include <SDL2/SDL.h>
#include "engage.hpp"

Engage::Canvas::Canvas(int width, int height)
{
    this->width_ = width;
    this->height_ = height;
    this->texture_ = SDL_CreateTexture(
        Window::GetInstance()->GetRenderer(), SDL_PIXELFORMAT_RGBA8888,
        SDL_TEXTUREACCESS_STATIC, width, height
    );
}

SDL_Texture *
Engage::Canvas::GetSDLTexture()
{
    return this->texture_;
}

void
Engage::Canvas::DrawPixel(int x, int y, Color color)
{
    
}