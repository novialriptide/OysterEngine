all:
	g++ -I include -L lib -o bin/main src/main.cpp \
	src/window.cpp src/canvas.cpp src/color.cpp \
	-l mingw32 -l SDL2main -l SDL2
