#include <iostream>
#include <string>
#include "patientType.h"

using namespace std;

void patientType::setPatientId(string x) {
    patientId = x;
}


string patientType::getPatientId() const{
    return patientId;
};

void patientType::setAge(string x){
    age = x;
};

string patientType::getAge(){
    return age;
};

void patientType::setDateOfBirth(int m, int d, int y ){
    dateOfBirth.setDate(m , d, y);
};


dateType patientType::getDateOfBirth(){
    return dateOfBirth;
};


void patientType::setDateAdmitted(int m, int d, int y ){
    dateAdmitted.setDate(m, d, y);
};

dateType patientType::getDateAdmitted(){
    return dateAdmitted;
};

void patientType::setDateDischarged(int m, int d, int y){
    dateDischarged.setDate(m, d, y);
};

dateType patientType::getDateDischarged(){
    return dateDischarged;
};

void patientType::setAttendingName(string x, string y){
    attendingName.setName(x, y);
};


doctorType patientType::getAttendingName(){
    return attendingName;
};

patientType::patientType(){

};

