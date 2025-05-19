#include <iostream>
#include <string>
#include <fstream>
#include <vector>
#include <sstream>

enum fileType {$material, $species};
std::fstream file;
std::string fileType;
std::stringstream stream;
std::vector<std::string> contents;
void loadFile();
std::vector<std::string> packageData();

int main(int argc, char** argv){;
    file.open(argv[1]);
    if(file){
      std::cout << "File open!" << "\n";
      loadFile();
      packageData();
      return 1;
    }
    else{
      std::cout << "File not opened." << "\n";
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
      std::cout << "Reading failed" << "\n";
    }
    else{
      std::cerr << "read success!" << "\n" << stream.str() << "\n";
    }
}

std::vector<std::string> packageData(){
  //Now that I'm understanding stringstream better, this is so nice. 
  stream >> fileType;
  
  if(!fileType.compare("$material")){
    std::cout << "This is a material file" << "\n";

  }
  else if (!fileType.compare("$species")) {
    
  }
  else{
    std::cerr << "Unrecognized fileType." << "\n";
  }
    
  //testing stuff
  std::vector<std::string> temptestvec;
  temptestvec.push_back(fileType);
  return temptestvec;
}
