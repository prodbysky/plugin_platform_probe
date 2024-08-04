# Plug-in platform experiment
This is an experiment conducted by me, in which
I wanted to make a proof of concept for a plug-in
architecture for making games

## Example
The example in main.c is a simple top-down movement example

## Structure
There is a single header file (platform_def.h) that should be included by the main.c (or its equivalent)
In which you call the functions provided (if a function is platform specific and its equivalent
does not exist in platform_def.h then you can't call it until you implement such function for
every single available platform. The implementation file should be compiled to a object file
which should be linked into main.c (the build script can differ for each platform (see Makefile))

## Notes
The way I handled events is kind of weird and probably not the best way I could have done,
this is a silly one-of experiment so I didn't think much about event handling

This project expects that raylib and SDL2 are installed system wide.

## Current platforms
 - Raylib
 - SDL2

## TODO

### More examples

### Platforms (If I want to expand on this experiment)
 - Web
 - X11
 - WinApi
 - OpenGL (raw function calls, no helpers)
 - DX11 (raw function calls, no helpers)
 - Vulkan (raw function calls, no helpers)
 - Terminal
 - Olive.c (This of course would require a graphics library to display the state)
