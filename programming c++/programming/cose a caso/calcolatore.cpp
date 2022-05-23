#include <iostream>

using namespace std;

int main(){

    double n1,n2;
    char operatore;

    cout << "inserisci i due numeri su cui operare: " << endl;
    cin >> n1 >> n2;
     
    cout << "inserisci l'operazione da effettuare: " << endl;
    cin >> operatore;

    if(operatore == '+' )
      cout << "questa è la somma: " << n1+n2;
    else if( operatore == '-' )
           cout << "questa è la differenza: " << n1-n2;
         else if(operatore == '/')
                cout << "questa è la divisione: " << n1/n2;
              else if(operatore == '*')
                     cout << "questo è il prodotto: " << n1*n2;
                     
}