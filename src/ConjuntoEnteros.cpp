#include "ConjuntoEnteros.h"
#include <cstring>
#include <iostream>
using namespace std;

//ConjuntoEnteros::tamanioArreglo = 100;


IntegerArray::IntegerArray(  )
{

    for( int i = 0; i < 100; i++ )
        elements[ i ] = 1;


}
IntegerArray::~IntegerArray()
{

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
    int* finalArray = new int[ 100 ];
    int counter = 0;

		while( counter < 100 )
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
    int* finalArray = new int[ 100 ];
    int counter = 0;

		while( counter < 100 )
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
    while( i < 100 )
    {
        elements[ i ] = *dir;
        dir++;
        i++;
    }
}

void IntegerArray::printElements() const
{
    for( int i = 0; i < 100; i++ )
    {
       cout << elements[ i ] << endl;
    }
}

bool IntegerArray::sameArrayAs( int const * a )
{
    int i = 0;
    while( i < 100 )
    {
        if( *a != elements[ i ] )
          return false;
        a++;
        i++;
    }
    return true;
}






