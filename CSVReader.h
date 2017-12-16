//
// Created by Koem on 14/12/2017.
//

#ifndef EHMS_CSVREADER_H
#define EHMS_CSVREADER_H

#include <string>
#include <map>
#include <vector>
#include "Student.h"
#include "Employee.h"

class CSVReader {
public:
    CSVReader();
    std::map<std::string, Student> readStudents();
//    std::map<std::string, Employee> readEmployees();
    vector<Employee> readEmployees();
    void readGrades(map<string, Student> *studentMap);
//    void readSalaries(map<string, Employee> *employeeMap);
    vector<Employee> readSalaries(vector<Employee> employeeList);
};

#endif //EHMS_CSVREADER_H
