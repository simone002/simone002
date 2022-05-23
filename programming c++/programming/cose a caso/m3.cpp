#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
  // per controllare le somme della prima riga con l'ultima e via via...
  
        int m[6][6],somma=0,a[6],d=0,c=5;
        srand(time(NULL));

        for(int i=0;i<6;++i)
        {
          for(int j=0;j<6;++j)
          m[i][j]=rand()%10;
        }

        for(int i=0;i<6;++i)
        {
          for(int j=0;j<6;++j)
              cout << m[i][j] << " ";
            cout << endl;
        }

        for(int i=0;i<6;++i)
        {
          for(int j=0;j<6;++j)
          {
              somma+=m[i][j];
              a[d]=somma;
          }
          ++d;
          somma=0;
        }

        for(int i=0;i<6;++i)
            cout << a[i] << " ";
          

        for(int i=0;i<3;++i)
        {
          if(a[i]==a[c])
             cout << endl << "trovata somma palindroma" << endl;
            --c;
        }
        
}