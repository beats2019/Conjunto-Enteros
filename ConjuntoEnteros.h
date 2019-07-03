#ifndef CONJUNTOENTEROS_H
#define CONJUNTOENTEROS_H


class IntegerArray
{
    public:

        IntegerArray();
        IntegerArray( int const * , const int );

        ~IntegerArray();
        void insertElement( const int );
        void deleteElement( const int );
        int* getArray() ;
        int* intersectionSets( int * const );
        void setElements( int const * , const int );
        void printElements() ;
        int * unionSets( int * );
        bool sameArrayAs( int const * );

    private:
        int arraySize;
        int *elements;

};

#endif // CONJUNTOENTEROS_H
