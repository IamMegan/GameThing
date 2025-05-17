#include <iostream>
#include <string>
#include <fstream>
#include <vector>
#include <sstream>

struct element{  
  std::string name;
  int color;
  float density, meltingPoint, boilingPoint, bulkMod; 
  bool isMetal, isFerromagnetic, isRadioactive;
};

std::fstream tagList;
std::string tagListString;
std::vector<std::string> tagListRawVector;
std::vector<element> tagListVector;
std::stringstream stream(tagListString);


//struct buildElements();
void loadTagsVector();
//void printVec();
//void pruneTags();

int main(int argc, char** argv){;
    tagList.open(argv[1]);
    if(!tagList){
      loadTagsVector();
    }
    else{
      std::cout << "File not opened." << "\n";
    }
//    pruneTags();
//    printVec();
    return 0;
}

//Load tags into active memory to preform operations on.
void loadTagsVector(){
    /*
    if(tagListRawVector.size() == 0){
      std::cout << "Tag List Vector is empty\n";
    }
    */
    std::string token;
    int i = 0;
    while(true){
        if(i > 1000){
          std::cout << "Infinite Loop!\n";
          break;
        }
        if(tagList.eof()){
          std::cout << "End of File!" << "\n";
          break;
        }
            i++;
            stream >> token;
            std::cout << token << "Iteration " << i << "\n";
          }    
}

//Testing methods, leaving in case of need
/*
void printVec(){
    for(unsigned long i = 0; i < tagListRawVector.size(); i++){
        std::cout << tagListRawVector[i] << "\n";
    }
}

void pruneTags(){
    for(unsigned long i = 0; i < tagListRawVector.size(); i++){
        if(!tagListRawVector[i].compare("")){
           tagListRawVector.erase(tagListRawVector.begin() + i);
           i--;
        }
    }
}
*/
