//
// Created by USER on 2/17/2023.
//

#include <iostream>
#include <string>
#include <iomanip>
#include "Account.h"
#include "functions.h"
#include <sstream>
#include <algorithm>
#include <cstdint>
#include <windows.h>

void displayWelcome()
{
    auto stdout_handle = GetStdHandle(STD_OUTPUT_HANDLE);
    std::string str;

    CONSOLE_SCREEN_BUFFER_INFO oldcsbi{};
    COORD coord{};

// THIS WILL HELP TO EXIT THE OUTPUT LOOP.
    std::string myString = "";
    bool exit = 0;
    std::cout << "Press ENTER to continue to the Main Menu after the Welcome page." << std::endl;
    std::system("pause > 0");

    std::getline(std::cin, myString);
    if(myString.length() != 0)
        exit = 1;

    do
    {
        CONSOLE_SCREEN_BUFFER_INFO csbi;
        GetConsoleScreenBufferInfo(stdout_handle, &csbi);
        if (csbi.srWindow.Bottom != oldcsbi.srWindow.Bottom || csbi.srWindow.Right != oldcsbi.srWindow.Right)
        {
            std::fill(str.begin(), str.end(), ' ');
            SetConsoleCursorPosition(stdout_handle, coord);
            std::cout << str; // clear the old text
            oldcsbi = csbi;
            std::ostringstream s;

            s << "******** Welcome to WinBank ******** \n";
            str = s.str();
            coord.X = (short)((csbi.srWindow.Right - str.size()) / 2);
            coord.Y = (short)(csbi.srWindow.Bottom/2);
            SetConsoleCursorPosition(stdout_handle, coord);
            std::cout << str; // draw the new text
        }
        Sleep(1000);
    }
    while (exit == 0);

    std::system("pause > 0");
}

std::string userIn(std::string in)
{
    std::string userInput ;
    std::cout << "\nEnter Your Account number. If you are a new customer with us,\n"
              << "input \" new \" to create a new account." << std::endl;
    std::cin >> userInput;
    return userInput;
}



void displayTransactionMenu()
{
    std::cout << "\n                    MENU                   "
              << "\n-------------------------------------------";
    std::cout << "A) Display the account balance\n";
    std::cout << "B) Display the number of transactions\n";
    std::cout << "C) Display interest earned for this period\n";
    std::cout << "D) Make a deposit\n";
    std::cout << "E) Make a withdrawal\n";
    std::cout << "F) Add interest for this period\n";
    std::cout << "G) Exit the program\n\n";
    std::cout << "Enter your choice: ";
}





