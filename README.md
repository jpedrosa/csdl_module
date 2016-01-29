CSDL Module
----------

This project wraps SDL2 for Swift projects.

The focus of this project is on basic 2D windowing graphics, for now.

It will look for the SDL files in /usr/local/ by default.

The SDL files were installed with these commands:

    ./configure --prefix=/usr/local/
    make
    sudo make install

Dependencies: [SDL2](https://www.libsdl.org/download-2.0.php) and
[SDL2_ttf](https://www.libsdl.org/projects/SDL_ttf/).

Some previous work can be found here: https://github.com/jaz303/CSDL2.swift

For the SDL libraries to be found you may have to set up the following
environment variable:

    export LD_LIBRARY_PATH=/usr/local/lib/

License
-------

See the [LICENSE](LICENSE.txt) file.
