
#include "a.h"
#include <iostream>

using namespace std;

A::A(double b){
    x=b;
}

double A::setx(double y){

    return 2*y;
}
/*
A::A(double init){ //costruttore A prende il nome della classe

    setx(init);
}
*/
void A::setx2(double y){
    this -> x= 3*y; //variabile di istanza
    //(*this).x =3*y;
}


