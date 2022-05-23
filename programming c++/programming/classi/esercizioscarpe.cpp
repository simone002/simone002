#include <iostream>
#include "streatch.h"

using namespace std;

int main(){

        scarpe s1(36);
        scarpe s2(50);
        srand(time(NULL));
        for(int i=0;i<10;++i){
            if(rand()%2)
            {
                s1.scegli(rand()%2,rand()%3+1);
            }
            else
                s2.scegli(rand()%2,rand()%3+1);
        }
        s1.stampa();
        s2.stampa();
    }