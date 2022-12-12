#ifndef BANK_ACCOUNT_H
#define BANK_ACCOUNT_H

#include <string>

class BankAccount {
private:
    struct UserCredentials {
        std::string username;
        std::string password;
    };

    struct PersonalInfo {
        std::string first;
        std::string last;
        int age {};
        std::string socialSecurity;
        std::string dob;
        std::string email;
        std::string cellNumber;
        std::string address;
        UserCredentials credentials;
    };

    std::string financialInstitution;
    long int checkingAccount;
    long int savingsAccount;

public:
    // struct instance which also mapped to the users login-credentials
    PersonalInfo personal;
    BankAccount(); // constructor

    void createAccount();
    void displayAccountInfo() const;
    void storeNewAccount();
};
#endif
