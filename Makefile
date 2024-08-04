main_raylib: examples/top_down.c raylib_platform
	clang examples/top_down.c -o top_down raylib_platform.o -l raylib

main_sdl2: examples/top_down.c sdl2_platform
	clang examples/top_down.c -o top_down sdl2_platform.o `sdl2-config --cflags --libs`

raylib_platform: platform/raylib_platform.c 
	clang platform/raylib_platform.c -c -o raylib_platform.o

sdl2_platform: platform/sdl2_platform.c 
	clang platform/sdl2_platform.c -c -o sdl2_platform.o 

clean:
	rm *.o
