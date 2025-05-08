#include <iostream>
#include <string>
#include <fstream>
#include <vector>

std::fstream tagList;
std::string tagListName;
std::string tagListLine;
std::vector<std::string> tagListVector;
std::string getTag();
void loadTags();

void printVec();

int main(int argc, char** argv){;
    tagList.open(argv[1]);
    //getTag();
    //std::cout << tagListLine << "\n";
    loadTags();
    printVec();
    return 0;
}

std::string getTag(){
    if(tagList){
         std::getline(tagList, tagListLine);
    }
    else{
        std::cout << "File not open\n" << tagListName << "\n";
    }

    return tagListLine;
}

void loadTags(){
    int i = 0;
    while(!EOF){
        std::getline(tagList, tagListLine);
        tagListVector[i] = tagListLine;
    }
}

void printVec(){
    std::cout << "boop\n";
    for(unsigned long i = 0; i < tagListVector.size(); i++){
        std::cout << tagListVector[i] << "\n";
    }
}
