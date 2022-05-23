#include <iostream>
#include <string>

using namespace std;

class squadra{

    int partitevinte;
    int partiteperse;
    int partiteparegiate;
    
    public:

    squadra(int a,int b,int c):partitevinte(a),partiteperse(b),partiteparegiate(c){

    }

    void print(){
        cout << "partite vinte: " << partitevinte;
        cout << "partite perse: " << partiteperse;
        cout << "partite paregiate: " << partiteparegiate;
    }

    int punti(){
        int punti;
        int partite=partitevinte;
        int partite1=partiteperse;
        while(partite>=0){
            punti+=2;
            --partite;
        }
        while(partite1>=0){
            ++punti;
            --partite1;
        }

        return punti;
    }

    void resetpartite(){
        partitevinte=0;
        partiteperse=0;
        partiteparegiate=0;
    }

  

};

int main(){

    int partite_vinte,partite_perse,partite_paregiate;
    cout << "quante partite ha vinto?" << endl;
    cin >> partite_vinte;
    cout <<  "quante partite ha perso?" << endl;
    cin >> partite_perse;
    cout << "quante partite ha paregiato?" << endl;
    cin >> partite_paregiate;


    squadra milan(partite_vinte,partite_perse,partite_paregiate);

     int partite_vinte1,partite_perse1,partite_paregiate1;
    cout << "quante partite ha vinto?" << endl;
    cin >> partite_vinte1;
    cout <<  "quante partite ha perso?" << endl;
    cin >> partite_perse1;
    cout << "quante partite ha paregiato?" << endl;
    cin >> partite_paregiate1;

    squadra juventus(partite_vinte1,partite_perse1,partite_paregiate1);

    if(milan.punti()>juventus.punti()){
        cout << "il milan ha più punti della juventus: " << milan.punti();
    }
    else
        cout << "la juventus ha più punti del milan: " << juventus.punti();


    milan.resetpartite();
    juventus.resetpartite();
}