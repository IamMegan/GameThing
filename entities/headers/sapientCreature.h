#pragma once
#include "sentientCreature.h"

class sapientCreature : sentientCreature{
    std::string language, culture, religion; 
    bool hasAttainedNirvana;
    
    bool dissolution();
};
