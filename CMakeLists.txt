cmake_minimum_required(VERSION 3.24)
project(bank_system)

set(CMAKE_CXX_STANDARD 17)

set(Headers bank_account.h)
add_executable(bank_system main.cpp bank_account.cpp)
