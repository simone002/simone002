
#include <iostream>
using namespace std;

class listaconcdop{

    public:
    double valore;
    listaconcdop*prec;
    listaconcdop*succ;
    
    listaconcdop(double valore,listaconcdop*prec=nullptr,listaconcdop*succ=nullptr):valore(valore),prec(prec),succ(succ){}
};

class lista{

    listaconcdop*testa=nullptr;
    listaconcdop*coda=nullptr;
    public:

    lista(){}

    void inserisci(double value){
        listaconcdop* nuovo=new listaconcdop(value);
        if(testa==nullptr){
            testa=nuovo;
            testa->succ=testa;
            coda=testa;
        }
        else{
            listaconcdop*iter=testa;
            iter=iter->succ;
            while(iter!=testa){
                iter=iter->succ;
            }
            listaconcdop*temp=new listaconcdop(value,iter);
            iter->succ=temp;
        }
    }

    double getcoda( ){
        return coda->valore;
    }

    friend ostream&operator<<(ostream&os,lista a){
    listaconcdop* iter = a.testa;
    while(iter!=nullptr){
        os << iter->valore << " --> ";
        iter = iter->succ;
    }
    cout << "NULL" << endl;
    return os;
    }
    
};

int  main(){

    lista l;

    l.inserisci(1);
    l.inserisci(2);


    cout << l << endl;
    cout <<l.getcoda();

    
}