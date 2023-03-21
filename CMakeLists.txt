cmake_minimum_required(VERSION 3.24)
project(BankApp)

set(CMAKE_CXX_STANDARD 17)
set(SOURCES
    class/Account.cpp
    class/Account.h
    functions/functions.cpp
    functions/functions.h
    main/main.cpp
    )


add_executable(BankApp main/main.cpp functions/functions.h functions/functions.cpp class/Account.cpp class/Account.h main/main.cpp)
