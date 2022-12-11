#include <iostream>
#include <string>
#include "bank_account.h"

void Bank_Account::createAccount() {
    std::string NAME, DOB, SOCIALSECURITY, EMAIL, NUMBER, ADDR;
    int AGE;

    std::cout << "***************************************************************" << std::endl;
    std::cout << "******************** BANK ACCOUNT SIGN-UP *********************" << std::endl;
    std::cout << "***************************************************************" << std::endl;

    std::cout << " # Please enter your full name (format: <First>[space]<Last>)!!: " << std::endl;
    std::getline(std::cin, NAME);
    personal.fullName = NAME;

    std::cout << " # Please enter your date of birth (format: mm/dd/yyyy)!!: " << std::endl;
    std::getline(std::cin, DOB);
    personal.dob = DOB;

    std::cout << " # Please enter your social security (format: 111-111-1111): " << std::endl;
    std::getline(std::cin, SOCIALSECURITY);
    personal.socialSecurity = SOCIALSECURITY;

    std::cout << " # Please enter your email: " << std::endl;
    std::getline(std::cin, EMAIL);
    personal.email = EMAIL;

    std::cout << " # Please enter your cell number (format: 111-111-1111)!!: " << std::endl;
    std::getline(std::cin, NUMBER);
    personal.cellNumber = NUMBER;

    std::cout << " # Please enter your home address: " << std::endl;
    std::getline(std::cin, ADDR);
    personal.address = ADDR;

    std::cout << " # Please enter your age: " << std::endl;
    std::cin >> AGE;
    personal.age = AGE;

    std::cout << "***************************************************************" << std::endl;
    std::cout << "***************************************************************\n" << std::endl;

    std::string username, password;
    std::cout << " # Please enter a username for your account: " << std::endl;
    std::getline(std::cin, username);
    personal.info.username = username;
    std::cout << " # Please enter a password for your account: " << std::endl;
    std::getline(std::cin, password);
    personal.info.password = password;
}

void Bank_Account::displayAccountInfo() {
    std::cout << "\n**************************************" << std::endl;
    std::cout << "Displaying Account Information Below..." << std::endl;
    std::cout << "***************************************" << std::endl;
    std::cout << "Name: " << personal.fullName << std::endl;
    std::cout << "Age: " << personal.age << std::endl;
    std::cout << "DOB: " << personal.dob << std::endl;
    std::cout << "Social Security: " << personal.socialSecurity << std::endl;
    std::cout << "Email: " << personal.email << std::endl;
    std::cout << "Cell Number: " << personal.cellNumber << std::endl;
    std::cout << "Address: " << personal.address << std::endl;
    std::cout << "***************************************" << std::endl;
    std::cout << "***************************************\n" << std::endl;

    std::string privacy;
    std::cout << "Would you like your username and password to fully displayed? (y or n)" << std::endl;
    std::cin >> privacy;
    if (privacy == "y" || privacy == "yes") {
        std::cout << "Username: " << personal.info.username << std::endl;
        std::cout << "Password: " << personal.info.password << std::endl;
    } else {
        std::cout << "Username: " << "*****" << std::endl;
        std::cout << "Password: " << "*****" << std::endl;
    }
};
