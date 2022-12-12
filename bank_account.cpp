#include <iostream>
#include <string>
#include <fstream>
#include <assert.h>
#include "bank_account.h"

BankAccount::BankAccount() {
    personal.first = "";
    personal.last = "";
    personal.age = 18;
    personal.dob = "";
    personal.socialSecurity = "";
    personal.email = "";
    personal.cellNumber = "";
    personal.address = "";
}

void BankAccount::createAccount() {
    std::string FIRST, LAST, DOB, SOCIALSECURITY, EMAIL, NUMBER, ADDR;
    int AGE;

    std::cout << "***************************************************************" << std::endl;
    std::cout << "******************** BANK ACCOUNT SIGN-UP *********************" << std::endl;
    std::cout << "***************************************************************" << std::endl;

    std::cout << "Please enter your first name:" << std::endl;
    std::getline(std::cin, FIRST);
    personal.first = FIRST;

    std::cout << "Please enter your last name:" << std::endl;
    std::getline(std::cin, LAST);
    personal.last = LAST;

    std::cout << "Please enter your date of birth (format: mm/dd/yyyy):" << std::endl;
    std::cin >> DOB;
    std::cin.ignore();
    personal.dob = DOB;

    std::cout << "Please enter your social security (format: 111-11-1111):" << std::endl;
    std::cin >> SOCIALSECURITY;
    std::cin.ignore();
    personal.socialSecurity = SOCIALSECURITY;

    std::cout << "Please enter your email:" << std::endl;
    std::cin >> EMAIL;
    std::cin.ignore();
    personal.email = EMAIL;

    std::cout << "Please enter your cell number (format: 111-111-1111):" << std::endl;
    std::cin >> NUMBER;
    std::cin.ignore();
    personal.cellNumber = NUMBER;

    std::cout << "Please enter your home address:" << std::endl;
    std::getline(std::cin, ADDR);
    personal.address = ADDR;

    std::cout << "Please enter your age: " << std::endl;
    std::cin >> AGE;
    std::cin.ignore();
    personal.age = AGE;

    std::cout << "***************************************************************" << std::endl;
    std::cout << "***************************************************************\n" << std::endl;

    std::string username, password;
    std::cout << "Please enter a username for your account:" << std::endl;
    std::cin >> username;
    std::cin.ignore();
    personal.credentials.username = username;

    std::cout << "Please enter a password for your account:" << std::endl;
    std::cin >> password;
    std::cin.ignore();
    personal.credentials.password = password;
}

void BankAccount::displayAccountInfo() const {
    std::cout << "\n**************************************" << std::endl;
    std::cout << "Displaying Account Information Below..." << std::endl;
    std::cout << "***************************************" << std::endl;
    std::cout << "Name: " << personal.first + " " + personal.last << std::endl;
    std::cout << "Age: " << personal.age << std::endl;
    std::cout << "DOB: " << personal.dob << std::endl;
    std::cout << "Social Security: " << "***-**-" << personal.socialSecurity.substr(7, 10) << std::endl;
    std::cout << "Email: " << personal.email << std::endl;
    std::cout << "Cell Number: " << personal.cellNumber << std::endl;
    std::cout << "Address: " << personal.address << std::endl;
    std::cout << "***************************************" << std::endl;
    std::cout << "***************************************\n" << std::endl;

    std::string privacy;
    std::cout << "Would you like your username and password to be fully displayed? (y or n) " << std::endl;
    std::cin >> privacy;
    std::cin.ignore();

    if (privacy == "y" || privacy == "yes") {
        std::cout << "Username: " << personal.credentials.username << std::endl;
        std::cout << "Password: " << personal.credentials.password << std::endl;
    }
}

void BankAccount::storeNewAccount() {
    std::string accountInfo [8] {
        personal.first,
        personal.last,
        std::to_string(personal.age),
        personal.dob,
        personal.socialSecurity,
        personal.email,
        personal.cellNumber,
        personal.address
    };

    for (const auto & i : accountInfo)
    {
        std::cout << i << std::endl;
    }

//    std::fstream file;
//    file.open(personal.first, std::fstream::out);
//    assert(file.is_open());
}