//
// Created by USER on 2/17/2023.
//

#ifndef BANKAPP_ACCOUNT_H
#define BANKAPP_ACCOUNT_H
#include <string>
const double intRate = 0.0045;

class Account {
private:
    std::string accName;                            // Account name.
    std::string accNumber;                         // Account number.
    double balance;                               // Account balance.
    double interestRate;                         // Interest rate for the period.
    double interest;                            // Interest earned during the period.
    unsigned short int transactions;           // Number of transactions

public:
    //Constructor:
    Account (): accName(" "), accNumber(" "),
        balance(0), interestRate(intRate), interest(0), transactions(0){}

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
