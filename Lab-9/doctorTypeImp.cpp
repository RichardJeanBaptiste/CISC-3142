#include <iostream>
#include <string>
#include "doctorType.h"

using namespace std;

doctorType::doctorType(string type){
    speciality = type;
}

string doctorType::getSpeciality() const {
    return speciality;
}

void doctorType::setSpeciality(string x){
    speciality = x;
}


