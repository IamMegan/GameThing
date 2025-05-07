#include <iostream>
#include <string>
#include <fstream>

std::fstream tagList;
std::string tagListName;

int main(int argc, char** argv){
    tagListName = *argv[1];
    tagList.open(tagListName);
}

std::string getTag(){
    //TODO: research getline, I cannot parse that documentation.
    //tagList.getline(); 

    return "";
}
