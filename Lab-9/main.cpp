#include <iostream>
#include "dateType.h"
#include "personType.h"
#include "billType.h"
#include "patientType.h"
#include "doctorType.h"

using namespace std;

int main() {
    
    // Person Class props
    patientType patient1;
    patient1.setName("Rich", "Jean");

    // Patient class props
    patient1.setPatientId("1234567");
    patient1.setAge("24");
    patient1.setAttendingName("Basak", "Taylan");
    patient1.setDateAdmitted(4,12,2023);
    patient1.setDateDischarged(4,23,2023);


    // Bill Class Props
    billType hospitalBill;
    hospitalBill.setPatientId("1234567");
    hospitalBill.setMedicineFee(243.57);
    hospitalBill.setRoomCharge(50);


    // Print Patient Info
    cout << "Patient Name: ";
    patient1.print();
    
    cout << "Patient Info \n";
    cout << "Patient Id: " << patient1.getPatientId() << "\n";
    cout << "Age: " << patient1.getAge() << "\n";
    cout << "Attending Name: ";
    patient1.getAttendingName().print();
    cout << "\nDate Admitted: ";
    patient1.getDateAdmitted().printDate();
    cout << "Date Discharged: ";
    patient1.getDateDischarged().printDate();

    // Print Bill Info
    cout << "Billing Info \n";
    cout << "Patient Id: " << hospitalBill.getPatientId() << "\n";
    cout << "Medical Fees: " << hospitalBill.getMedicineFee() << "\n";
    cout << "Room Charge: " << hospitalBill.getRoomCharge() << "\n";


}