cmake_minimum_required(VERSION 3.24)
project(BankApp)

set(CMAKE_CXX_STANDARD 17)

add_executable(BankApp main.cpp Account.cpp Account.h functions.cpp functions.h)
