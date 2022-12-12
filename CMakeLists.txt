cmake_minimum_required(VERSION 3.24)
project(bank_system)

set(CMAKE_CXX_STANDARD 17)

add_executable(bank_system main.cpp bank_account.cpp STACK/stack.h STACK/stack.cpp)
