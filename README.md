CSDL Module
----------

This project wraps SDL2 for Swift projects.

The focus of this project is on basic 2D windowing graphics, for now.

It will look for the SDL files in /usr/local/ by default, for now.

The SDL files were installed with these commands:

    ./configure --prefix=/usr/local/
    make
    sudo make install

Dependencies: [SDL2](https://www.libsdl.org/download-2.0.php) and
[SDL2_ttf](https://www.libsdl.org/projects/SDL_ttf/).

License
-------

See the [LICENSE](LICENSE.txt) file.
