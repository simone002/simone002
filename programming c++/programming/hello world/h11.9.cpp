#include <iostream>
#include <cmath>

using namespace std;

int main(){

    cout << "inserire due numeri il primo minore del secondo" << endl;
double a,b;
    for(a,b; cin >> a >> b;){
       if(a==b)
        cout << "inserire il primo numero minore del secondo" << endl;
       else if(a>b)
             cout << "inserire il primo numero minore del secondo" << endl;
            else break;}
  //  cin >> a >> b;

    int N;
    cout << "inserire un numero maggiore di 0: " << endl;
    cin >> N;

    a = round(a);
    b = round(b);
    cout << a << endl << b << endl;


    for(int p=a; p<=b; ++p){
        int sommaminori=0,sommamaggiori=0;                                                                                                  
      for(int i=p-1;i>p-N;--i){
      sommaminori+=i;}

      for(int i=p+1; i<=p+(N*2);++i){
      sommamaggiori+=i;}

      cout << p << endl << sommaminori;
    }

          
    

}