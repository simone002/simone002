#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
        int m[9][9],s1=0,s2=0;

        srand(time(NULL));

        for(int i=0;i<9;++i)
        {
          for(int j=0;j<9;++j)
              m[i][j]= rand()%10;
        }

        for(int i=0;i<9;++i)
        {
            s1+=m[i][i];
            s2+=m[i][9-i-1];
        }

        if(s1==s2)
           cout << "la somma delle diagonali è uguale";
           
}