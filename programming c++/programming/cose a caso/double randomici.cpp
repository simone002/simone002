#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main(){

    srand(time(NULL));
    
    
    for(int i=0;i<20;++i) 
    {
        double ciao= (double)rand()/(RAND_MAX)*3.0-1.0;
        cout << ciao << endl;
    }
}