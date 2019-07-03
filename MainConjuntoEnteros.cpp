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

        int aArray[11] = { 1, 1 , 0, 0 ,0 , 1 , 0 ,1 , 0 ,0 , 1};
        int bArray[11] = { 1, 0 , 1, 1 ,1 , 1 , 1 ,1 , 0 ,1 , 0};

        const int tam = 11;

        IntegerArray A( aArray, tam );
        IntegerArray B(bArray, tam);
        IntegerArray C;

        int *localArray = B.getArray();

		int *localArray2 = A.unionSets( localArray );

		C.setElements( localArray2 , tam);

		C.printElements();

        return 0;

    }
