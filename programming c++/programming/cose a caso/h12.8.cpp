#include <iostream>
#include <cstdlib>
#include <ctime>
#include <cmath>

using namespace std;


int main(){

       int cateto1,cateto2;
       double ipotenusa;
       
       cout << "inserire due valori: " << endl;
       cin >> cateto1 >> cateto2;

       if(cateto1<0 && cateto2<0)
        cerr << "inserire un valore maggiore di 0!!";
       else
        ipotenusa= pow(cateto1,2)+pow(cateto2,2);

        cout << sqrt(ipotenusa);


}
