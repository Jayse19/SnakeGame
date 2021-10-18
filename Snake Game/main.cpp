#include "tui.hpp"
#include <chrono>
#include <thread>
#include "Board.h"
#include <cassert>
#include <iostream>
#include "Instructions.h"
#include "Apples.h"


using namespace std::chrono_literals;

int main() 
{
    Instructions instructions;
    instructions.gameInstructions();
    
    Board myBoard;
    myBoard.createBoard();

    Apples newApple;
    newApple.spawnApples();

    Snake snakes;
    snakes.snake();
    return 0; 
}  