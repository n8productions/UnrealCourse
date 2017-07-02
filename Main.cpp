/* This is the console executable, that makes use of the BullCow class
This acts as the view in a MVC pattern, and is responsible for all
user interaction. For game logic see the FBullCowGame class. */



#include <iostream>
#include  <string>
#include "FBullCowGame.h"

using FText = std::string;
using int32 = int;

void PrintIntro();
void PlayGame();
FText GetGuess();
bool AskToPlayAgain();

FBullCowGame BCGame; // make a new game instance

// entry point for application
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
	constexpr int32 WORD_LENGTH = 5;
	std::cout << "Welcome to The Shadow Network.\n";
	std::cout << "Please enter your password. (" << WORD_LENGTH;
	std::cout << " letters)\n";
	std::cout << std::endl;
	return;
}


void PlayGame()
{
	BCGame.Reset();
	int32 MaxTries = BCGame.GetMaxTries();

	// loop for the number of turns asking for guesses
	// TODO change from FOR to WHILE loop once tries are validating
	for (int32 count = 1; count <= MaxTries; count++) {
		FText Guess = GetGuess(); // TODO make loop checking valid

		// submit valid guess to the game
		// print number of bulls and cows

		std::cout << "You entered: " << Guess << std::endl;
		std::cout << std::endl;
	}

	// TODO summarise game
}


FText GetGuess() 
{
	int32 CurrentTry = BCGame.GetCurrentTry();
	
	// get a guess from the player
	std::cout << "Pass: ";
	FText Guess = "";
	std::getline(std::cin, Guess);
	return Guess;
}

// ask if the player would like to try again
bool AskToPlayAgain()
{
	std::cout << "IP and picture logged.\n";
	std::cout << "Do you want to try again again? Y/N";
	FText Response = "";
	std::getline(std::cin, Response);
	return (Response[0] == 'y') || (Response[0] == 'Y');
}
