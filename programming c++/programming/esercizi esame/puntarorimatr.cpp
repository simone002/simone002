#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main(){
    int m[5][5];
    srand(time(NULL));

    for(int i=0;i<5;++i){
      for(int j=0;j<5;++j){
         *(*(m+i)+j)=rand()%10;
      }
    }

    for(int i=0;i<5;++i){
      for(int j=0;j<5;++j){
        cout << *(*(m+i)+j) << " ";
      }
      cout << endl;
    }

    cout << (*(m+3)+0) << " " << *((m+3)+0) << " " << ((m+3)+1);
}