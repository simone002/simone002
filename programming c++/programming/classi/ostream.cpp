#include <string>
#include <cstdlib>
#include <iostream>
using namespace std;


class X{

    int x;
    int y;

    public:

    X (int i=5,int j=5) :
        x(i),y(j)
        {}

    X(const X&c) :
        x(c.x),y(c.y)
        {}
    
   friend ostream &operator<< (ostream &s,const X&px);
   friend istream &operator>> (istream&s,X&px);
        
};
    
    ostream &operator << (ostream&s,const X&px){
      return  s << px.x << "+" << px.y << "i";
    }

    istream & operator >> (istream&s, X&px){

        char c;
        s >> px.x >> px.y;
        return s;
    }


    int main(){

        X x=X();

        cin >> x;
        cout << x;
    }