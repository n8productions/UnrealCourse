#pragma once
#include <string>

using FString = std::string;
using int32 = int;

// two integers, both initialised to zero
struct FBullCowCount
{
    int32 Bulls = 0;
    int32 Cows = 0;
};

class FBullCowGame
{
public:
    FBullCowGame(); // constructor
    
    int32 GetMaxTries() const;
    int32 GetCurrentTry() const;
    int32 GetHiddenWordLength() const;
    
    bool IsGameWon() const;
    bool IsGuessValid(FString) const; //TODO make a richer return value
    
    void Reset(); // TODO make a richer return value
    
    // counts bulls & cows, and increases try # if guess is valid
    FBullCowCount SubmitGuess(FString);
    
    // ^^ ignore this
private:
    //see constructor for initialisation
    int32 MyCurrentTry;
    int32 MyMaxTries;
    FString MyHiddenWord;
};
