#include <iostream>

using namespace std;

class batteria{

    private:
    int capacità;
    int livello;
    public:

    batteria(int unità):capacità(unità),livello(unità){}

    int getcapacità(){return capacità;}
    int getlivello(){return livello;}

    void consumaunità(){
        if(livello>0){
            --livello;
        }
    }

    void carica(int unità){
        livello=livello+unità;
        if(livello>capacità){
            livello=capacità;
        }
    }

};

class telefono{

    int numerosms;
    int numerochiamate;
    int secondichiamate;
    batteria b;
    public:
    
    telefono(int unità): b(unità),numerosms(0),numerochiamate(0),secondichiamate(0){}

    void chiama(int s){

        if(b.getlivello()>0 && s>0){
            ++numerochiamate;
        }
        while(b.getlivello()>0 && s>0){
            b.consumaunità();

            if(s>=5)
            {
                secondichiamate=secondichiamate+5;
                s-=5;
                
            }
            else{
                secondichiamate=secondichiamate+s;
                s=0;
            }
        }
    }

    void sms(){
        if(b.getlivello() >0){ 
            b.consumaunità();
            ++numerosms;
        }
    }

    void carica(int u){b.carica(u);}

    int getsms(){return numerosms;}
    int getnumerochiamate(){return numerochiamate;}
    int getsecondichiamate(){return secondichiamate;}

    void print(){
        cout << "livello carica: " << b.getlivello() << endl;
        cout << "numero sms: " << getsms() << endl;
        cout << "per: " << getnumerochiamate() << "  da: " << getsecondichiamate() << " secondi";
    }
};


int main(){

    telefono c(100);

    for(int i=0;i<10;++i)
    {
        c.sms();
    }

    c.chiama(253);

    c.carica(100);

    c.print();
}
