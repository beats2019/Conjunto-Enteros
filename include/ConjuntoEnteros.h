#ifndef CONJUNTOENTEROS_H
#define CONJUNTOENTEROS_H


class IntegerArray
{
    public:

        IntegerArray( );
        ~IntegerArray();
        void insertElement( const int );
        void deleteElement( const int );
        int* getArray() ;
        int* intersectionSets( int * const );
        void setElements( int const * );
        void printElements() const;
        int * unionSets( int * const );
        bool sameArrayAs( int const * );







    private:
        const int arraySize = 100;
        int elements[ 100 ];

};

#endif // CONJUNTOENTEROS_H
