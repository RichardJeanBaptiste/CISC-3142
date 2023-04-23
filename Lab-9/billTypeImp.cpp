#include <iostream>
#include "billType.h"

#include <string>

using namespace std;

billType::billType(double rCharge, double mfee, double dfee, string id){
    roomCharge = rCharge;
    medicineFee = mfee;
    docFee = dfee;
    patientID = id;
};


void billType::setPatientId(string x){
    patientID = x;
};


string billType::getPatientId() const{
    return patientID;
};

void billType::setMedicineFee(double x){
    medicineFee = x;
};

double billType::getMedicineFee() const{
    return medicineFee;
};

void billType::setRoomCharge(double x){
    roomCharge = x;
};

double billType::getRoomCharge() const{
    return roomCharge;
};

