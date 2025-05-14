#pragma once
#include "sentientCreature.h"

class sapientCreature : sentientCreature{
    std::string language, culture, religion; 

    public sapientCreature();
    
    bool hasAttainedNirvana;
    
    bool dissolution();
};
