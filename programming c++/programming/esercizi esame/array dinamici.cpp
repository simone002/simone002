#include <iostream>
#include <cstdlib>

using namespace std;

int *f1(){ // puntatori ad interi

    int *ptr = new int[100]; // allocazione dinamica nello heap array monodimensionale

    for(int i=0;i<100;++i){
        ptr[i]=2;
        cout << ptr[i] << " ";
    }


    return ptr;
}


int main(){

    int *v= new int [7];


}