#include <iostream>
#include <string>

#include "bank_account.h"
#include "account_management.h"

int main() {
    BankAccount bank;
    bank.createAccount();
    bank.displayAccountInfo();


    return 0;
}