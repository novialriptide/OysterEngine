#include <stdio.h>
#include <SDL2/SDL.h>
#include "engage.hpp"

Engage::Canvas::Canvas()
{
    
}

Engage::Canvas::Canvas(int width, int height)
{
    this->width_ = width;
    this->height_ = height;
    this->surface_ =
        SDL_CreateRGBSurfaceWithFormat(0, width, height,
                                       32, SDL_PIXELFORMAT_RGBX8888);
    this->texture_ = NULL;
}

SDL_Surface *
Engage::Canvas::GetSDLSurface()
{
    return this->surface_;
}

SDL_Texture *
Engage::Canvas::GetSDLTexture()
{
    return this->texture_;
}

void
Engage::Canvas::DrawPixel(int x, int y, Color color)
{
    SDL_LockSurface(this->surface_);
    
    unsigned char *pixels = (unsigned char *)surface_->pixels;
    int pitch = surface_->pitch;
    unsigned int* row = (unsigned int*)(pixels + pitch * y);
    row[x] = 0xff0000ff; // 0xAABBGGRR

    SDL_UnlockSurface(surface_);
}