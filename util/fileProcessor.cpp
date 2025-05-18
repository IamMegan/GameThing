#include <iostream>
#include <string>
#include <fstream>
#include <vector>
#include <sstream>

enum fileType {$material};
std::fstream file;
std::string fileType;
std::stringstream stream;
std::vector<std::string> contents;
void loadFile();

int main(int argc, char** argv){;
    file.open(argv[1]);
    if(file){
      std::cout << "File open!" << "\n";
      loadFile();
    }
    else{
      std::cout << "File not opened." << "\n";
    }
    return 0;
}

//Load file contents into the stream
void loadFile(){
    std::cout << "loading file..." << "\n";
    //avoid the problem entirely by passing the stream pointer from the fstream to the sstream. No loop needed! I think that's whats happening
    stream << file.rdbuf();
    file.close();
    if(stream.str().length() == 0){
      std::cout << "Reading failed" << "\n";
    }
    else{
      std::cout << "read success!" << "\n" << stream.str() << "\n";
      //apparently you can just for-each over a stream which distrubs me greatly.
      for(std::string token; getline(stream, token, ';');){
        contents.push_back(token);
        std::cout << token << "\n";
        } 
      }
    }
    /*
    std::string token;
    while(getline(fstream, token, ';')){
        contents.push_back(token);
      }
      if(contents.size() == 0){
        std::cout << "reading failed." << "\n";
      }
      else{
        for (unsigned long i = 0; i < contents.size(); i++) {
        std::cout << contents[i] << "\n"; 
      }
    } 
    */

