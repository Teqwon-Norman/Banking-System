#include <string>

#ifndef BANK_ACCOUNT_H
#define BANK_ACCOUNT_H

class Bank_Account {
private:
    struct UserInfo {
        std::string username;
        std::string password;
    };

    struct PersonalInfo {
        std::string fullName;
        int age {};
        std::string dob;
        std::string socialSecurity;
        std::string email;
        std::string cellNumber;
        std::string address;
        UserInfo info;
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
    void displayAccountInfo();
};
#endif
