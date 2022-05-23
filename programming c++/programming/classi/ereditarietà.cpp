#include <iostream>
#include <typeinfo>

using namespace std;

class A{

    int x;

    public:

    A(){ this->x=5;} // non serve la lista di inizializzazione in b
    A(int v): x(v){} // serve la lista di inizializzazione in b

    int getx(){return x;}

   virtual void f(){cout << x;} // per attuare il polimorfismo

    protected:
    int f1(int x);
};

class B: public A{ //tutto ciò che public e protected in a saranno accessibili da una eventuale classe c

    int y;

    public:

    B(int i): A((int) (i+0,5)){ // lista di inizializzazione
        y=i;
    }

    void f(){
        cout << 6;
    }

};

class C: public A{

    int z;

    public:

    void f(){
        cout << 7;
    }
};

int main(){

    A a(5);
    B b(1);
    A&ptr=b;

  /*  A**ptr1=new A*[5];
    for(int i=0;i<5;++i){
        ptr1[i]= new B(2);
    }
    for(int i=0;i<5;++i){
        ptr1[i]->f();
        cout << endl;
    }

   cout << endl << "sei bello" << endl;

    ptr.f();

    cout << endl;

    b.f(); 
    cout << endl;
    b.A::f();
    cout << endl;
    cout << b.getx();
    */
   A* ptr1= new C();

   A*ptr2= new B(1);

   B*ptr_c2=dynamic_cast<B*>(ptr2); // per vedere se ptr_c2 punta a un oggetto di istanza b con dynamic casr
   if(ptr_c2){
       cout << "not null" << endl;
   }
   else 
        cerr << "nullptr" << endl;

    if(typeid(*ptr1)== typeid(C)){
        ((C*) ptr1)->f();
    }
    else
    cerr << "not a B pointer";
}
