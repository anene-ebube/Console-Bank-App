//
// Created by USER on 2/17/2023.
//

#ifndef BANKAPP_ACCOUNT_H
#define BANKAPP_ACCOUNT_H
#include <string>

class Account {
private:
    std::string accName;                // Account name.
    unsigned int accNumber;      // Account number.
    double balance;                // Account balance.
    double interestRate;          // Interest rate for the period.
    double interest;             // Interest earned during the period.
    int transactions;           // Number of transactions

public:
    Account (std::string name = " ", double bal = 0)
    {   accName = name;
        accNumber = 0;
        balance = bal;
        interestRate = 0.045;
        interest = 0;
        transactions = 0; }

    std::string setAccName ( std::string AccountName)
    { accName = AccountName; }

    std::string setAccNumber();        // Defined in Account.cpp

    void setInterestRate (double iRate)
        { interestRate = iRate; }

    void makeDeposit (double amount)
        { balance += amount; transactions++; }

    bool withdraw (double amount);      // Defined in Account.cpp

    void calcInterest()
    { interest = balance * interestRate; balance += interest; }

    double getInterestRate() const
    { return interestRate; }

    std::string getAccName()
    { return accName; }

    unsigned int getAccNumber()
    { return accNumber; }


};


#endif //BANKAPP_ACCOUNT_H
