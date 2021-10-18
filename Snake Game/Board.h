#include "Snake.h"
#include <vector>
#include "tui.hpp"
#include <iostream>
#include <stdlib.h>
#include <chrono>
#include <thread>
#include <random>


class Board
{
    private:
        std::vector<Snake> snakes;
    public: 
    //these are all public variables that were gonna go with the commeneted out code
        int width = 98; 
        int height = 29;
        int x = width/2;
        int y = height/2;
        int fruitX = rand()%width;
        int fruitY = rand()%height;
        int ntail;
        int tailx[100], taily[100];

    void createBoard()
    { 
        //this makes the edges of the board with the col at 100 long and row 30 tall 
        tui::Paragraph p;
        tui::Window window;

        p.set_dimensions(0, 0, 100, 30);
        window.add(p);

        //Below was my attempt to recognize cells so that I can make more apples
        // for (int i = 0; i<height; i++)
        // {
        //     for (int j = 0; j< width; j++)
        //     {
        //         if(i == y&&j == x)
        //         {
        //             std:: cout << "O";
        //         }
        //         else if(i == fruitY && j == fruitX)
        //         {
        //             std:: cout<< "@";
        //         }
        //         else
        //         {
        //             bool print = false;
        //             for(int k = 0; k<ntail;k++)
        //             {
        //                 if(tailx[k] == j&& taily[k] == i)
        //                 {
        //                     std::cout<<"o";
        //                     print = true;
        //                 }
        //             }
        //             if(!print)
        //             {
        //                 std:: cout<< " ";
        //             }
        //         }
        //     }
        // }
    }




};
