#ifndef H_patientType
#define H_patientType

#include "personType.h"
#include "dateType.h"
#include "doctorType.h"
#include <string>
 
using namespace std; 

class patientType: public personType {

    public:
        
        void setPatientId(string x);
        string getPatientId() const;

        void setAge(string x);
        string getAge();

        void setDateOfBirth(int m, int d, int y );
        dateType getDateOfBirth();

        void setDateAdmitted(int m, int d, int y );
        dateType getDateAdmitted();

        void setDateDischarged(int m, int d, int y);
        dateType getDateDischarged();

        void setAttendingName(string x, string y);
        doctorType getAttendingName();

        patientType();

    private:
        string patientId,age;
        dateType dateOfBirth, dateAdmitted, dateDischarged;
        doctorType attendingName;
};

#endif