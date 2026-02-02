default: run

build:
    mkdir build -p
    gcc main.c -o ./build/suplente -Wall

run: build
    ./build/suplente
