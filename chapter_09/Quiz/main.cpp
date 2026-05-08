#include <iostream>
#include <limits>
#include "Random.h"

// Clear input characters, stopping at newline
void ignoreLine()
{
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
}

// Get input to play again or quit
bool playAgain()
{
    while (true)
    {
        char input{};
        std::cout << "Would you like to play again (Y/n)? ";
        std::cin >> input;

        if (!std::cin)
        {
            // Extraction failed
            std::cin.clear();
            ignoreLine();
            std::cout << "Invalid input. Please try again.\n";
            continue;
        }

        ignoreLine();
        switch (input)
        {
        case 'y':
        case 'Y':
            return true;
        case 'n':
        case 'N':
            return false;
        default:
            std::cout << "Invalid input. Please try again.\n";
        }
    }
}

// Get guess input from the player
int getGuess(int guess_counter, int min, int max)
{
    while (true)
    {
        std::cout << "Guess #" << guess_counter << ": ";
        int guess{};
        std::cin >> guess;

        if (!std::cin)
        {
            // Integer extraction failed
            std::cin.clear();
            ignoreLine();
            std::cout << "Invalid input. Please enter an integer in range [" << min << ", " << max << "].\n";
            continue;
        }

        if (guess < min || guess > max)
        {
            ignoreLine();
            std::cout << "Invalid input. " << guess << " is out of range [" << min << ", " << max << "].\n";
            continue;
        }

        ignoreLine();
        return guess;
    }
}

void hiLo(int min, int max, int guesses) 
{
    std::cout << "Let's play a game. I'm thinking of a number between " << min;
    std::cout << " and " << max << ". You have " << guesses << " tries to guess what it is.\n";

    // Secret random value in [min, max]
    int value{ Random::get(min, max) };

    for (int i{ 1 }; i <= guesses; ++i)
    {
        int guess { getGuess(i, min, max) };

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
