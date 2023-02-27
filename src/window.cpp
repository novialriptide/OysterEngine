#include <SDL2/SDL.h>
#include "engage.hpp"

Engage::Window *window_instance;

Engage::Window::Window(int width, int height, const char *title)
{
    this->width_ = width;
    this->height_ = height;
    this->window_ = SDL_CreateWindow(title,
                               SDL_WINDOWPOS_UNDEFINED,
                               SDL_WINDOWPOS_UNDEFINED, width, height,
                               SDL_WINDOW_SHOWN);
    this->renderer_ = SDL_CreateRenderer(window_, -1,
                                   SDL_RENDERER_ACCELERATED);
    this->instance_ = this;
}

Engage::Window *
Engage::Window::GetInstance()
{
    return window_instance;
}

SDL_Window *
Engage::Window::GetWindow()
{
    return this->window_;
}

SDL_Renderer *
Engage::Window::GetRenderer()
{
    return this->renderer_;
}

Engage::Canvas *
Engage::Window::GetCanvas()
{
    return this->canvas_;
}

void
Engage::Window::Update()
{
    SDL_Texture *texture = this->GetCanvas()->GetSDLTexture();
    SDL_RenderCopy(this->GetRenderer(), texture, NULL, NULL);
    SDL_RenderPresent(window_instance->GetRenderer());
}