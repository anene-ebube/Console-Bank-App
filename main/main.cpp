

#include <iostream>
#include <iomanip>
#include <cctype>
#include <fstream>
#include "Account.h"
#include "functions.h"

// All necessary functions are included from the functions.h file.
// All implementations for these functions are contained in the functions.cpp file.

int main()
{
    displayWelcomeScreen();
    displayTransactionMenu();
    userInput();

    std::fstream bankDataBase;     // file to store all customers' data.

    if (userInput == "new")
    {
        Account newUser;

        std::cout << "Kindly input the ACCOUNT Name.\n";

        do
        {
            std::cout << "\nACCOUNT NAME: ";
            std::cin.ignore();
            std::getline(std::cin, userInput);
            if (userInput.length() == 0)
                std::cout << "\n**INVALID ACCOUNT NAME**";

            // Ensure User input is not already in database.
            bankDataBase.open("bankDataBase", std::ios::in | std::ios::binary)
            if (!bankDataBase)
            {
                std::cout << "Error Initializing Account";
                return 0;
            }

            while (userInput != )
                bankDataBase.seekg()
            if ()

        }
        while (userInput.length() == 0);

        newUser.setAccName(userInput);
        unsigned int newNumber = newUser.getAccNumber();




        // Save customer data to bank database.


        //Displaying new user account
        std::cout << "Congrats, you've successfully created a new account "
                  << "\nwith us. \n";




    }

    userIn();
    displayMenu();


}
