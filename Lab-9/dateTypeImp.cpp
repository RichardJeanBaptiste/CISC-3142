#include <iostream>
#include "dateType.h"

using namespace std;

void dateType::setDate(int month, int day, int year){
    dMonth = month;
    dDay = day;
    dYear = year;
};
    //Function to set the date.
    //The member variables dMonth, dDay, and dYear are set  
    //according to the parameters.
    //Postcondition: dMonth = month; dDay = day;
    //               dYear = year

int dateType::getDay() const{
    return dDay;
};
    //Function to return the day.
    //Postcondition: The value of dDay is returned.

int dateType::getMonth() const{
    return dMonth;
};
    //Function to return the month.  
    //Postcondition: The value of dMonth is returned.

int dateType::getYear() const{
    return dYear;
};
    //Function to return the year.     
    //Postcondition: The value of dYear is returned.

void dateType::printDate() const{
    cout << getMonth() << "-" << getDay() << "-" << getYear() << "\n";
};
    //Function to output the date in the form mm-dd-yyyy.

dateType::dateType(int month = 1, int day = 1, int year = 1900){
    dMonth = month;
    dYear = year;
    dDay = day;
};
    //Constructor to set the date
    //The member variables dMonth, dDay, and dYear are set 
    //according to the parameters.
    //Postcondition: dMonth = month; dDay = day; dYear = year;
    //               If no values are specified, the default 
    //               values are used to initialize the member
    //               variables.