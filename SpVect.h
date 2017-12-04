/* 
 * File:   main.cpp
 * Author: Brandon West
 * Created on November 29, 2017, 10:08 PM
 * Purpose: declaration/implementation of SpVect template class
 */

#ifndef SPVECT_H
#define SPVECT_H

#include <iostream>
#include <cstdlib>
#include <new>
using namespace std;

template <class T>
class SpVect {
protected:
    T *aptr;
    int aSize;
    void memEr();   //handles memory allocation
    void subEr();   //handles subscripts
    
public:
    SpVect(){aptr = 0; aSize = 0;}//constructor
    SpVect(int);    //constructor
    SpVect(const SpVect &);
    virtual ~SpVect();
    int size();  
    T getElement(int);
    T &operator[](const int &); //overload []
    T pBack(T);
};

template <class T>
SpVect<T>::SpVect(int s)
{
    aSize = s;
    try
    {
        aptr = new T [s];
    }
    catch(bad_alloc)
    {
        memEr();
    }
    //initialize array
    for(int i = 0;i < aSize;i++)
    {
        *(aptr + i) = 0;
    }
}

//Copy constructor
template <class T>
SpVect<T>::SpVect(const SpVect &obj)
{
    //Copy array
    aSize = obj.aSize;
    
    aptr = new T [aSize];
    if(aptr == 0)
    {
        memEr();
    }
    //Copy elements
    for(int i = 0;i < aSize;i++)
    {
        *(aptr + i) = *(obj.aptr + i);
    }
}

//Destructor
template <class T>
SpVect<T>::~SpVect()
{
    if(aSize > 0)
    {
        delete [] aptr;
    }
}

//Get array size
template <class T>
int SpVect<T>::size()
{
    return aSize;
}

//Memory error function
template <class T>
void SpVect<T>::memEr()
{
    cout << "ERROR: cannot allocate memory." << endl;
    exit(EXIT_FAILURE);
}

//Subscript error. Displays error
template <class T>
void SpVect<T>::subEr()
{
    cout << "ERROR: Subscript out of range." << endl;
    exit(EXIT_FAILURE);
}

//function returns the value stored at subscript
template <class T>
T SpVect<T>::getElement(int pos)
{
    if(pos < 0 || pos >= aSize)
    {
        subEr();
    }
    return aptr[pos];
}

//overload [] function returns reference to element
template <class T>
T &SpVect<T>::operator [](const int &pos)
{
    if(pos < 0 || pos >= aSize)
    {
        subEr();
    }
    return aptr[pos];
}

template <class T>
T SpVect<T>::pBack(T x)
{  
    aptr[aSize] = (aptr[aSize] - aptr[aSize]) + x;
    return aptr[aSize];
}

#endif /* SPVECT_H */

