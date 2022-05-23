#include <vector>
#include <iostream>
#include <string>
#include <iomanip>
#include <algorithm>
#include <cstdlib>
#include <ctime>

using namespace std;

int main(){
/* scorrere array

  vector<string> v= {"ciao", "hello ", "che vuoi", "ciao", "ciao","hello"} ;
    for(int i=0; i<v.size(); ++i)
    {
      
      cout << v[i];

    }
    
       
vector<double>temps;

for(double o; cin >> o;)
temps.push_back(o); // per popolare il mio array

double sum=0; 

for(double x : temps) sum+=x; // per sommare tutti valori dell'array

sort(temps.begin(), temps.end()); // ordinare da più piccolo al più grande

cout << fixed << setprecision(1) << "average between temp: " << sum/temps.size() << endl; // media array
cout << "median temperature: " << temps[temps.size()/2]; // prende il numero che sta in mezzo al mio array
*/
 /*
vector <string> words;

for(string o; cin >> o;){
  if(o=="bastardo" || o=="troia" || o=="merda") // togliere una parola indesiderata
    cout << "non puoi inserire questa parola!!" << endl;
  else
    words.push_back(o);
}

 sort(words.begin(), words.end());  // sistemare le parole in base l'alfabeto 

for(int i=0; i<words.size(); ++i){
    cout << words[i] << endl;
  }
  */
   
  int tentativi= 17;
  srand(time(NULL));
  int numero = rand() %100;
  int prova;
  char risposta;

 // for(int i=0; i==0;){

    cout << "benvenuto al gioco bello" << endl;

    for(int i=0; i<tentativi; ++i){
      if(i==0)
       cout << "prova a indovinare il numero" << endl;

       cin >> prova;
      
      if(prova<numero)
        cout << "sbagliato!, prova con un numero più grande" << endl;
      else if(prova>numero)
            cout << "sbagliato!, prova con un numero più piccolo" << endl;
      else if(prova == numero){
            cout << "bravo hai vinto una banana!!" << endl;  
            break;
            }
    }

   // cout << "vuoi continuare(y/n)?" << endl;
   // cin >> risposta;
   // if(risposta=='n')
   // break;
 //}

}

