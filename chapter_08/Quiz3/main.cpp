#include "Random.h"
#include <iostream>

// Get input to play again or quit
bool playAgain()
{
    char input{};
    
    while (input != 'y' && input != 'n')
    {
        std::cout << "Would you like to play again (y/n)? ";
        std::cin >> input;
    }

    if (input == 'y')
    {
        return true;
    }

    return false;
}

// Get guess input from the player
int getGuess(int guess_counter)
{
    std::cout << "Guess #" << guess_counter << ": ";
    int guess{};
    std::cin >> guess;
    return guess;
}

void hiLo(int min, int max, int guesses) 
{
    std::cout << "Let's play a game. I'm thinking of a number between " << min;
    std::cout << " and " << max << " You have " << guesses << " tries to guess what it is.\n";

    // Secret random value in [min, max]
    int value{ Random::get(min, max) };

    for (int i{ 1 }; i <= guesses; ++i)
    {
        int guess { getGuess(i) };

        if (guess == value)
        {
            std::cout << "Correct! You win!\n";
            return;
        }
        if (guess < value)
        {
            std::cout << "Your guess is too low.\n";
        }
        else 
        {
            std::cout << "Your guess is too high.\n";
        }
    }

    std::cout << "Sorry, you lose. The correct number was " << value << ".\n"; 
}

int main()
{
    constexpr int min{ 1 };
    constexpr int max{ 100 };
    constexpr int guesses{ 7 };


    bool play{ true };
    while (play)
    {
        hiLo(min, max, guesses);
        play = playAgain();
    }

    std::cout << "Thank you for playing.\n";

    return 0;
}
