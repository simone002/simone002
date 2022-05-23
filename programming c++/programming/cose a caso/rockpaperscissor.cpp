#include <vector>
#include <iostream>
#include <string>
#include <iomanip>
#include <algorithm>
#include <cstdlib>
#include <ctime>

using namespace std;

int main(){

    vector<string> game= {"carta", "sasso", "forbice"};
    srand(time(NULL));
    int numero = 0;
    
    for(int i=0; i<99; ++i){
    cout << "carta, forbice o sasso?" << endl;

    for(string scelta; cin >> scelta;){
       numero = rand() %3;
       cout << "questa è la scelta del computer: " << game[numero] << endl;
       break;
    }
   }
}