/* 
 * File:   main.cpp
 * Author: Brandon West
 * Created on October 17, 2017, 8:24 PM
 * Purpose: Class design of 3 integers: month,day,year. Program calls funtions
 * to display to print 3 different date styles.
 */

#ifndef DATE_H
#define DATE_H
#include <iostream>
#include <iomanip>
class Date
{
private:
    int month, day, year;

public:
    void pNumDate(int,int,int);
    void pStdDate(int,int,int);
    void pMLADate(int,int,int);  
    class Invalid {};
};


#endif /* DATE_H */
