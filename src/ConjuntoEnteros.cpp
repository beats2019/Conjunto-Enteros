#include "ConjuntoEnteros.h"
#include <ctime>
#include <cstdlib>
#include <cstring>
#include <iostream>
using namespace std;

IntegerArray::IntegerArray()
{

    arraySize = 100;
    elements = new int[ arraySize ];


    for( int i = 0; i < arraySize; i++ )
        elements[ i ] = rand() % 2;


}

IntegerArray::IntegerArray( int const * givenArray, const int tam )
{
    arraySize = tam;
    elements = new int[ arraySize ];
    int *originalPtr = elements;

    for( int i = 0; i < arraySize ; i++ )
    {
        *elements = *givenArray;
        elements++;
        givenArray++;
    }
    elements = originalPtr;


}
IntegerArray::~IntegerArray()
{
    cout << "What the hell???";
}

void IntegerArray:: insertElement( const int pos )
{
    elements[ pos ] = 1;
}

void IntegerArray::deleteElement( const int pos )
{
    elements[ pos ] = 0;
}


int* IntegerArray::getArray()
{
    return elements;
}

int * IntegerArray:: intersectionSets( int * const arr )
{
    int* finalArray = new int[ arraySize ];
    int counter = 0;

		while( counter < arraySize )
		{
			if( elements[ counter ] == *arr )
            {
                finalArray[ counter ] = 1;
            }else
                finalArray[ counter ] = 0;
            //cout << "finalArray[ " << counter << "] = " << finalArray[ counter ] << endl;
            counter++;

		}

    return finalArray;

}


int * IntegerArray:: unionSets( int * const arr )
{
    int* finalArray = new int[ arraySize ];
    int counter = 0;

		while( counter < arraySize )
		{
			if( elements[ counter ] == 1 or *arr == 1 )
            {
                finalArray[ counter ] = 1;
            }else
                finalArray[ counter ] = 0;
            //cout << "finalArray[ " << counter << "] = " << finalArray[ counter ] << endl;
            counter++;

		}

    return finalArray;

}


void IntegerArray::setElements( int const * dir )
{
    int i = 0;
    while( i < arraySize )
    {
        elements[ i ] = *dir;
        dir++;
        i++;
    }
}

void IntegerArray::printElements()
{
    cout << "Print trial" << endl;
    cout << "Array size = " << arraySize << endl;

    int counter = 0;
    while( counter < arraySize)
    {
        cout << *elements << endl;
        elements++;
        counter++;
    }
}

bool IntegerArray::sameArrayAs( int const * a )
{
    int i = 0;
    while( i < arraySize )
    {
        if( *a != elements[ i ] )
        {
            cout << "At " << i <<" not same" << endl;
            return false; // different array
        }

        a++;
        i++;
    }
    return true;
}






