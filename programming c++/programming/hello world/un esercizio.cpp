#include <iostream>

using namespace std;

int main(){

    int a,b,c;
   
    cout << "inserire valori: " << endl; 
    cin >> a >> b >> c;

    double media= 0; //varibile di salvataggio media
    int max= 0;   //variabile di salavataggio massimo tra i valori
    int somma=0; // salvataggio somma tra i valori
    int trovato=0;

    somma= a+b+c;
    media=somma/3;

    cout <<"questa è la media: " << media<< endl;

    if(media==a) 
       trovato=+1;
    if(media==b) 
       trovato=+1;
    if(media==c) 
       trovato=+1;

    cout << "trovata media determinate volte " << trovato << endl;

    if(a<b) max= b;
    else{ 
        max=a;
    }  
     
    if (max<c)max= c;
    
    cout <<"questo è il valore massimo: " << max;
 
}