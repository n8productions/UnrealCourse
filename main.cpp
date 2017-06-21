//
//  main.cpp
//  ClicheNet
//
//  Created by Nathan on 2017-06-18.
//  Copyright © 2017 Nathan. All rights reserved.
//

#include <iostream>
#include <string>
#include "FBullCowGame.hpp"

void PrintIntro();
void PlayGame();
std::string GetGuess();
bool AskToPlayAgain();

FBullCowGame BCGame; //create a new game instance

// the entry point for our application
int main()
{
    bool bPlayAgain = false;
    do {
        PrintIntro();
        PlayGame();
        bPlayAgain = AskToPlayAgain();
    }
    while (bPlayAgain);
    
    return 0; // exit the application
}

// introduce the game
void PrintIntro()
{
    constexpr int WORD_LENGTH = 5;
    std::cout << "Welcome to ClicheNet.\n";
    std::cout << "Guess the " << WORD_LENGTH;
    std::cout << " letter password using the clues.\n";
    std::cout << std::endl;
    return;
}

void PlayGame()
{
    int MaxTries = BCGame.GetMaxTries();
    
    // loop for the number of turns asking for guesses
    for (int count = 1; count <= MaxTries; count++) {
        std::string Guess = GetGuess();
        std::cout << std::endl;
    }
}

std::string GetGuess()
{
    int CurrentTry = BCGame.GetCurrentTry();
    
    // get a guess from the player
    std::cout << "Try " << CurrentTry << ": ";
    std::string Guess = "";
    std::getline(std::cin, Guess);
    return Guess;
    
}

bool AskToPlayAgain()
{
    std::cout << "Do you want to try again? (y/n) ";
    std::string Response = "";
    getline(std::cin, Response);
    return (Response[0] == 'y') || (Response[0] == 'Y');
}
