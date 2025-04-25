#include <iostream>
#include <string.h>
#include <stdlib.h>
#include "./headers/creature.h"
using namespace std; 

class Character : public creature{
    private:int strn, def, mag, mnd;
    private:string name;

    public:Character(string name, int strn, int def, int mag, int mnd){
        this -> name = name;
        this -> strn = strn;
        this -> def = def;
        this -> mag = mag;
        this -> mnd = mnd;
    }   

    public:void printInfo(){
            cout << name << "\n"
            << strn << " "
            << def << " "
            << mag << " "
            << mnd << "\n";
    }

    public:string getName(){
        return name; 
    }
    
    public:void setName(std::string n){
        this -> name = n;
    }
    
    
    public:int getStrn(){
        return strn;
    }

    public:void setStrn(int s){
        this -> strn = s;
    }


    public:int getDef(){
        return def;
    }

    public:void setDef(int d){
        this -> def = d;
    }

    
    public:int getMag(){
        return mag;
    }

    public:void setMag(int mg){
        this -> mag = mg;
    }


    public:int getMnd(){
        return mnd;
    }

    public:void setMnd(int mn){
        this -> mnd = mn;
    }

};


int main(int argc, char *argv[]){
    if(!strcmp(argv[1], "help")){
        std::cout << "Hi! Enter a name, and stats for strength, defense, magicality, and mindfulness." << std::endl;
        return 0;
    }
    else{
        Character c(
            (argv[1]), 
            stoi(argv[2]), 
            stoi(argv[3]), 
            stoi(argv[4]),
            stoi(argv[5])
        );
        c.printInfo();
    }
}






