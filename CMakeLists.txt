cmake_minimum_required(VERSION 3.9)
project(Ehms)

set(CMAKE_CXX_STANDARD 11)

add_executable(Ehms main.cpp Person.cpp Person.h Student.cpp Student.h Employee.cpp Employee.h CSVReader.cpp CSVReader.h)