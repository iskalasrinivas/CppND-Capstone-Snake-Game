# CPPND: Capstone Snake Game Example

This is a submission for the Udacity C++ NanoDegree Capstone Project. It started with Udacity's starter code - which  was inspired by [this](https://codereview.stackexchange.com/questions/212296/snake-game-in-c-with-sdl) excellent StackOverflow post and set of responses.

Following modifications were made to Udacity Game repo:
1. The edges are not hard boundaries rather they are connect back to the other edge of the screen. If the path of the snake is blocked on the other edge of the screen Game Over shows up.
2. Gave autonomy to the snake when path is blocked default action is left.
3. Snake Length increases with consumption of its prey but not speed of snake


Rubric Points:
Functions Control Loops:
The project code is organized into classes
Project accept user inputs and the inputs are used to control the snake.
Refer Renderer.cpp and Snake.cpp

Object Oriented Programming:
The project is organized into classes with  attributes and  methods.
The data members are specified as public, protected, or private.
Refer Renderer.cpp and Snake.cpp

Concurrency
The project doesn't use any concurrency.


## Dependencies for Running Locally
* cmake >= 3.7
  * All OSes: [click here for installation instructions](https://cmake.org/install/)
* make >= 4.1 (Linux, Mac), 3.81 (Windows)
  * Linux: make is installed by default on most Linux distros
* SDL2 >= 2.0
  * All installation instructions can be found [here](https://wiki.libsdl.org/Installation)
  * Note that for Linux, an `apt` or `apt-get` installation is preferred to building from source.
* gcc/g++ >= 5.4
  * Linux: gcc / g++ is installed by default on most Linux distros

## Basic Build Instructions

1. Clone this repo.
2. Make a build directory in the top level directory: `mkdir build && cd build`
3. Compile: `cmake .. && make`
4. Run it: `./SnakeGame`.
