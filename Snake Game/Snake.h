
#include <vector>
#include "tui.hpp"
#include <iostream>
#include <stdlib.h>
#include <chrono>
#include <thread>

using namespace std::chrono_literals;

class Snake
{
    public:
        void snake()
        {
            tui::Window window;
            bool quit = false; //Initiallizing the game
            tui::Event event;
            tui:: Paragraph p;
            int row = 10, row2 = 10; //making all the rows and cols. row and col 2 are for person 2
            int col = 35, col2 = 70;
            int next_row = 0, next_row2 = 0; // this will start the movement process
            int next_col = 0, next_col2 = 0;
            while(!quit) {
                window.draw_char(col, row, ' '); // the game board will be started with blanks
                window.draw_char(col2, row2, ' ');
                row += next_row; // this moves the character rows        
                col += next_col;  // this moves the character cols
                // same as above but for char two
                row2 += next_row2;        
                col2 += next_col2; 
                // winning conditions for each player. Checking the boundaries 
                if (row == 0 || row == 30 || col == 0 || col == 99)
                {
                    std:: cout<<"Player1 died, Player2 wins";
                    quit = true;
                }
                if (row2 == 0 || row2 == 30 || col2 == 0 || col2 == 98)
                {
                    std:: cout<<"Player2 died, Player1 wins";
                    quit = true;
                }
                //This was my attempted to start storing the snake in a vector
                std:: vector<char> snakeOne = {'$'};    //character 1
                // this draws the head of the snake and since its the first element, it'll grab the last since if you add new items it'll be pushed to the beginning
                window.draw_char(col, row, snakeOne[snakeOne.size()-1]);

                //if(snakeOne[snakeOne.size()-1]) // this was going to be my attempt to say that if the head encounters an apple, it'll append to the vector and "grow" the snake

                window.draw_char(col2, row2, '0');   // makes character 2     
                window.render(); 
                //how to get to the keys using tui       
                if(window.poll_event(event)) {            
                    if(event.type == tui::KEYDOWN) {                
                        switch (event.key) {  
                            //moves character1 to the left                  
                            case KEY_LEFT: 
                                next_col = -1;                        
                                next_row = 0;                        
                                break;
                             //moves charcter1 up with the arrow keys                   
                            case KEY_UP:
                                next_col = 0;                        
                                next_row = -1; 
                                break;   

                                //moves character1 to the right                                      
                            case KEY_RIGHT:   

                                next_col = 1;                        
                                next_row = 0; 
                                break; 
                                //moves the character down with the arrow keys                                         
                            case KEY_DOWN:
                                next_col = 0;                        
                                next_row = 1;
                                break; 
                                //moves character 2 to the left with a 
                            case 'a':
                            case 'A': //A
                                next_col2 = -1;                        
                                next_row2 = 0;                        
                                break;
                            //moves only character 2 up with w                    
                            case 'w': //W
                                next_col2 = 0;                        
                                next_row2 = -1; 
                                break; 
                                //moves character 2 to the right with d                                        
                            case 'd': //D

                                next_col2 = 1;                        
                                next_row2 = 0; 
                                break;                                 
                                //moves character 2 down with s         
                            case 's':  //S
                                next_col2 = 0;                        
                                next_row2 = 1;
                                break;                         
                                //quits the game if you type q                     
                            case 'q':                        
                                quit = true;                        
                                break;                
                        }            
                    }       
                }

                //refreshes the screen every 75ms so you can see the snake move
                std:: this_thread::sleep_for(75ms);           
            }
        } 
        
};
