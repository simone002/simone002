#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main(){

   srand(time(NULL));

    bool c=false;

    double w,rapporto;
    cout << "inserire un valore: ";
    cin >> w;

    int n;
    cout << "inserire dimensione: " << endl;
    cin >> n;

    int a[n][n];

    cout << "inserire valori della matrice" << endl;
    for(int i=0;i<n; ++i){
      for(int j=0;j<n;++j){
          a[i][j]= rand()%9+1;
      }
    }

    int p=n-1;
    int min=a[0][p];
    int max=a[0][p];

    for(int i=0;i<n;++i){
      if(min>a[i][p])
         min=a[i][p];
      if(max<a[i][p])
         max=a[i][p];
      --p;
    }

    rapporto=min/max;

    if(rapporto<=w)
      c=true;

    if(c)
       cout << "vero" << endl;
    else 
       cout << "falso" << endl;

}
           