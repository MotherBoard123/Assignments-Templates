/* 
 * File:   main.cpp
 * Author: Brandon West
 * Created on November 29, 2017, 10:08 PM
 * Purpose: declaration/implementation of derived Sort class based off
 * SpVect template class
 */

#ifndef SORT_H
#define SORT_H

#include "SpVect.h"
#include <algorithm>
#include <vector>
#include <iostream>
#include <ctime>
using namespace std;

template <class T>
class Sort : public SpVect<T>
{   
    private:
        T *arr;
        int nSize;
    public:
        Sort();
        Sort(int);
        void sArray();  //Sorts array using STL algorithm
        void output();  //outputs sorted array
        
};
template <class T>
Sort<T>::Sort()
{
    nSize = 10;
    srand(time(0));
    
    arr = new T[nSize];
    //initialize array
    for(int i = 0;i < nSize;i++)
    {
        *(arr + i) = rand() % 10 + 1;
    }
    
}
template <class T>
void Sort<T>::sArray()
{
    sort(arr,arr + nSize);
}

template <class T>
void Sort<T>::output()
{
    cout << "The sorted array" << endl;
    for(int i = 0;i < nSize;i++)
    {
        cout << arr[i] << " ";
    }
}

#endif /* SORT_H */

