//
// Created by USER on 2/17/2023.
//

// Implementation file for the Account class.

#include "Account.h"
#include <string>
#include <cstring>
#include <iostream>
#include <ctime>
#include <cstdlib>


Account::Account() {
    srand(time(NULL)); // seed the random number generator with the current time
    std::string accNumber = "0"; // initialize the account number with a starting digit of 0

    for (int i = 1; i < 10; i++)
    {
        int digit = rand() % 10; // generate a random digit between 0 and 9
        accNumber += std::to_string(digit); // add the digit to the account number
    }
    }


bool Account::withdraw(double amount) {
    if (balance < amount)
        return false; // Not enough cash in the account.
    else
    {
        balance -= amount;
        transactions++;
        return true;
    }
}

