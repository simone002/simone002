#include <iostream>

using namespace std;

class automobilina{

    int batteria;
    int **m;
    int n;

    public:
    automobilina(int a):batteria(a){
        m=new int*[n];
        for(int i=0;i<n;++i){
            m[i]=new int[n];
        }
    }

    void spostamento(int a){

        int r=a;
        for(int i=0;i<n;++i){
            for(int j=0;j<n;++j){
                switch (r)
                {
                case 0:
                    ++i;
                    break;
                case 1:
                    --i;
                    break;
                case 2:
                    ++j;
                    break;
                case 3:
                    --j;
                    break;
                }
            }   
        }
    }
};