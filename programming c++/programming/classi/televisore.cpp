#include <iostream>

using namespace std;

class televisore {
    private:
    bool accensione;
    int volume;
    int canale;
    bool modalità;
    public:

    televisore(bool a=false,int v=0,int c=0,bool m=false){
        accensione=a;
        volume=v;
        canale=c;
        modalità=m;
    }

   bool getmodalità(){
       return modalità;
   }

   int  getvolume(){
        return volume;
    }

    int getcanale(){
        return canale;
    }

    bool getaccensione(){
        return accensione;
    }

    void pulsanterosso(char acceso){
        if(acceso== 'y'){
            accensione=true;
        }
    }

    void spegnimento(char c){
        if(c=='y'){
            accensione=false;
        }
    }

    void canalesuccessivo(){
        if(getcanale()<=100){
        ++canale;
        }
        else 
        canale=0;
    }

    void canaleprecedente(){
        if(getcanale()>=0){
            --canale;
        }
        else 
        canale=100;
    }

    void alzavolume(){
        if(getmodalità()==false){
            if(getvolume()<10){
                ++volume;
            }
        }
    }

    void abbassavolume(int v){
        if(getmodalità()==false){
            if(getvolume()>0){
                --volume;
            }
        }
    }

    void impostacanale(int c){
        canale=c;
    }

    void print(){
        if(getaccensione()== false){
        cout << "la tv è spenta" << endl;
        }
        else{
        cout << "la tv è accesa" << endl;
        cout << "è al canale: " << getcanale() << endl;
        if(getmodalità()==true){
            cout << "la tv è in modalità silenzioso";
        }
        else
        cout << "volume: " << getvolume();
        }
    }

    void pulsantesilenzioso(){
        modalità=true;
    }

};

int main(){

    televisore tv= televisore();
    char risposta;
    cout << "vuoi accendere il televisore?(y/n)";
    cin >> risposta;
    if(risposta=='y'){
        cout << "il televisore è acceso" << endl;
        tv.pulsanterosso(risposta);
    }


    if(tv.getaccensione()==true){
    cout << "imposti il canale" << endl;
    int canale;
    cin >> canale;
    tv.impostacanale(canale);

    cout << "cambi canale con il successivo" << endl;
    tv.canalesuccessivo();
    tv.canalesuccessivo();

    cout << "aumenti il volume" << endl;
    tv.alzavolume();
    tv.alzavolume();
    }

    tv.print();
}