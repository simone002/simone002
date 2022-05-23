#include <iostream>
#include <math.h>

using namespace std;

int main() {

   /* int età;
    cout << "inserire età" << endl;
    cin >> età;

    if(età>=18)
      cout << "maggiorenne";
    else
      cout << "minorenne";
      vedere l'età se maggiorenne o minorenne
    */
/*
int a,b;
cout << "leggi numeri"<< endl;
cin >> a >> b;

if(a%b==0)

  cout << "è un mutiplo";
else
  cout << "non è un multiplo";
  controllare se uno è multiplo dell'altro
*/
 
float temp;
cout<<"inserisci la temperatura"<<endl;
cin>>temp;

if(temp<-273.15)
{
    cout<<"errore temperatura inferiore allo zero assoluto!";
}
else
{
    
    cout<<"temperatura in Fahrenheit "<< (9,0/5)*temp+32 <<endl;
    cout<<"temperatura in Kelvin "<<temp+273.15;
}

}