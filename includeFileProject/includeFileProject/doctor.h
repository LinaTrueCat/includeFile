#ifndef DOCTOR_CLASS
#define DOCTOR_CLASS

#include <string>

class DoctorClass {
public:
    std::string surname;

    DoctorClass() = default;                    // конструктор за замовчуванням
    DoctorClass(std::string s) : surname(s) {}  // конструктор з параметром

    void showDoctorsSurname();
    void addDoctorsSurname();
};

#endif
