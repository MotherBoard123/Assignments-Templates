/* 
 * File:   MilTime.h
 * Author: Brandon West
 * Created on November 29, 2017, 10:08 PM
 * Purpose: Declaration MilTime Class
 */

#ifndef MILTIME_H
#define MILTIME_H

#include "Time.h"

class MilTime : public Time {
private:
    int milHrs;
    int sec;
public:
    MilTime();
    MilTime(const MilTime& orig);
    virtual ~MilTime();

};

#endif /* MILTIME_H */

