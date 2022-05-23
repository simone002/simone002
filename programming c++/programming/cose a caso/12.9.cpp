#include <iostream>
#include <iomanip>

using namespace std;

#define farina_base 0.3
#define uova_base 4
#define zucchero_base 0.1

int main(){

    double zucchero=0,farina=0,fruttosio=0;
    int uova=0;

    int persone;
    cout << "inserire un numero compreso tra 2 e 16: " << endl;
    cin >> persone;

    bool diabetico= false;
    char risposta;
    cout << "ci sono diabetici tra i commensali? (y/n)" << endl;
    cin >> risposta;
    
    if(risposta=='y')
     diabetico=true;

    // Dosaggio base
    if(persone>=2 && persone<=4)
     if(diabetico)
     {
        farina=farina_base;
        uova=uova_base;
        fruttosio= (2/3.0)*zucchero_base;
        cout << "dosaggio: " << endl <<  farina <<  "kg farina" << endl << uova  << " uova" << endl << setprecision(1)<< fruttosio << "kg fruttosio";
     }
     else
     {
        farina=farina_base;
        uova=uova_base;
        zucchero= zucchero_base;
        cout << "dosaggio: " << endl <<  farina <<  "kg farina" << endl << uova  << " uova" << endl << zucchero << "kg zucchero";
     }
    // dosaggio medio
    if(persone>=5 && persone<=8)
     if(diabetico)
     {
        farina=2.5*farina_base;
        uova=2.5*uova_base;
        zucchero=1.5*zucchero_base;
        fruttosio=(2/3.0)*zucchero;
        cout << "dosaggio: " << endl <<  farina <<  "kg farina" << endl << uova  << " uova" << endl << setprecision(3)<< fruttosio << "kg fruttosio";
     }
     else
     {
        farina=2.5*farina_base;
        uova=2.5*uova_base;
        zucchero=1.5*zucchero_base;
        cout << "dosaggio: " << endl <<  farina <<  "kg farina" << endl << uova  << " uova" << endl << setprecision(1)<< zucchero << "kg zucchero";
     }

}