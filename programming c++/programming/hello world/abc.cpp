#include <iostream>
#include <cctype>

using namespace std;

int main(){
    
    char c= ' ';

    cout << "inserire lettera: ";
    cin >> c;
  
   char cUp = toupper (c);
   
    if( isalpha (cUp) )
      if(cUp =='A' || cUp == 'E' || cUp == 'I' || cUp == 'O' || cUp == 'U')
        cout << "vocale";
      else
         cout << "consonante";
    else
      cout << "non è una lettera dell'alphabeto";
    
}

      