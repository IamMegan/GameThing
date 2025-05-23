#pragma once
#include <iostream>
#include <vector>
#include <string>
#include "item.h"
#include "biome.h"
#include "realm.h"

class creature{
    
    //This is hideous, probably because Im a dogshit programmer
    int strn, def, mag, mnd, posx, posy;
    double size, mass, age, water, reagent, energy, oxidiser;
    std::string diet, type, sex, respirationType, oxidiserType, realmOfLife, bodyPlan; 
    bool hasStructure, isBiological;
   
    std::vector<item> inventory;

    public:creature();

    bool processLife();

    creature beBorn(); 
           
    void die();

    bool canBreathe(std::string atmosphericOxidiser);
    
    bool respire();

    bool metabolise();

    void move();
};
