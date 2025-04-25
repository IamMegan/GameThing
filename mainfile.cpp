#include <iostream>
#include <string.h>
#include <stdlib.h>

using namespace std; 
bool running = false;
long step = 0;    

void Step(){
    step++;
}

bool Stop(){
    return true;
}
    
int main(int argc, char **argv){
    running = true;
    while(running){
        if(Stop()){
            running = false;
            break;
        } 

    //MUST REMAIN AT END
        Step();
    }
    

}
