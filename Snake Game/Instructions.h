

#include <iostream>

class Instructions
{
    public:
        void gameInstructions()
        {
            
            bool game;
            char userInput;
            while (!game)
            {
                std:: cout << "Hello and welcome to the Two Player Snake Game! \n"
                           << "In this game, the person who survives the longest wins!\n"
                           << "Player 1 is controlled by the arrow keys (which is how you move) \n"
                           << "Player 2 is controlled by wasd (this is how you move) \n"
                           << "Player 1 is a '$' and Player 2 is a '0' \n"
                           << "Eat Apples ('@') to grow bigger!\n"
                           << "While in the game, you can press 'q' to quit out at anytime"
                           << "Press P then Enter to play the game!\n";
                std:: cin>> userInput; 

                if (userInput == 'p' || 'P')
                {
                    game = true; //will move the user to the game
                }
                else
                {
                    game = false; //will repeat instructions until the right button is clicked
                }
                
            }
        }
};
