#include <iostream>

using namespace std;
int m[5][5];

void m0()
{

        for(int i=0;i<5;++i)
        {
          for(int j=0;j<5;++j)
          m[i][j]=0;
        }
}

void diagonale()
{
        for(int i=0;i<5;++i)
        {
             m[i][i]=1;
        }
        
}

void mostra()
{
         for(int i=0;i<5;++i)
        {
           for(int j=0;j<5;++j)
               cout << m[i][j];
             cout << endl;
        }
}


int main()
{
        m0();
        diagonale();
        mostra();
}
