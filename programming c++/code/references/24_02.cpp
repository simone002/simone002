#include <iostream>

using namespace std; 

class VettoreInt{
  int **arr;  

  public: 
    VettoreInt(int n,int m){
      arr = new int*[n];
      for(int i=0; i<n; i++){
	      arr[i] = new int [m];
        for(int j=0;j<m;++j){
          arr[i][j]=j+1;
        }
      }
    }
    

    int &getElem(int i,int j){
      return arr[i][j]; 
    }

  /*  
    void setElem(int i, int v){
      arr[i] = v;
    }
  */
};

int main(){

  VettoreInt myVec(10,10);

  cout << myVec.getElem(0,1) << endl;  

  cout << "myVec.getElem(0,1)=" << myVec.getElem(0,1) << endl; 
  //NB: risultato di getElem() usato 
  //nella parte sinistra di un assegnamento 
  myVec.getElem(0,1) = 18;   

  cout << "myVec.getElem(0,1)=" << myVec.getElem(0,1) << endl; 
}
