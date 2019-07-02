#include <iostream>
using namespace std;
#include "ConjuntoEnteros.h"

// TODO (Phyruos Lazy LTE#1#): Compare elementA with ElementsB
// TODO (Phyruos Lazy LTE#1#): Send elemets(b) to A


    int main()
    {
        IntegerArray A;
        IntegerArray B;
        IntegerArray C;


		int *localArray = B.getArray();

		int *localArray2 = A.unionSets( localArray );

		C.setElements( localArray2 );

        C.printElements();

		/*
		int iterador = 0;
		while( iterador < 100 )
		{
			cout << *localArray << endl;
			localArray++;
			iterador++;
		}*/




        return 0;

    }
