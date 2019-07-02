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
        void setElements( int const * );
        void printElements() ;
        int * unionSets( int * const );
        bool sameArrayAs( int const * );

    private:
        int arraySize;
        int *elements;

};

#endif // CONJUNTOENTEROS_H
