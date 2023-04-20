#ifndef H_doctorType
#define H_doctorType

#include "personType.h"
#include <string>
 
using namespace std; 

class doctorType: public personType {

    public:
        doctorType(string type = "");

        string getSpeciality() const;

        void setSpeciality(string x);

    private:
        string speciality; 
};

#endif