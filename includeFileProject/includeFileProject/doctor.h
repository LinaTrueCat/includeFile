#ifndef DOCTOR_CLASS
#define DOCTOR_CLASS

#include <string>

class DoctorClass {
public:
    std::string surname;

    DoctorClass() = default;                    // ����������� �� �������������
    DoctorClass(std::string s) : surname(s) {}  // ����������� � ����������

    void showDoctorsSurname();
    void addDoctorsSurname();
};

#endif
