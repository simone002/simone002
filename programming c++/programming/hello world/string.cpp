#include <iostream>
#include <string>

using namespace std;

int main(){

int a,b,c;
cin >> a >> b >> c;

string str;
cin >> str;


if(a!=c)
  if(str.length()<8)
  b=a+c;
  else {
      a=0,b=0,c=0;
  }

  
if (a == c)
  if (str.length() > 8)
    a= c-b;
  else{
      a=0, b=0, c=0;
  }

  cout << a << endl <<  b << endl <<  c;
}