#ifndef PATIENT_CLASS
#define PATIENT_CLASS

#include "dateClass.h"
#include <string>

class PatientClass {
private:
    DateClass birthDate;

public:
    std::string name;
    std::string surname;
    std::string diagnosis;

    void showPatientsSurname();
    void addPatientsSurname();
};

#endif
