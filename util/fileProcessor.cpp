#include <iostream>
#include <string>
#include <fstream>
#include <vector>
#include <sstream>

enum fileType {$element};
std::fstream file;
std::string fileType;
std::stringstream fstream(std::string fileBuff);

void loadFile();

int main(int argc, char** argv){;
    file.open(argv[1]);
    if(!file){
      loadFile();  
    }
    else{
      std::cout << "File not opened." << "\n";
    }
    return 0;
}

//Load file contents into the stream
void loadFile(){
    std::string token;
    while(!file.eof()){
      //will most likely need regex knowledge, or I will be damned doing this. 
     /* 
      switch(fileType){
        case $element: std::cout << "this is an element file";
        break;

        default: std::cerr << "No file type provided.";
        break;
        */
      }
    }

