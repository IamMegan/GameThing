#include <iostream>
#include <string>
#include <fstream>
#include <vector>
#include <sstream>
#include "../data/struct/material.h"

enum fileType {$material, $species};
std::fstream file;
std::stringstream stream;
std::vector<std::string> streamContents;
void loadFile();
void packageData();
void packageMaterialData();

int main(int argc, char** argv){;
    file.open(argv[1]);
    if(file){
      std::cout << "File open!" << "\n";
      loadFile();
      packageData();
      return 0;
    }
    else{
      std::cerr << "File not opened." << "\n";
      return 1;
    }
}

//Load file contents into the stream. Note this does not populate a vector or anything, simply the stringstream object.
void loadFile(){
    std::cout << "loading file..." << "\n";
    //avoid the problem entirely by passing the stream pointer from the fstream to the sstream. No loop needed! I think that's whats happening. Not actually sure what's happening within the library.
    stream << file.rdbuf();
    file.close();
    if(stream.str().length() == 0){
      std::cerr << "Reading failed" << "\n";
    }
    else{
      std::cout << "read success!" << "\n";
    }
}

void packageMaterialData(){
  int i = stream.tellg();
  while(!stream.eof()){
    if(stream.peek() == '#'){
      stream.ignore('#');
      stream.seekg(i);
      i++;
    }
    if(i > 100){break;};
  }
  std::cout << stream.str();
}

void packageData(){
  //Now that I'm understanding stringstream better, this is so nice. 
  std::string token;
  stream >> token;
  fileType type; 
  std::vector<std::string> tokens;
  if(!token.compare("$material")) {type = $material;}

  else if (!token.compare("$species")) {type = $species;}
  
  else{std::cerr << "Unrecognized fileType." << "\n";}
/*  
  while(!stream.eof()){
    tokens.push_back(token);
  }
*/
  switch(type){
    case $material: 
      std::cout << "file type succesfully parsed as material.\n";
      packageMaterialData();
    break;

    case $species: 
      std::cout << "file type succesfully parsed as species.\n";
    break;
  }
}

