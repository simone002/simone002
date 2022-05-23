#include <string>
#include <iostream>


using namespace std; 

// bool sorelle(string *V[][M], int n); // matrice allocata sullo stack dal chiamante 

// bool sorelle(char * **M, int n, int m){ // array di caratteri 
// bool sorelle(string * **M, int n, int m){ 
bool sorelle(string * *M[], int n, int m){
  
  /* 
    Modificare la soluzione usando un array di appoggio 
    per memorizzare il numero di vocali di tutte le (possibili)
    stringhe della singola colonna. 
    Quindi confrontare tutte le coppie di numeri 
    che stanno all'interno dell'array. 
  */ 

  for(int j=0; j<m; j++){
    //visita della colonna di indice j

    for(int i=0; i<n-1; i++){
      // confrontare (il numero di vocali dello) elemento di indice i della colonna di indice j 
      // con tutti gli elementi di indice k > i della colonna di indice j
      
      // calcola innanzitutto il numero di vocali della stringa puntata da M[i][j]
      if(M[i][j]!=nullptr){ // M[i][j] non e' null!!
	string s = *M[i][j];
	int nv = 0;
	for(int z=0; z<s.length(); z++){
	  switch(s[z]){
	    case 'a':
	    case 'e':
	    case 'i':
	    case 'o':
	    case 'u':
	      nv++;
	      break;
	  }
	} // end for(z=...) 
 
	/* dopo il ciclo for(z=..) la variabile nv conterra' 
	* il num. di vocali della stringa *M[i][j]
	*/

	// considero tutte le possibili stringhe puntate da M[k][j], con k>i
	for(int k=i+1; k<n; k++){
	// calcola il numero di vocali della (possibile) stringa puntata da M[k][j]
	  if(M[k][j]!=nullptr){
	    string s1 = *M[k][j];
	    int nv1 = 0; 	    
	    for(int z=0; z<s1.length(); z++){
	      switch(s1[z]){
	      case 'a':
	      case 'e':
	      case 'i':
	      case 'o':
	      case 'u':
		nv1++;
		break;
	      }
	    } // end for(z=..) 
	    if(nv==nv1) //  *M[i][j] e *M[k][j] sono sorelle  ??? 
	      return true;
	  } // end if(M[k][j])
	} // end for(k=i+1...) 
      } // end if(M[i][j])        
    } // end for(i=...) 
  } // end for(j=...) 

  return false; 
}

int main(){
    
    string ***c= new string **[2];
    for(int i=0;i<2;++i){
        c[i]= new string *[2];
      for(int j=0;j<2;++j){
        c[i][j]= new string ("ciao");
      }
    }

      for(int i=0;i<2;++i){
        for(int j=0;j<2;++j){
          cin >> *c[i][j];
        }
      }

    if(sorelle(c,2,2))
    cout << "vero";
    else
    cout << "che merda";
}