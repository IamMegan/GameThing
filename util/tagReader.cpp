#include <iostream>
#include <string>
#include <fstream>
#include <vector>

std::fstream tagList;
std::string tagListName = "";
std::string tagListLine = "";
std::vector<std::string> tagListVector;

std::string getTag();
void loadTags();
void printVec();
void pruneTags();

int main(int argc, char** argv){;
    tagList.open(argv[1]);
    getTag();
    printVec();
    pruneTags();
    printVec();
    return 0;
}

//Going to be reworked, don´t touch for now. 
std::string getTag(){
    if(tagList){
        std::cout << "File opened succesfully!\n";
        loadTags();
    }
    else{
        std::cout << "File not open\n" << tagListName << "\n";
    }

    return tagListLine;
}

//Load tags into active memory to preform operations on.
void loadTags(){
    int i = 0;
    while(true){
        if(tagList.eof()){
            std::cout << "TagList EOF!\n";
            break;
        }
            tagListVector.resize(i+1);
            std::getline(tagList, tagListLine);
            tagListVector[i] = tagListLine;
            i++;
        }
    
        if(tagListVector.size() == 0){
            std::cout << "Tag List Vector is empty\n";
        }
}

void printVec(){
    for(unsigned long i = 0; i < tagListVector.size(); i++){
        std::cout << tagListVector[i] << "\n";
    }
}

void pruneTags(){
    for(unsigned long i = 0; i < tagListVector.size(); i++){
        if(!tagListVector[i].compare("")){
           tagListVector.erase(tagListVector.begin() + i);
           i--;
        }
    }
}
