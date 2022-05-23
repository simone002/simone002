#include <iostream>


using namespace std;

class Rectangle{

    double height=1;
    double width=1;

    public:
    Rectangle(double a=rand()/(RAND_MAX*1.0)*10,double b=rand()/(RAND_MAX*1.0)*10):height(a),width(b){}
    double getHeight(){
        return height;
    }
    void setHeight(double a){
        this->height=a;
    }
    double getWidth(){return width;}
    void setWidth(double a){width=a;}
    bool isasquare(){
        if(width==height){
            return true;
        }
        return false;
    }
    double getarea(){
        return height*width;
    }

    ostream&operator<<(ostream&os){
        os << height << ", " << width;
        return os;
    }
};

class Nodo{
    public:
    Nodo*prec;
    Nodo*succ;
    Rectangle valore;
    Nodo(Rectangle value,Nodo*precedente=nullptr,Nodo*succ=nullptr):valore(value),prec(precedente),succ(succ){}

};

class Lista{

    private:
    Nodo*testa;

    public:

    Lista(){testa=nullptr;}
    ~Lista(){clear();}
    void clear(){

        Nodo*iter=testa;
        while(iter->succ!=nullptr){
            Nodo*temp=iter->succ;
            delete iter;
            iter=temp;
        }
    }

    void inserisci(Rectangle value){
        Nodo*nuovo=new Nodo(value);
        if(testa==nullptr){
            testa=new Nodo(value);
        }
        else{
            Nodo*iter=testa;
            while(iter->succ!=nullptr){
                iter=iter->succ;
            }
            Nodo*temp=new Nodo(value,iter);
            iter->succ=temp;
        }
    }

    friend ostream&operator<<(ostream&os,const Lista&a){
    Nodo* iter = a.testa;
    while(iter!=nullptr){
        os << iter->valore.getHeight() << ", " << iter->valore.getWidth() << " --> ";
        iter = iter->succ;
    }
    cout << "NULL" << endl;
    return os;
    }


};

void howmany(Lista&in,int value){
    for(int i=0;i<value;++i){
        in.inserisci(Rectangle());
    }
}

int main(){
    Lista lista;
    unsigned value;

    cout << "how many Rectangle do you wanna insert?" << endl;
    cin >> value;
    howmany(lista,value);

    cout << lista;

}