#include <iostream>
#include <cstdlib>
#include <ctime>
#include <string>


using namespace std;

#define righe 5
#define colonne 5


int campo[righe][colonne];
int maxships= 5;

void clear() 
{
        for(int i=0;i<righe;++i)
        {
          for(int j=0;j<colonne;++j)
           campo[i][j]=0;
        }

}

void mostra() 
{
        for(int i=0;i<righe;++i)
        {
          for(int j=0;j<colonne;++j)
          {
             cout << campo[i][j];
          }
           cout << endl;
        }  
}

int navirimanenti()
{
        int c=0;
        for(int i=0;i<righe;++i)
        {
         for(int j=0;j<colonne;++j)
           if(campo[i][j]==1)
             ++c;
        }
         return c;
}

void setnavi()
{
        int s=0;
        while(s<maxships)
        {
             int x = rand()%5;
             int y= rand()%5;
             if(campo[x][y] !=1)
             {
               campo[x][y]=1;
               ++s;
             }
        }
}

bool attacca(int x,int y)
{
        if(campo[x][y]==1)
        {
          campo[x][y]=2;
          return true;
        }
          return false;
}
     

int main(){

        srand(time(NULL));
        int pos1,pos2;
        clear();
        setnavi();

        int possibilità=20;
        char risposta;

        while(1){
            cout << "benvenuto a battaglia navale!" << endl;
            for(int i=0; i<possibilità; ++i)
            {
               cout << "inserisci le celle da attaccare da 0 a 4: "; cin >> pos1 >> pos2;
              if(attacca(pos1,pos2))
                cout << "bravo!" << endl;
              else
                cout << "sbagliato!, prova ancora" << endl;
              cout << "nummero di navi rimasto: " << navirimanenti() << endl;
              if(navirimanenti()==0)
                break;
            }
            if(navirimanenti()==0)
            {
              cout << "Bravo!! hai vinto" << endl;
            }
            else
              cout << "game over! sei un coglione!" << endl;

            cout << "vuoi continuare a giocare?(y/n)"; cin >> risposta;

            if(risposta=='n')
              break;
        }
        return 0;
}