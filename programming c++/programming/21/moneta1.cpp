#include "moneta.h"
#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;


int main(){

    Moneta A;

    A.effettuaLancio();

   if (A.getFaccia()== 'C'){
        cout << "testa" << endl;
   }

    cout << A;
}