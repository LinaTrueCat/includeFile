#ifndef ADMIN_H
#define ADMIN_H

#include <string>

class Admin {
private:
    std::string password;
    std::string enteredPassword;
    bool isAdmin;
    std::string name;

public:
    Admin(std::string m_password, std::string m_name);
    ~Admin();
    void showStatus();
    void adminLogin();

    bool getIsAdmin() const;   

    friend std::ostream& operator<<(std::ostream& out, const Admin& admin);
};

#endif
