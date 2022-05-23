#include <iostream>

using namespace std;

char c[10];
char *z=c;
void carica()
{

        for(int i=0;i<10 && cin >> *(z+i);++i)
        {
        }
}

void conta()
{
        int nv=0,nc=0;
        for(int i=0;i<10;++i)
        {
          switch (*(z+i))
          {
              case 'a':
              case 'e':
              case 'i':
              case 'o':
              case 'u':
                       ++nv;
                       break;
               default:
                       ++nc;
                       break;
          }
        }

        cout << "numero di vocali=" << nv << ", numero consonanti=" << nc;
}


int main()
{
        carica();
        conta();
}