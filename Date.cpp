/* 
 * File:   date.cpp
 * Author: Brandon West
 * Created on November 29, 2017, 10:08 PM
 * Purpose: implementation of Date class
 */

#include "Date.h"
#include <iostream>

using namespace std;

//Print date format: 12/12/2017

void Date::pNumDate(int m, int d, int y)
{
    if(m < 1 || m > 12)
    {
        throw Invalid(); //if outside 12 month period
    }
    if(d < 1 || d > 31)
    {
        throw Invalid();
    }
    
    cout << m << "/" << d << "/" << y << endl; 
}

//Print date format: December 31,2017

void Date::pStdDate(int m, int d, int y)
{
    string month;
    
    //Determine month string
    switch(m)
    {
        case 1: month = "January";
                break;
        case 2: month = "February";
                break;
        case 3: month = "March";
                break;
        case 4: month = "April";
                break;
        case 5: month = "May";
                break;
        case 6: month = "June";
                break;
        case 7: month = "July";
                break;
        case 8: month = "August";
                break;
        case 9: month = "September";
                break;
        case 10: month = "October";
                break;
        case 11: month = "November";
                break;
        case 12: month = "Demember";
                break;
    }
    
    cout << month << " " << d << "," << y << endl;
    
}

void Date::pMLADate(int m, int d, int y)
{
    string month;
    
    //Determine month string
    switch(m)
    {
        case 1: month = "January";
                break;
        case 2: month = "February";
                break;
        case 3: month = "March";
                break;
        case 4: month = "April";
                break;
        case 5: month = "May";
                break;
        case 6: month = "June";
                break;
        case 7: month = "July";
                break;
        case 8: month = "August";
                break;
        case 9: month = "September";
                break;
        case 10: month = "October";
                break;
        case 11: month = "November";
                break;
        case 12: month = "December";
                break;
    }
    
    cout << d << " " << month << " " << y << endl;
}

