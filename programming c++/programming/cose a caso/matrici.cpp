#include <iostream>

using namespace std;

#define r 10
#define c 10

int m[r][c];

// tabellina da 1 a 1

void tabellina()
{
        for(int i=0;i<r;++i)
        {
          for(int j=0;j<c;++j)
          {
              m[i][j]=(i+1)*(j+1);
          }
        }
}

void mostra()
{
        for(int i=0;i<r;++i)
            {
              for(int j=0;j<c;++j)
              {
                  cout << m[i][j] << " ";
              }
                cout << endl;
            }
}

int main()
{
            tabellina();
            mostra();       
}