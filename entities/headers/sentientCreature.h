#pragma once
#include "creature.h"

class sentientCreature : creature{
    double karma;
    std::string realmOfLife;
    
    void karmaChange();
    
    std::string reincarnate();
};

