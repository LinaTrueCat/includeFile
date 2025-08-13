#include "patientClass.h"
#include <iostream>

void PatientClass::showPatientsSurname() {
    std::cout << "patient's surname is " << surname << '\n';
}

void PatientClass::addPatientsSurname() {
    std::cout << "print patient's surname " << '\n';
    std::cin >> surname;
}
