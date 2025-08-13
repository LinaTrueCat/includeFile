#ifndef ADMIN_H
#define ADMIN_H

#include <string>

class Admin {
private:
    std::string password;
    std::string name;
public:
    Admin(std::string m_password, std::string m_name); // конструктор
    ~Admin();                                           // деструктор
    void showStatus();                                  // метод

    friend std::ostream& operator<<(std::ostream& out, const Admin& admin);

};

#endif
