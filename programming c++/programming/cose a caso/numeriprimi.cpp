#include <iostream>
#include <vector>


using namespace std;

int main(){

    vector<int>prime;

  //  for(int i=1;i<100;++i){
 //       if(i%2 !=0)
   //     cout << i << endl;
  //  }0
  
for (int i=3; i<100; i++) 
        for (int j=2; j<i; j++)
        {
             if (i % j == 0)
             break;
             else if (i == j+1)
                prime.push_back(i);
        }   
        for (int x : prime)
            cout << x << endl;

        int max=prime[0];
        for(int i=0;i<prime.size();++i){
        if(prime[i]< prime[i+1])
          max=prime[i+1];
        }
        cout << "questo è il max" << max;

}