all: build

build:
	gcc -std=c99 welcome.c -o welcome `pkg-config --libs --cflags raylib`

run:
	./welcome

.PHONY: build