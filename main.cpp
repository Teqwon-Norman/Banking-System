#include <iostream>
#include <string>

#include "bank_account.h"

int main() {
    BankAccount bank;
    bank.createAccount();
    bank.displayAccountInfo();
    bank.storeNewAccount();


    return 0;
}