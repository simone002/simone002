#include <iostream>
#include <string>

using namespace std;

class matrice3D{

    private:
    int ***arr;
    int x;
    int y;
    int z;
    public:


    matrice3D(int n=2,int m=3,int k=3,int p=4){ 
       arr=new int **[n];
       for(int i=0;i<n;++i){
         arr[i]=new int *[m];
         for(int j=0;j<m;++j){
           arr[i][j]=new int [k];
           for(int l=0;l<k;++l){
             arr[i][j][l]=p;
           }
         }
       }
       this -> x=n;
       this -> y=m;
       this -> z=k;
    }

    ~matrice3D(){
      for(int i=0;i<this->x;++i){
        for(int j=0;j<this->y;++j){
          delete [] arr[i][j];
        } 
         delete [] arr[i];
      }
      delete [] arr;
    }

    int getdimx(){
      return x;
    }

    int getdimy(){
      return y;
    }

    int getdimz(){
      return z;
    }

    int &get(int i,int j,int k){
      if(i>=0 && j>=0 && k>=0 && i<getdimx() && j<getdimy() && k<getdimz()){
      return arr[i][j][k];
      }
      return *(new int(-1));
    }

    int *get1(int i,int j,int k){
      int *P=&arr[i][j][k];
      return P;
    }

    matrice3D *sommabyptr(matrice3D*ptr1,matrice3D*ptr2){
      if(ptr1->getdimx()!= ptr2->getdimx() ||
         ptr1->getdimy()!= ptr2->getdimy() ||
         ptr1->getdimx()!= ptr2->getdimx()
      ) return NULL;
      matrice3D *res=new matrice3D(ptr1->getdimx(),ptr1->getdimy(),ptr1->getdimz());

      for(int i=0;i<ptr1->getdimx();++i){
        for(int j=0;j<ptr1->getdimy();++j){
          for(int k=0;k<ptr1->getdimz();++k){
            res->get(i,j,k)= ptr1->get(i,j,k)+ptr2->get(i,j,k);
          }
        }
      }
      return res;
    }

  matrice3D &sommabyreference(matrice3D &m1,matrice3D &m2){

      if(m1.getdimx()!= m2.getdimx() ||
         m1.getdimy()!= m2.getdimy() ||
         m1.getdimx()!= m2.getdimx()
        ) return m1;

      matrice3D *res= new matrice3D(m1.getdimx(),m1.getdimy(),m1.z);

      for(int i=0;i<getdimx();++i){
        for(int j=0;j<getdimy();++j){
          for(int k=0;k<getdimz();++k){
            res->arr[i][j][k]= m1.get(i,j,k) + m2.get(i,j,k);
          }
        }
      }
      return *res;
    }

    void somma3d(matrice3D &m1,matrice3D &m2,matrice3D *m3){

      for(int i=0;i<getdimx();++i){
        for(int j=0;j<getdimy();++j){
          for(int k=0;k<getdimz();++k){
            m3->get(i,j,k)= m1(i,j,k)+m2(i,j,k);
          }
        }
      }
    }

    void stampa(){
        for(int i=0;i<getdimx();++i){
          cout << "dimensione "<< i << endl;
          for(int j=0;j<getdimy();++j){
            for(int k=0;k<getdimz();++k){
                cout << arr[i][j][k]<< " ";
            }
            cout << endl;
          }
          cout << endl;
        }
    }

    int &operator()(int i,int j,int k) {

    return arr[i][j][k];
    }

};

int main(){

    matrice3D *ptr1=new matrice3D();
    matrice3D *ptr2=new matrice3D();

    matrice3D g(2,2,3,2);
    matrice3D d(2,2,3,4);

    cout << g(1,1,2);
    cout << endl;

    matrice3D *res= ptr1->sommabyptr(ptr1,ptr2);
  //  matrice3D *re2= &m1.sommabyreference(m1,m2);
    ptr1->sommabyreference(*ptr1,*ptr2);
   

    (*res).stampa();

   // (*re2)(1,1,1)=g(1,1,2);
    cout << (*res)(1,1,1);

    cout << endl;

    cout << (res)->get(1,1,2) << endl;
    cout << *g.get1(1,1,2) << endl;
    
}