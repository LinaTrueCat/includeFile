#include "dateClass.h"
#include "doctor.h"
#include "patientClass.h"
#include "admin.h"
#include <iostream>
#include <fstream>
#include <vector>

using namespace std;

int main()
{
  /*  DateClass today{ 12, 11, 2018 };
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
    }*/
    
    //cout << "type number" << "/n";
    //let number;
    //cin >> number;

    //switch (2)
    //{
    //case 1: // �� ���������!
    //    std::cout << 1 << '\n'; // ������������
    //case 2: // �������!
    //    std::cout << 2 << '\n'; // ���������� ���� ���������� �����
    //case 3:
    //    std::cout << 3 << '\n'; // ��� ����� ����������
    //case 4:
    //    std::cout << 4 << '\n'; // � ���
    //default:
    //    std::cout << 5 << '\n'; // � ���
    //}

    DoctorClass doctor;   // ��������� �ᒺ�� ����� DoctorClass
    Admin a("1234", "John");

    int choice = 0;
    do {
        cout << "\n MENU \n";
        cout << "1. Add doctor's surname \n";
        cout << "2. Show doctor's surname \n";
        cout << "3. Login as admin \n";
        cout << "0. Exit \n";
        cin >> choice;

        switch (choice) {
        
        case 2:
            DoctorClass::showAllDoctors();
            break;
        case 3:
            a.adminLogin();
            break;
        case 0:
            cout << "Exit\n";
            break;  
        case 1:
            if (a.getIsAdmin()) {  
                DoctorClass::addDoctor();
            }
            else {
                std::cout << "Access denied. Only admin can add doctors.\n";
            }
            break;
        default:
            cout << "Wrong choice. Try other number\n";
        }
    } while (choice != 0);

    int adminChoice;

    if (a.getIsAdmin()) {

        do {
            cout << "\n MENU \n";
            cout << "1. Add doctor's surname \n";
            cout << "2. Show doctor's surname \n";
            cout << "3. Login as admin \n";
            cout << "0. Exit \n";
            cin >> adminChoice;

            switch (adminChoice) {
            case 1:
                cout << "hhh \n";
                break;
            case 2:
                cout << "show doctor \n";
                break;
            case 3:
                cout << "login admin \n";
                break;
            case 0:
                cout << "Exiting...\n";
                break;
            default:
                cout << "Invalid choice!\n";
            }

        } while (adminChoice != 0);
    }
    else {
        std::cout << "Access denied. Only admin can add doctors.\n";
    }


    return 0;
}