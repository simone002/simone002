#include <iostream>
#include <string>
#include <sstream>

using namespace std;

int main(){

    string s1,s2,s3, mys;
    cin >> s1 >> s2 >> s3;
    
    stringstream ss;
    ss << s1 << s2 << s3;

   
    if(s1.length()>10 || s2.length()>10 || s3.length()>10)
      if (s1.length()==20 || s2.length()==20 || s3.length()==20)
        mys= s2.substr(0,3)+s3.substr(s3.length()-3);
      else 
        ss >> mys;
    else
    cout << s1.length()+s2.length()+s3.length();

    cout << mys; 
    
}

