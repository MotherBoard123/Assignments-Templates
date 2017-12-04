/* 
 * File:   IntArry.h
 * Author: Brandon West
 * Created on November 29, 2017, 10:08 PM
 * Purpose: declaration of IntArry class
 */

#ifndef INTARRY_H
#define INTARRY_H

#include <vector>
#include <cstdlib>
#include <iostream>
using namespace std;

class IntArry {
private:
    vector<int> arry;//vector of integers
    int size;       
    int num;    //random number
    
public:
    IntArry(int);
    virtual ~IntArry();
    int &operator[](const int &);
    class CkIndex{ //class for out of bounds index
    public:
        CkIndex(int sub)
        {
            vector<int> badSub;
            badSub.push_back(sub); //hold bad index 
            for(vector<int>::iterator iter = badSub.begin(); iter < badSub.end();
                iter++)
            {
                cout << *iter << " ";
            }
        }
    };
};


#endif /* INTARRY_H */

