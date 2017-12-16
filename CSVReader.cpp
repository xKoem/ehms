//
// Created by Koem on 14/12/2017.
//

#include <fstream>
#include <iostream>
#include "CSVReader.h"

using namespace std;

CSVReader::CSVReader() {}

std::map<std::string, Student> CSVReader::readStudents() {
    string path = "/Users/koem/CLionProjects/Ehms/"; //todo:remove
    ifstream file(path + "data/students.csv");
    Student st = Student();
    if(!file.is_open()) std::cout << "ERROR: File Open" << '\n';
    map<string, Student> map;
    string id, name, surname, accountNumber, year;
    while ( file.good() ) {
        getline ( file, id, '|' );
        getline ( file, name, '|' );
        getline ( file, surname, '|' );
        getline ( file, accountNumber, '|' );
        getline ( file, year, '\n' );
        st.setId(id);
        st.setName(name);
        st.setSurname(surname);
        st.setAccountNumber(accountNumber);
        st.setYear(year);
        map[id] = st;
    }

    return map;
}

vector<Employee> CSVReader::readEmployees() {
    string path = "/Users/koem/CLionProjects/Ehms/"; //todo:remove
    ifstream file(path + "data/employees.csv");
    Employee em = Employee();
    if(!file.is_open()) std::cout << "ERROR: File Open" << '\n';
    vector<Employee> map;
    string id, name, surname, accountNumber, position, degree;
    while ( file.good() ) {
        getline ( file, id, '|' );
        getline ( file, name, '|' );
        getline ( file, surname, '|' );
        getline ( file, accountNumber, '|' );
        getline ( file, position, '|' );
        getline ( file, degree, '\n' );
        em.setId(id);
        em.setName(name);
        em.setSurname(surname);
        em.setAccountNumber(accountNumber);
        em.setPosition(position);
        em.setDegree(degree);
        map.push_back(em);
    }

    return map;
}

void CSVReader::readGrades(map<string, Student> *studentMap) {
    string path = "/Users/koem/CLionProjects/Ehms/"; //todo:remove
    ifstream file(path + "data/grades.csv");
    if(!file.is_open()) std::cout << "ERROR: File Open" << '\n';
    string id, subject, grade;
    while ( file.good() ) {
        getline(file, id, '|');
        getline(file, subject, '|');
        getline(file, grade, '\n');

        studentMap->at(id).addGrade(subject, grade);
    }




}

vector<Employee> CSVReader::readSalaries(vector<Employee> employeeList) {
    string path = "/Users/koem/CLionProjects/Ehms/"; //todo:remove
    ifstream file(path + "data/salaries.csv");
    if(!file.is_open()) std::cout << "ERROR: File Open" << '\n';
    string position, salary;
    while ( file.good() ) {
        getline(file, position, '|');
        getline(file, salary, '\n');

        for (auto &i : employeeList) {
            if(i.getPosition() == position) {
                i.setSalary(salary);
            }
        }
    }
    return employeeList;

}

