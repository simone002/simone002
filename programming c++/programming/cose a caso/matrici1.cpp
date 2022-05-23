#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

int m[10][10];

// contare gli 0 in una matrice random che va da 0 a 9

void random()
{
        srand(time(NULL));

        for(int i=0;i<10;++i)
        {
          for(int j=0;j<10;++j)
              m[i][j]= rand()%10;
        }
}

int conta()
{
        int c=0;

        for(int i=0;i<10;++i)
        {
          for(int j=0;j<10;++j)
            if(m[i][j]==0)
            ++c;
        }
        return c;
}

void mostra()
{
        for(int i=0;i<10;++i)
        {
          for(int j=0;j<10;++j)
              cout << m[i][j] << " ";
            cout << endl; 
        }
}

int main()
{
    random();
    mostra();
    cout << conta();
}