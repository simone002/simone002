#include <iostream>
#include <string>
#include <cmath>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
/*
        int N;
        cout << "inserisci un numero" << endl;
        cin >> N;

        int v[N],*p=v,somma=0;

        cout << "inserisci i valori:" << endl;

        for(int i=0;i<N && cin >> *(p+i);++i)
        {
        }

        for(int i=0;i<N;++i)
        {
            somma+=*(p+i);
        }

        cout << "ecco la somma=" << somma;
        */

        string m[10][10],*ptr=&m[0][0];
       int  c=0;

        srand(time(NULL));

        for(int i=0;i<10;++i)
        {
          for(int j=0;j<10;++j)
          {
              *(ptr+c)="CIAO";
              ++c;
          }
        }

        cout << m[8][9] << " " << (ptr+99) << " " << (ptr+98);


}