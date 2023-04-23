#ifndef H_billType
#define H_billType

#include <string>
 
using namespace std; 

class billType
{
public:

    void setPatientId(string x);
    string getPatientId() const;

    void setMedicineFee(double x);
    double getMedicineFee() const;

    void setRoomCharge(double x);
    double getRoomCharge() const;


    billType(double rCharge = 0 , double mfee = 0, double dfee = 0, string id = "");

 private:
    string patientID;
    double medicineFee;
    double docFee;
    double roomCharge;
};

#endif