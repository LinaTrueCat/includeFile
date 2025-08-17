#include "doctor.h"
#include <iostream>
using namespace std;

// оголошення статичного вектора
std::vector<DoctorClass> DoctorClass::doctorsList;

void DoctorClass::showDoctorsSurname() const {
    std::cout << "Doctor's surname is " << surname << '\n';
}

void DoctorClass::addDoctorsSurname() {
    std::cout << "Enter doctor's surname: ";
    std::cin >> surname;
}

// додає нового лікаря у список
void DoctorClass::addDoctor() {
    DoctorClass doc;
    doc.addDoctorsSurname();
    doctorsList.push_back(doc);
}

// показує список усіх лікарів
void DoctorClass::showAllDoctors() {
    if (doctorsList.empty()) {
        std::cout << "No doctors added yet.\n";
    } else {
        std::cout << "Doctors list:\n";
        for (size_t i = 0; i < doctorsList.size(); i++) {
            std::cout << i + 1 << ". ";
            doctorsList[i].showDoctorsSurname();
        }
    }
}
