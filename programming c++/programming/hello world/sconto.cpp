#include <iostream>
#include <string>

using namespace std;

#define  sconto_a 0.10

#define  sconto_b1 0.20
#define  sconto_b21 0.15
#define  sconto_b22 0.18

#define  sconto_c 0.30

#define soglia_a 100
#define soglia_b 1000

#define yes 'y'
#define no 'n'
int main(){

double totale_ordine= 0, differenza;

bool tessera= false;
bool articoli_in_promozione= false;
char risposta;


cout << "totale ordine: " << endl;
cin >> totale_ordine;

cout << "articoli in promozione?" << endl;
cin >> risposta;

if(risposta == 'y')
articoli_in_promozione = true;
else 
articoli_in_promozione = false;

cout << "tessera?" << endl;
cin  >> risposta;

if(risposta == 'y')
  tessera = true;
else
  tessera = false;

// elaborazione

//CASO A

if (totale_ordine <= soglia_a)
  totale_ordine = totale_ordine*(1-sconto_a);


//CASO B

if(totale_ordine > soglia_a && totale_ordine <= soglia_b)
  if(tessera)
    totale_ordine = totale_ordine*(1-sconto_b1);
  else if (articoli_in_promozione)
         totale_ordine = totale_ordine*(1-sconto_b21);
       else 
           totale_ordine = totale_ordine*(1-sconto_b22);
// CASO C
if (totale_ordine>soglia_b)
totale_ordine= totale_ordine-soglia_b;
differenza = totale_ordine;
totale_ordine = totale_ordine*(1-sconto_c);
}