#pragma once
#include <string>
#include <vector>

class Tile{
    //For the atmospheric component
    float humidity, temp, pressure;
    //Some polar/vector shit Im not even sure I can do right now.
    float windAngle, windMagnitude; 
    //If the tile is water
    double salinity;
    //if the tile is ground
    std::string material, soil, lithic;
    //less specific collection that has effects on the next vectors. If the composition is mainly water (percentage tbd), then soilComp and lithicComp will be empty.
    std::vector<std::string> totalComp;
    std::vector<std::string> soilComp;
    std::vector<std::string> lithicComp;
    
    //technically can be checked anywhere, but this will probably make it easier on the generator to have this here.
    bool isWater();
    
    //Will math out the possible humidity based on temperature, pressure, and the composition of the atmosphere
    float computeHumidity();

};
