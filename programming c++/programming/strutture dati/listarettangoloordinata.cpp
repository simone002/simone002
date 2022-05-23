#include <iostream>

using namespace std;

class Rettangolo{

    private:
    int b,h;
    public:
    Rettangolo(int _b=10,int _h=10):b(_b),h(_h){}

    int getB()const{return b;}
    int geth()const{return h;}

    bool operator>(const Rettangolo &r)const{return (b*h)>(r.b*r.h);}
    bool operator==(const Rettangolo &r)const{return (b==r.b) && (h==r.h);}
    bool operator!=(const Rettangolo &r)const{return !((b==r.b) && (h==r.h));}

    friend ostream&operator<<(ostream&os,Rettangolo&r){
        os <<"["<<r.b<<"X"<<r.h<<"]"<<"("<<r.b*r.h<<")";
        return os;
    }
};

class Nodo{
    public:
    Nodo* succ;
    int valore;
};

class ListRect{
    Nodo*testa;

    public:

    ListRect(){testa=nullptr;}

    ~ListRect(){
        clear();
    }
    void inserisci(Rettangolo value){
        Nodo*nuovo=new Nodo;
        nuovo->valore=value.getB()*value.geth();
    // caso con 0 elementi
        if(testa==nullptr){
            nuovo->succ=nullptr;
            testa=nuovo;
        }
    // caso in cui il valore è minore della testa
        else if(testa->valore>=nuovo->valore){
            nuovo->succ=testa;
            testa=nuovo;
        }
    // caso generico
        Nodo*iter=testa;
        while((testa->succ!=nullptr) && (nuovo->valore>=iter->succ->valore))
            iter=iter->succ;
        iter=nuovo;
    }

    friend ostream&operator << (ostream& os,ListRect&l){
        Nodo*iter=l.testa;
        while(iter!=nullptr){
            os << iter->valore << " " << endl;
            iter=iter->succ;
        }
        return os;
    }

    void clear(){
        Nodo*iter=testa;
        if(testa==nullptr){
            delete testa;
        }
        else while(iter->succ!=nullptr){
            Nodo*tmp=iter;
            iter=iter->succ;
            delete tmp;
        }
    }
};

int main(){

    ListRect list;
    list.inserisci(Rettangolo(20,30));
    list.inserisci(Rettangolo(5,10));
    list.inserisci(Rettangolo(2,5));

    cout << list;
}
