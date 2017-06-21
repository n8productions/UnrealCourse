//
//  FBullCowGame.hpp
//  ClicheNet
//
//  Created by Nathan on 2017-06-18.
//  Copyright © 2017 Nathan. All rights reserved.
//

#pragma once
#include <string>

class FBullCowGame {
public:
    void Reset (); // TODO Make a richer return value
    int GetMaxTries();
    int GetCurrentTry();
    bool IsGameWon();
    bool IsGuessValid(std::string); //TODO Make a richer return value
    
    // ignore, change interface above
private:
    int MyCurrentTry = 1;
    int MyMaxTries = 2;
};
