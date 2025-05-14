#pragma once
#include <string>
#include <vector>
#include "tile.h"

class Biome{
    bool hasAtmosphere;
    float avgHumidty, avgPrecip, avgTemp;
    const std::vector<std::string> atmosGasses;
    std::vector<Tile> tiles;     
   
    //These are arithmetic means, so they're mainly just here for DRY

    float computeAvgHumidity();

    float computeAvgPrecip();

    float computeAvgTemp();
};
