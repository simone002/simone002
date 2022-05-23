#include <iostream>

using namespace std;

#define pari 120 //costante per i tubi con numero pari
#define dispari 60 // costante per i tubi con numero dispari

int main(){

        int vasca_A=0, vasca_B=0, vasca_C=0; // vasca in cui depositare l'acqua dei tubi

        int n1,n2,n3,n4,n5; //numeri chiesti all'utente
        cout << "inserisci 5 numeri da 1 a 15" << endl; 

       for (n1,n2,n3,n4,n5;cin >> n1 >> n2 >> n3 >> n4 >> n5;) //ciclo per far si che ogni numero è diverso dall'altro
       {
         if (n1==n2 || n1==n3 || n1 == n4 || n1==n5 || n2==n3 || n2==n4 || n2==n5 || n3==n4 || n3==n5 || n4==n5)
            cout << "inserisci numeri differenti tra loro" << endl;
         else
            break; 
       }


       int minuti; 
       cout << "inserisci il numero totale di minuti in cui le vasche riceveranno l'acqua dai tubi" << endl;

       for (minuti;cin >> minuti;)
       {
         if (minuti<=0)
            cout << "inserisci un numero valido!!" << endl;
         else
            break;
       }


       for (int i = 0; i < minuti; ++i) {
        switch (n1) 
        {  
        case 1:
        case 5:
                vasca_A += dispari;
                break;
        case 3:
        case 7:
        case 9:
                vasca_B += dispari;
                break;
        case 11:
        case 13:
        case 15:
                vasca_C += dispari;
                break;
        case 6:
        case 10:
                vasca_A += pari;
                break;
        case 2:
        case 4:
        case 8:
                vasca_B += pari;
                break;
        case 12:
        case 14:
                vasca_C += pari;
                break;
        }
        switch (n2) 
        {
        case 1:
        case 5:
                vasca_A += dispari;
                break;
        case 3:
        case 7:
        case 9:
                vasca_B += dispari;
                break;
        case 11:
        case 13:
        case 15:
                vasca_C += dispari;
                break;
        case 6:
        case 10:
                vasca_A += pari;
                break;
        case 2:
        case 4:
        case 8:
                vasca_B += pari;
                break;
        case 12:
        case 14:
                vasca_C += pari;
                break;
        }
        switch (n3) 
        {
        case 1:
        case 5:
                vasca_A += dispari;
                break;
        case 3:
        case 7:
        case 9:
                vasca_B += dispari;
                break;
        case 11:
        case 13:
        case 15:
                vasca_C += dispari;
                break;
        case 6:
        case 10:
                vasca_A += pari;
                break;
        case 2:
        case 4:
        case 8:
                vasca_B += pari;
                break;
        case 12:
        case 14:
                vasca_C += pari;
                break;
        }
        switch (n4) {
        case 1:
        case 5:
                vasca_A += dispari;
                break;
        case 3:
        case 7:
        case 9:
                vasca_B += dispari;
                break;
        case 11:
        case 13:
        case 15:
                vasca_C += dispari;
                break;
        case 6:
        case 10:
                vasca_A += pari;
                break;
        case 2:
        case 4:
        case 8:
                vasca_B += pari;
                break;
        case 12:
        case 14:
                vasca_C += pari;
                break;
        }
        switch (n5)
         {
        case 1:
        case 5:
                vasca_A += dispari;
                break;
        case 3:
        case 7:
        case 9:
                vasca_B += dispari;
                break;
        case 11:
        case 13:
        case 15:
                vasca_C += dispari;
                break;
        case 6:
        case 10:
                vasca_A += pari;
                break;
        case 2:
        case 4:
        case 8:
                vasca_B += pari;
                break;
        case 12:
        case 14:
                vasca_C += pari;
                break;
        }
       }


       cout << "la vasca A contiene: " << vasca_A << "ltri d'acqua" << endl << "la vasca B contiene: " << vasca_B << "ltri d'acqua" << endl << "la vasca C contiene: " << vasca_C << "ltri d'acqua"; 
       return 0;
}