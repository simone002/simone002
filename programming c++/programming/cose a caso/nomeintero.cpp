#include <iostream>
#include <vector>
#include <math.h>
#include <iomanip>

using namespace std;

int main(){

    long long int square=0,grain=0,moregrain=0;

    while(grain<=1000){
        grain=pow(2,square);
        ++square;
    }
    cout <<"per arrivare a 1000 di grano ci hai impiegato: " << square << setw(2) << "quadrati" << endl;

    while(grain < 1000000){
         grain=pow(2,square);
         ++square;
    }
    cout << "per arrivare a 1000000 di grano ci hai impiegato: " << square << setw(2) << "quadrati" << endl;

    while(grain < 1000000000){
         grain=pow(2,square);
         ++square;
         
    }
    cout << "per arrivare a 1000000000 di grano ci hai impiegato: " << square << setw(2) << "quadrati" << endl;

    
}