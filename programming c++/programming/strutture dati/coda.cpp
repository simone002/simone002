#include <iostream>
using namespace std;


class Coda{

    public:
    int *arr;
    int dim;
    int testa=0;
    int fine=-1;

    Coda(int dim):dim(dim)
    {
        arr=new int[dim];
        for(int i=0;i<dim;++i){
            arr[i]=0;
        }
    }

    void enqueue(int value){
        if(isFull()){
            throw out_of_range("array pieno");
        }
        if(testa>0 && fine>=dim){
            fine=fine%dim;
            arr[fine]=value;
            ++fine;
            return;
        }
        ++fine;
        arr[fine]=value;
    }

    void dequeue(){
        if(testa>=fine)
        throw out_of_range("nessun elemento presente");
        testa=testa%dim;
        ++testa;
    }

    int getTetsa(){
        return arr[testa];
    }

    friend ostream&operator <<(ostream&os,Coda&a){
        if(a.isEmpty()){
            os << "array vuoto";
        }
        for(int i=a.testa;i!=a.fine+1;i=(i+1)%a.dim){
            os << a.arr[i] << " ";
        }
        return os;
    }

    bool isEmpty(){
        if(fine==-1){
            return true;
        }
        return false;
    }
    bool isFull(){
        if(testa==0 && fine==dim){
            return true;
        }
        return false;
    }

};

int main(){

    Coda coda(10);
    
    /*
    coda.enqueue(1);
    coda.enqueue(2);
    coda.enqueue(3);
    coda.dequeue();
    coda.dequeue();
    */
    

    cout << coda << endl;


}