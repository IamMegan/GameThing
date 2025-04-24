#include <iostream>
#include <string.h>
#include <stdio.h>

using namespace std;

class creature{
    double size, mass, age, water, reagent, energy, oxidiser = 0;
    string diet, type, sex, respirationType, oxidiserType = ""; 
    bool hasStructure, isSentient, isBiological = false;
    
    public:creature();

    virtual bool processLife(){
        if(respire() && metabolise()){
            return true;
        }
    }

    virtual void die(){
        //TODO: write corpse and soul class and transfer data there; dereference this class
        //TODO: write reincarnate class
    }

    virtual bool canBreathe(string atmosphericOxidiser){
        if(!oxidiserType.compare(atmosphericOxidiser)){
            return true;
        }
        return false;
    }

    virtual bool respire(){
        //TODO: write class for atomospheric environment
        if(canBreathe("")){
            oxidiser++; //will have a more complex implementation
        }
        else{
            oxidiser--; //also this
        }
        return true;
    }

    virtual bool metabolise(){
        //Will be implimented different based on lifestyle
        return true;
    }
};

int main(){}
