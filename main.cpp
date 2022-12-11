#include <iostream>
#include <string>
#include "bank_account.h"

int main() {
    // test out bank_account class to make sure our fields get stored properly
    Bank_Account bank(1000, 5000);
    bank.createAccount();
    bank.displayAccountInfo();

    return 0;
}