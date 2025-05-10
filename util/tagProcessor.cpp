#include <iostream>
#include <string>
#include <fstream>
#include <vector>

struct Tag{
    std::string Name;
    std::vector<std::string> attributes;
};

std::fstream tagList;
std::string tagListName = "";
std::string tagListLine = "";
std::vector<std::string> tagListRawVector;
std::vector<Tag> tagListVector;


Tag getTag(std::string tagName);
void loadTags();
void printVec();
void pruneTags();

int main(int argc, char** argv){;
    tagList.open(argv[1]);
    try{
        loadTags();
    }
    catch(std::exception& e){
        std::cerr << "File not opened\n";
    }
    pruneTags();
    printVec();
    return 0;
}

Tag getTag(std::string tagName);

//Load tags into active memory to preform operations on.
void loadTags(){
    int i = 0;
    while(true){
        if(tagList.eof()){
            std::cout << "TagList EOF!\n";
            break;
        }
            tagListRawVector.resize(i+1);
            std::getline(tagList, tagListLine);
            tagListRawVector[i] = tagListLine;
            i++;
        }
    
        if(tagListRawVector.size() == 0){
            std::cout << "Tag List Vector is empty\n";
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
