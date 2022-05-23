#include <iostream>
#include <string>

using namespace std;

int main(){

    int n,m;
    cout << "inserire dimensioni matrice:" << endl;
    cin >> n >> m;

    string s,save;
    cout << "inserire una parola" << endl;
    cin >> s;

    short a,b,counter=0;

    while(cin>>a >> b){
        if(a<0 && a>b && b>n)
           cerr << "inserire dei valori in modo che (a>0 a<b b<n)" << endl;
        else
            break;
    }

    bool metodo= false;

    string P[n][m];

    for(int i=0;i<n;++i){
      for(int j=0;j<m;++j){
          cin >> P[i][j];
      }
    }

    //logica

    for(int j=0;j<m;++j){
      for(int i=0;i<n;++i){
        for(int c=0;c<P[i][j].length();++c){
      }
      if(counter>a && counter<b)
         metodo=true;
      if(metodo){
         cout << "s è sottostring tot volte della colonna j esima di P";
         break;
      }
      else
         counter=0;
    }
}