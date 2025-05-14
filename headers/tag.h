#include <iostream>
#include <string>
#include <vector>

class Tag{
    std::string name; 
	int colorHex;
	float brittleness, density, conductivity, meltingPoint, boilingPoint, bulkMod;
	bool isMetal, isFerromagnetic;

	public: 
		Tag(std::vector<std::string> tag){
            name = tag[0];
            colorHex = stoi(tag[1]); 
            brittleness = stof(tag[2]);
            density = stof(tag[3]);
            conductivity = stof(tag[4]);
            meltingPoint = stof(tag[5]);
            boilingPoint = stof(tag[6]);
            bulkMod = stof(tag[7]);
        }
};
