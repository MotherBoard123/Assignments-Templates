/* 
 * File:   main.cpp
 * Author: Brandon West
 * Created on November 29, 2017, 10:08 PM
 * Purpose: implementation of homework chapter 16
 */
#include "Date.h"
#include "SpVect.h"
#include "IntArry.h"
#include "Sort.h"
#include <cmath>
#include <cstdlib>

using namespace std;

//Prototypes for each problem
int dExpt();    //Program 1 Date exceptions
int tExpt();    //Program 2 Time format exceptions
int maxMin();   //Program 3 Max/Min Templates
int absVal();   //Program 4 Absolute Value Template
int fTot();     //Program 5 Get running total from input value
int sVect();    //Program 8 Simple vector modification
int sortVec();  //Program 10 Sortable Vector Class Template
int binSrch();  //Program 15 STL Binary search
int rFall();    //Program 13 Rainfall Vector
int vArray();   //Program 6 Class Exception

int main(int argc, char** argv) {
    
    char input;     //user program choice input
    cout << "Welcome Brandon West's Ch. 16 HW assignments" << endl;
    do
    {
        cout << "\nChoose which program to run (q to quit):" << endl << endl;
        cout << "a. Date Exceptions " << endl
             << "b. Time Format Exceptions" << endl
             << "c. Max/Min Templates" << endl
             << "d. Absolute Value Template" << endl
             << "e. Get Running Total from input" << endl
             << "f. Simple Vector Mod" << endl
             << "g. Sortable Vector Class Template" << endl
             << "h. STL Binary search" << endl
             << "j. Rainfall Vector" << endl
             << "k. Class Exception" << endl;
        cin >> input;
        
        switch(tolower(input))
        {
            case 'a': dExpt();
                      break;
            case 'b': tExpt();
                      break;
            case 'c': maxMin();
                      break;
            case 'd': absVal();
                      break;
            case 'e': fTot();
                      break;
            case 'f': sVect();
                      break;
            case 'g': sortVec();
                      break;
            case 'h': binSrch();
                      break;
            case 'j': rFall();
                      break;
            case 'k': vArray();
                      break;
            default: cout << "Enter number 1-10" << endl;
        }
        
    }while(toupper(input) != 'Q');
    
    cout << "Thank you.";
    
    return 0;;
}

//Date Exceptions Program 1
int dExpt()
{
    Date input;
    
    int month,day,year;
    
    cout << "\nEnter month (1-12):" << endl;
    cin >> month;
    
    cout << "Enter day:" << endl;
    cin >> day;
    
    cout << "Enter year:" << endl;
    cin >> year;
    
    cout << endl;
    
    try
    {
        //Print Month/Day/Year format
        input.pNumDate(month,day,year);

        //Print ex: December 12, 2017
        input.pStdDate(month,day,year);

        //Print MLA format date
        input.pMLADate(month,day,year);
    }
    catch(Date::Invalid)
    {
        cout << "INVALID entry." << endl;
    }
    cout << "Returning to main menu." << endl;
    
    return 0;
}

//Time Format Exceptions Program 2
int tExpt()
{
    //ran out of time.
    cout << "\nThis is the only program that I did not finish." << endl;
    return 0;
}

//Find min value template class function
template <class T>
T fMin(T num1,T num2)
{
    if(num1 < num2){
        return num1;
    }
    else return num2;
}

// Find max value template class function
template <class T>
T fMax(T num1,T num2)
{
    if(num1 > num2){
        return num1;
    }
    else return num2;
    
}

//Max Min templates main.cpp
int maxMin()
{
    int i,j,result;
    float f,l,result2;
    
    cout << "\nEnter two integer values to demonstrate template class:" << endl;
    cin >> i >> f;
    
    cout << "Enter two float values to demonstrate template class:" << endl;
    cin >> f >> l;
    //find Max
    result = fMin<int>(i,j);
    result2 = fMax<float>(f,l);
    cout << "The lesser integer value is " << result << endl;
    cout << "The greater float value is " << result2 << endl;
    
    return 0;
}

//Absolute value template class function
template <class T>
int abs(T num)
{
    return abs(num);
}

//Absolute value main.cpp Program 4
int absVal()
{
    int x;
    cout << "\nEnter a value to return absolute value" << endl;
    cin >> x;
    
    cout << "Absolute Value: " << abs(x) << endl;
    return 0;
}

//Running total template class function. Keep s running total of values entered
//by user Program 5
template <class T>
int total(T num1)
{
    T tot = 0;
    tot = tot + num1;
    
    return tot;
}

