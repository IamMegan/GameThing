#pragma once
#include <iostream>
#include <vector>
#include <string>
#include "item.h"
#include "biome.h"
#include "realm.h"

class creature{
    
    //This is hideous, probably because Im a dogshit programmer
    std::string species; 
    int strn, def, mag, mnd, posx, posy;
    double size, mass, age, water, reagent, energy, oxidiser;
    std::string diet, type, sex, respirationType, oxidiserType, realmOfLife, bodyPlan; 
    bool hasStructure, isBiological;
   
    std::vector<item> inventory;

    public:creature();

    bool processLife(){

    }
           
    void die();

    bool canBreathe(std::string atmosphericOxidiser);
    
    bool respire();

    bool metabolise();

    void move();

    creature beBorn(std::string spec){
      strcpy(species, spec);
      return creature c; 
    } 
};
