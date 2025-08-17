#include "admin.h"
#include <iostream>

Admin::Admin(std::string m_password, std::string m_name)
    : password(m_password), name(m_name), isAdmin(false)  
{
    std::cout << "Admin created: " << name << std::endl;
}

Admin::~Admin()
{
    std::cout << "Admin destroyed: " << name << std::endl;
}

void Admin::showStatus()
{
    std::cout << "Admin name: " << name << ", Password: " << password << std::endl;
}

std::ostream& operator<<(std::ostream& out, const Admin& admin)
{
    out << "Admin (password: " << admin.password << " name: " << admin.name << ")" << "\n";
    return out;
}

void Admin::adminLogin()
{
    std::cout << "Enter password \n";
    std::cin >> enteredPassword;

    if (enteredPassword == password) {
        std::cout << "Hi admin \n";
        isAdmin = true;    
    }
    else {
        std::cout << "Wrong password \n";
        isAdmin = false;   
    }
}

bool Admin::getIsAdmin() const {
    return isAdmin;     
}
