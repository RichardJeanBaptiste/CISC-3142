#include <iostream>
#include "personType.h"

#include <string>

using namespace std;

void personType::print() const{
    cout << "First Name: "<< getFirstName() << "Last Name: " << getLastName() << "\n";
}

void personType::setName(string first, string last) {
    firstName = first;
    lastName = last;
}

string personType::getFirstName() const{
    return firstName;
}
    //Function to return the first name.
    //Postcondition: The value of the data member firstName
    //               is returned.

string personType::getLastName() const{
    return lastName;
}
    //Function to return the last name.
    //Postcondition: The value of the data member lastName
    //               is returned.


personType::personType(string first = "", string last = ""){
    firstName = first;
    lastName = last;
};
    //constructor
    //Sets firstName and lastName according to the parameters.
    //The default values of the parameters are empty strings.
    //Postcondition: firstName = first; lastName = last  