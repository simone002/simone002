#include <iostream>

#define N 9

using namespace std;

void init(string *v,int n){ //allocazione dinamica di un array monodimensionale 

    for(int i=0;i<n && cin >> v[i];){
      if(v[i].length()>10)
       cout << "inserisci un valore minore di 10" << endl;
      else
       ++i;
    }
    
}
int main(){
    string m[N];
    init(m,N);
    
    for(int i=0;i<N;++i){
        cout  << m[i] << " ";
    }

}