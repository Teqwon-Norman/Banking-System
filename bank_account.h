#include <string>

#ifndef BANK_ACCOUNT_H
#define BANK_ACCOUNT_H

class Bank_Account {
private:
    struct UserCredentials {
        std::string username;
        std::string password;
    };

    struct PersonalInfo {
        std::string fullName;
        int age {};
        std::string socialSecurity;
        std::string dob;
        std::string email;
        std::string cellNumber;
        std::string address;
        UserCredentials credentials;
    };

    long int checkingAccount;
    long int savingsAccount;

public:
    PersonalInfo personal;
    Bank_Account(long int checking, long int savings)
    {
        checkingAccount = checking;
        savingsAccount = savings;
    };
    void createAccount();
    void displayAccountInfo() const;
};
#endif
