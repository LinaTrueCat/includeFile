#include "doctor.h"
#include <iostream>

void DoctorClass::showDoctorsSurname() {
    std::cout << "doctor's surname is " << surname << '\n';
}

void DoctorClass::addDoctorsSurname() {
    std::cout << "print doctor's surname " << '\n';
    std::cin >> surname;
}
