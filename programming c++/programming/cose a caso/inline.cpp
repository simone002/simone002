#include <iostream>

#define MAX(a,b) (a>b? a : b) // funzione macro

using namespace std;

constexpr int fact(int n){ // chiamata ricorsiva errore segmentation fault

    if(n<=1)
     return 1;
    else return fact(n-1)*n;
}

int main(){

    int ciao= MAX(2,3);

    constexpr long f6=fact(10); // constexpr da errore di overflow inline no!! 

    cout << f6;
    cout << ciao;
}