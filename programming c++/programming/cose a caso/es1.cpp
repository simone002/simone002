#include <iostream>
#include <string>

using namespace std;

     string m[10][10],*ptr=&m[0][0];
       int  c=0;

void array(string *v,int x,int y,int c){

    for(int i=0;i<x;++i)
        {
          for(int j=0;j<y;++j)
          {
              *(v+c)= "ciao";
              ++c;
          }
        }
}

int main(){
     
        array(ptr,10,10,c);
        cout << m[9][9] << " " << c;

}



