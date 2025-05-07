#pragma once
#include "creature.h"

class sentientCreature : creature{
    double karma;
    std::string realmOfLife;

    public sentientCreature();
    
    void karmaChange();
    
    std::string reincarnate();
};

