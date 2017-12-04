/* 
 * File:   IntArry.cpp
 * Author: Brandon West
 * Created on November 29, 2017, 10:08 PM
 * Purpose: implementation of IntArry Class
 */

#include "IntArry.h"

IntArry::IntArry(int x) {
    size = x;
    for(int i = 0;i < size;i++)
    {
        num = rand() % 10 + 1;
        arry.push_back(num);
    }
}

IntArry::~IntArry() {
}

int &IntArry::operator [](const int &index)
{
    try
    {
        if(index >= 0 || index < size)
        return arry[index];
    }
    catch(IntArry::CkIndex(index))
    {
        cout << "Out of bounds." << endl;
        throw;
    }
}