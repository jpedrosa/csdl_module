
Compile it with a command like this one:

    gcc -I /usr/local/include/SDL2/ poke.c -L /usr/local/lib/ -lSDL2 -lSDL2_ttf

This is just a template example used for testing SDL a bit from C and for
extracting constants from it for Swift.

Before running the output program, you may have to add the SDL to your library
path with a command like this one:

    export LD_LIBRARY_PATH=/usr/local/lib/
