#ifndef RENDERER_H
#define RENDERER_H

#include <vector>
#include "SDL.h"
#include "snake.h"

class Renderer {
 public:
     enum class Orientation { Up, Down, Left, Right };

  Renderer(const std::size_t screen_width, const std::size_t screen_height,
           const std::size_t grid_width, const std::size_t grid_height);
  ~Renderer();

  void Render(Snake const snake, SDL_Point const &food);
  void RenderBody(Snake const snake, SDL_Rect &block);
  void UpdateWindowTitle(int score, int fps);
  void RenderBlock(Orientation, int, int, SDL_Rect& block);
  Orientation Direction(int xpos1, int ypos1, int xpos2, int ypos2);
  Orientation Direction(SDL_Point, SDL_Point);

 private:
  SDL_Window *sdl_window;
  SDL_Renderer *sdl_renderer;

  const std::size_t screen_width;
  const std::size_t screen_height;
  const std::size_t grid_width;
  const std::size_t grid_height;
};

#endif