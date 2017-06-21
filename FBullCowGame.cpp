//
//  FBullCowGame.cpp
//  ClicheNet
//
//  Created by Nathan on 2017-06-18.
//  Copyright © 2017 Nathan. All rights reserved.
//

#include "FBullCowGame.hpp"

int FBullCowGame::GetCurrentTry() { return MyCurrentTry; }
int FBullCowGame::GetMaxTries() { return MyMaxTries; }

void FBullCowGame::Reset() { return; }

bool FBullCowGame::IsGameWon() { return false; }
bool FBullCowGame::IsGuessValid(std::string) { return false; }
