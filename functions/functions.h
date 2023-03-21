//
// Created by USER on 2/17/2023.
//
#pragma once
#include <iostream>
#include <string>
#include <iomanip>
#include <sstream>
#include <algorithm>
#include <cstdint>
#include <windows.h>
#include <chrono>
#include <thread>
#include <conio.h>
#include <cctype> // for islower() and toupper()
#include "Account.h"


void displayWelcomeScreen();        // Opens the welcome page.
void displayTransactionMenu ();
char convert_to_uppercase(char);
char userInput();
unsigned int DisplayAccountBalance();
dataBaseHAndler();
createNewAccount();
MakeDeposit();
MakeWithdrawal();
std::cout << "D) Add interest for this period\n";
std::cout << "E) Display number of completed transactions on the account\n";
std::cout << "F) Display interest earned for this period\n";






