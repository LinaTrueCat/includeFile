#ifndef DOCTOR_CLASS
#define DOCTOR_CLASS

#include <string>
#include <vector>

class DoctorClass {
private:
    std::string surname;

    // статичний список лікарів
    static std::vector<DoctorClass> doctorsList;

public:
    DoctorClass() = default;
    DoctorClass(std::string s) : surname(s) {}

    void showDoctorsSurname() const;
    void addDoctorsSurname();

    // нові методи:
    static void addDoctor();        // додає нового лікаря у список
    static void showAllDoctors();   // показує всіх лікарів
};

#endif
