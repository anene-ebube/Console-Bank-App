//
// Created by USER on 2/17/2023.
//

#include "functions.h"

void displayWelcomeScreen()
{
    // Set the console color to white on blue background
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(hConsole, 15 );

    // Display the welcome message
    std::cout << "=====================================" << '\n';
    std::cout << "              WinBank                " << '\n';
    std::cout << "=====================================" << '\n';

    // Wait for 3 seconds before clearing the console
    Sleep(3000);

    // Clear the console
    system("cls");
}

void displayTransactionMenu()
{
    std::cout << "\n                    MENU                   "
              << "\n-------------------------------------------";
    std::cout << "A) Display account balance\n";
    std::cout << "B) Make a deposit\n";
    std::cout << "C) Make a withdrawal\n";
    std::cout << "D) Add interest for this period\n";
    std::cout << "E) Display number of completed transactions on the account\n";
    std::cout << "F) Display interest earned for this period\n";
    std::cout << "G) Create a new account\n";
    std::cout << "H) Exit the program\n\n";
    std::cout << ": ";
}

char convert_to_uppercase(char input_char)
{
    /*
    Takes a single character as input and checks if it is a lowercase character.
    If it is, converts it to uppercase and returns it.
    */
    if (std::isalpha(input_char) && std::islower(input_char)) {
        return std::toupper(input_char);
    }
    else {
        return input_char;
    }
}

char userInput()
{
    bool showColumn = true;
    char userInput;

    while (true)
    {
    // Output the column mark with appropriate state
    if (showColumn)
    {
    std::cout << ":\r" <<
    std::flush;
    }
    else
    {
    std::cout << " \r" <<
    std::flush;
    }

    // Wait for 500ms
    std::this_thread::sleep_for(std::chrono::milliseconds(500));

    // Toggle the state of the column mark
        showColumn = !showColumn;

    // Check if user input is available
    if (_kbhit())
    {
    // Read the user input
    userInput = _getch();
    convert_to_uppercase(userInput);
    if (userInput == 'A' || userInput == 'B' || userInput == 'C' || userInput == 'D' ||
        userInput == 'E' || userInput == 'F' || userInput == 'G')
    {
        // Output the user input
        std::cout << std::endl << "You entered: " << userInput <<
                  std::endl;
        return userInput;
    }
    else
    {
        if ( userInput == 'H') {return 0;}                                                     // Exit Program.
        std::cout << "Sorry, You entered the wrong Option.\n"
                  <<   "Try again\n";
        system("cls");
        continue;
    }
}
}
}

void dataBaseHAndler()

unsigned int DisplayAccountBalance(unsigned int accNum)
{
    bankDataBase.open("bankDataBase", std::ios::in | std::ios::binary)
}

createNewAccount()
{
    Account newAccount;

}
