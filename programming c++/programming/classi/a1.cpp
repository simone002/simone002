#include <iostream>
#include "a.h"

using namespace std;

int *ptr_int = new int (45); //allocazione di un oggetto
int *arr_int = new int [45]; // allocazione di dimensione array

int main(){

    double y=1;

    A *t= new  A(y); // 0 allocati nello heap // freestore
    A a= A(67); // 1  //allocati nello stack
    A b(y); // 2

    A c{3.0};// inizializzazione uniforme, a meno che non vi è un costruttore

    cout << b.setx(y);
    cout << (*t).setx(y) << " "; // o t->setx(y);

     a.setx2(y);

     A f= A(12);
     A d=f;
     cout << &c;
     cout << &d;

}