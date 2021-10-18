
#include <vector>
#include "tui.hpp"
#include <iostream>
#include <stdlib.h>
#include <chrono>
#include <thread>
#include <random>

class Apples
{
    public:
        void spawnApples()
        {
            tui:: Window window;
            int x, y;
            srand(time(NULL));

            x = rand()%98 + 1; // makes random x number from 1-98
            y = rand()%29 + 1; // makes random y number from 1-29

            window.draw_char(x, y, '@'); //puts in an apple at a random spot in the board within the set.
            window.render();


        }

};