//Running total main.cpp
int fTot()
{
    int x,result1;
    float y = 1;
    float result2 = 0;
    
    cout << "\nEnter integers to get running total, enter 0 when done" << endl;
    while(x != 0)
    {
        cin >> x;
        result1 = total<int>(x);
        cout << "This is result: " << result1 << endl;
    }
    
    cout << "Enter floats to get running total, enter 0 when done" << endl;
    while(y != 0)
    {
        cin >> y;
        result2 = total<float>(y);
    }
    
    cout << "Integer total " << result1 << endl;
    cout << "Float total " << result2 << endl;
    
    return 0;
}

//Program 8 simple vector modification
int sVect()
{
    const int SIZE = 10;
    int count;
    int add = 2;
    float fAdd = 2.1;
    
    SpVect<int> intTab(SIZE);   //simple vector ints
    SpVect<float> fTab(SIZE);   //simple vector floats
    
    for(int i = 0;i < SIZE;i++)
    {
        intTab[i] = i * 2;
        fTab[i] = i * 2.14;
    }
    
    //Output values
    cout << "\nThese values are the intTab:" << endl;
    for(int i = 0;i < SIZE;i++)
    {
        cout << intTab[i] << " ";
    }
    cout << "\nThese values are in fTab:\n";
    for(int i = 0;i < SIZE;i++)
    {
        cout << fTab[i] << " ";
    }
    
    cout << endl << "Adding 5 to each element";
    for(int i = 0;i < SIZE;i++)
    {
        intTab[i] = intTab[i] + 5;
        fTab[i] = fTab[i] + 5;
    }
    
    //Output new values
    cout << "These values are the intTab:" << endl;
    for(int i = 0;i < SIZE;i++)
    {
        cout << intTab[i] << " ";
    }
    cout << "\nThese values are in fTab:\n";
    for(int i = 0;i < SIZE;i++)
    {
        cout << fTab[i] << " ";
    }
    
    return 0;
}

//Sortable Vector Class Template Program 10
int sortVec()
{
    int size = 10;
    
    Sort<int> intObj;
    
    intObj.sArray();
    intObj.output();
    
    return 0;
}

//STL binary search Program 15: User enter value returns account found or not
//using binary search and vector.
int binSrch()
{
    //Account check list
    vector<int> accCk = {5658845,4520125,7895122,8777541,8451277,
                        1302850,8080152,4562555,5552012,5050552,
                        7825877,1250255,1005231,6545231,3852085,
                        7576651,7881200,4581002};

    int userN;    //User Account number

    //Get account number
    cout << "\nEnter a Charge Account Number: ";
    cin >> userN;

    //Search Array
    if(binary_search(accCk.begin(),accCk.end(),userN))
    {
        cout << "Account number is Valid." << endl;
    }
    else cout << "Account number not valid.";

    return 0;
}

//Program 13 Rainfall Vector. Implement vector calculate average rainfall,
//lowest month, and highest month.
int rFall()
{
    const int MONTH = 12;       //total months
    float input = 0;            //User rainfall input
    vector<float> months;       //Hold rainfall for each month

    float totRain;
    float avgRain;		//Average Monthly rainfall for the year
    float highR;                //highest rainfall for year
    float lowRain;		//Lowest amount of rainfall for year
    float ckVal;		//Checks for Highest/Lowest
    int count;			//Accumulator for loop

    totRain = 0;
    avgRain = 0;

    //Get rainfall for each month
    for (count =0;count < MONTH;count++)
    {
            cout << "Enter rainfall for the month ";
            cout << count + 1 << endl;
            cin >> input;
            months.push_back(input);

            //Add value in each index to total rainfall
            totRain += months[count];
    }

    highR = months[0];
    lowRain = months[0];
    ckVal = 0;

    //Get highest and lowest
    for (count = 0;count < MONTH;count++)
    {
        ckVal = months[count];
        //Find highest rainfall
        if (ckVal < highR)
        {
                lowRain = months[count];
        }
        //Find lowest rainfall
        else if (ckVal > lowRain)
        {
                highR = months[count];
        }
    }

    //Calculate average rainfall
    avgRain = totRain / MONTH;

    //OUTPUT results
    cout << setprecision(2) << fixed << showpoint;
    cout << "Rainfall Statistics for 12 Months" << endl;
    cout << right << endl;
    cout <<	"Total Rainfall: " << setw(16) << totRain << endl;
    cout << "Average Rainfall: " << setw(13) << avgRain << endl;
    cout << "\nHighest Amount of Rainfall: \n"
             << highR << endl;
    cout << "\nLowest Amount of Rainfall: \n"
             << lowRain << endl;
    return 0;
}

//Program 6 IntArray Class Exception: Use vector and throw exception
vArray()
{
    int size = 10;
    IntArry array(size);
    cout << "\nThis program alters the IntArry class to use vectors." << endl
         << "If the index is out of bounds, the program collects that "
         << "index in separate vector." << endl;
    
    //Demonstrate out of bounds 
    array[size + 5];
    
    return 0;
}