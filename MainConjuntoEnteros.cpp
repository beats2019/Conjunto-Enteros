#include "ConjuntoEnteros.h"
#include <ctime>
#include <cstdlib>
#include <cstring>
#include <iostream>
using namespace std;

// TODO (Phyruos Lazy LTE#1#): Compare elementA with ElementsB
// TODO (Phyruos Lazy LTE#1#): Send elemets(b) to A


    int main()
    {
        srand( time ( 0 ) );

        int aArray[11] = { 3, 4, 5, 2, 5, 2, 4, 6, 34, 64 , 2};




        IntegerArray A;
        IntegerArray B;
        IntegerArray C;

        A.printElements();

        cout << "Same as returns " << A.sameArrayAs( B.getArray() ) << endl;





        return 0;

    }
