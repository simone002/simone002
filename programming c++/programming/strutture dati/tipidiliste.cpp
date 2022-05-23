#include <iostream>

using namespace std;

class Nodo{

    public:

    Nodo*succ=nullptr;
    Nodo*prev=nullptr;
    int value;

    Nodo(int value):value(value){}
    
};

class Lista
{
    private:
    Nodo* testa;
    public:

    Lista(){testa=nullptr;}
    ~Lista(){clear();}

//inserimento in testa
    void inseriscitesta(int value){
        Nodo* nuovo=new Nodo(value);
        if(testa==nullptr)
            testa=nuovo;
        else{
            nuovo->succ=testa;
            testa=nuovo;    
        }
    }
    //inserimento in coda
    void inserisci(int value){
        Nodo*nuovo=new Nodo(value);
        //inserimento in testa
        if(testa==nullptr){
            testa=nuovo;
        }
        else{
            Nodo*iter=testa;
            while(iter->succ!=nullptr){
                iter=iter->succ;
            }
            iter->succ=nuovo;
        }
    }

    friend
    ostream&operator <<(ostream&os,Lista& l){
        Nodo*iter=l.testa;
        while(iter!=nullptr){
            os << iter->value << " --> ";
            iter=iter->succ;
        }
        os << "NULL";
        return os;
    }
//inserisci in un posto specifico
    void inserisci(int value,Nodo*precedente){
        Nodo*nuovo=new Nodo(value);
        nuovo->succ=precedente->succ;
        precedente->succ=nuovo;
    }

    Nodo*ricerca(int value){
        Nodo*p=testa;
        while(p!=nullptr){
            if(p->value==value){
                return p;
            }
            p=p->succ;
        }
        return nullptr;
    }

    int &operator[](int elescor){
        if(elescor==0){
            return testa->value;
        }
        else{
            Nodo*iter=testa;
            for(int i=0;i<elescor && iter!=nullptr;++i){
                iter=iter->succ;
            }
            if(iter==nullptr){
                throw out_of_range("no more elements");
            }
            return iter->value;
        }
    }

    void pop(){
        Nodo*tmp=testa;
        if(testa==nullptr){
            throw out_of_range("no elements remaning");
        }
        testa=testa->succ;
        delete tmp;
    }

    void clear(){
        Nodo*iter=testa;
        while(iter!=nullptr){
            Nodo*tmp=iter;
            iter=iter->succ;
            delete tmp;
        }
        testa=nullptr;
    }
};

int main(){

    Lista t;

    t.inserisci(4);
    t.inserisci(5);
    //t.inseriscitesta(5);
    //t.inserisci(6,t.ricerca(4));

    //cout << t[0];

    //t.pop();
    //t.pop();
    //t.pop();

    //cout << endl;
    //t.~Lista();
    cout << t;
}
