#include <iostream>
#include <string>
#include <fstream>
#include <vector>
#include <sstream>


std::fstream file;
std::string fileBuff;
std::string fileType;
std::stringstream stream(fileBuff);

void loadFile();

int main(int argc, char** argv){;
    file.open(argv[1]);
    if(!file){
      
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

      //Must research stream stream more

      switch (1) {

        default:

          break;
      }
    }
}

