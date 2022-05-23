#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

    class scarpe{

        private:

        int dimensione;
        bool destra1;
        bool destra2;
        bool destra3;
        bool sinistra1;
        bool sinistra2;
        bool sinistra3;

        public:

        scarpe(int t);
        /*

        int getdim();
        bool getdestra1();
        bool getdestra2();
        bool getdestra3();
        bool getsinistra1();
        bool getsinistra2();
        bool getsinistra3();

        bool getstretch(int n,bool s);
*/

        void stampa();

        void scegli(bool latoscarpa,int streatch);

    };