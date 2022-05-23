#include <iostream>
#include <cmath>
#include <cstdlib>
#include <time.h>
#include <algorithm>
#include <vector>

#define scalare 30

using namespace std;

int main(){

        int g,u;
       //  int prodotto=scalare;

        double p,r;
        cout << "inserire due numeri qualsiasi" << endl;
        cin >> p >> r;

        if(p<1)
          cerr << "inserisci un numero diverso da 0" << endl;
        else
        {
          g=p;
          u=r;
        }

        double v[g][u];
        int i=0;

        srand(time(NULL));

        for(int i=0;i<g;++i){
          for(int j=0;j<u;++j){
             v[i][j]= (double)rand() / RAND_MAX *1.0;
             v[i][j]= rand() %100;
          }
        }

        cout << v[0][0] << " valore v[0][0]" <<  endl;

        for(int i=0;i<g;++i)
        {
          for(int j=0;j<u;++j)
             v[i][j]*=scalare;
        }

        cout << v[0][0] << " valore[0][0] * 30" << endl;
        
}