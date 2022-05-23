#include <iostream>
#include <iomanip>
#include <string>
#include <math.h>

using namespace std;

int main(){
int somma=0;

  for(int i=1; i<99; i=i+2){
    if(i%3!=0){
      somma+=i;
      cout << somma << endl;
    }
  }
}