#include <iostream>

using namespace std;

int main()
{
 // verificare che la matrice sia compresa tra due valori
    int c[5][5],n,m;

    cout << "inserire due numeri n e m (n<m)";
    cin >> n >> m;

    for(int i=0;i<5;++i)
    {
      for(int j=0;j<5;++j)
          cin >> c[i][j];
    }

    bool p=true;

    for(int i=0;i<5;++i)
    {
      for(int j=0;j<5;++j)
      {
        if(c[i][j]>=n && c[i][j]<=m)
           p=true;
        else
           p=false;
      }
    }
    if(p)
       cout << "questa matrice è compresa tra" << n << " ed " << m;
    else
       cout << "questa matrice non è compresa tra m ed n";
}