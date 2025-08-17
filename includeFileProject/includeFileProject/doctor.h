#ifndef DOCTOR_CLASS
#define DOCTOR_CLASS

#include <string>
#include <vector>

class DoctorClass {
private:
    std::string surname;

    // ��������� ������ �����
    static std::vector<DoctorClass> doctorsList;

public:
    DoctorClass() = default;
    DoctorClass(std::string s) : surname(s) {}

    void showDoctorsSurname() const;
    void addDoctorsSurname();

    // ��� ������:
    static void addDoctor();        // ���� ������ ����� � ������
    static void showAllDoctors();   // ������ ��� �����
};

#endif
