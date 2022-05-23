#include <iostream>

using namespace std;

int main()
{
        //puntatore è una variabile speciale che punta ad un altra variabile

        int num=10000;

         int *p; //dichiara p come puntatore a int non inizializzato
         p=&num; //simbolo ampercente & commerciale per estrare l'indirizzo della variabile num per assegnarlo a p

         int *ptr=&num;

        cout << p << " " << ptr;

        //modifica del dato mediante il puntatore

        *p=20;
        cout << num << " " << *ptr << " " << *p << endl;


        int v[]= {1,2,3};
         p=&v[0];  //far partire è dalla cella 0 di v
        *(++p)=5;  // aritmetica dei puntatori equivale a p[1]

        cout << "v=" << v << ", *v=" << *v << ", v[2]=" << v[2] << endl;

        int *pi=v;
        cout << "pi=" << pi << ", pi[1]=" << pi[1] << ", v=" << v << ", *pi+1=" << *(pi+1) << ", *v=" << *v << endl;

        
        int w[3];
        for(int i=0;i<3;++i)
        {
        w[i]=*(pi+i);
        cout << w[i] << endl;
        }

        short *ptr1=nullptr;
}