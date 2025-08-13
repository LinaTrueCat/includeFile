#include "dateClass.h"
#include "doctor.h"
#include "patientClass.h"
#include "admin.h"
#include <iostream>
#include <fstream>
int main()
{
    DateClass today{ 12, 11, 2018 };
    today.addDate();

    DoctorClass first{};
    first.addDoctorsSurname();
    first.showDoctorsSurname();

    DoctorClass second{ "Shmakova" };
    second.showDoctorsSurname();

    PatientClass tra{};
    tra.addPatientsSurname();
    tra.showPatientsSurname();

    Admin a("1234", "John");
    a.showStatus();

    ofstream file("passwords.txt", ios_base::out);
    if (file.is_open()) {
        file << a;
    }

    return 0;
}
