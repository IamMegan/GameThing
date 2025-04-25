#pragma once
#include <iostream>
#include <vector>
#include <string>
#include "item.h"
class creature{
    
    //This is hideous, probably because Im a dogshit programmer
    int strn, def, mag, mnd;
    double size, mass, age, water, reagent, energy, oxidiser;
    std::string diet, type, sex, respirationType, oxidiserType, realmOfLife, bodyPlan; 
    bool hasStructure, isBiological;
   
    std::vector<Item> inventory;

    //empty constructor, wont really create an pure creature
    public:creature();

    bool processLife();

    void die();

    bool canBreathe(std::string atmosphericOxidiser);

    bool respire();

    bool metabolise();
};
