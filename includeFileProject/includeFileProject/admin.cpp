#include "admin.h"
#include <iostream>

Admin::Admin(std::string m_password, std::string m_name)
    : password(m_password), name(m_name)
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
