//
// Created by Koem on 13/12/2017.
//

#include <iostream>
#include <stdlib.h>
#include "Student.h"

Student::Student(string id, string name, string surname, string accountNumber, string year): id(id), name(name), surname(surname), accountNumber(accountNumber), year(year) {}

const string &Student::getId() const {
    return id;
}

const string &Student::getName() const {
    return name;
}

const string &Student::getSurname() const {
    return surname;
}

const string &Student::getAccountNumber() const {
    return accountNumber;
}

const string &Student::getYear() const {
    return year;
}

Student::Student(): id(""), name(""), surname(""), accountNumber(""), year("")  {

}

void Student::setId(const string &id) {
    Student::id = id;
}

void Student::setName(const string &name) {
    Student::name = name;
}

void Student::setSurname(const string &surname) {
    Student::surname = surname;
}

void Student::setAccountNumber(const string &accountNumber) {
    Student::accountNumber = accountNumber;
}

void Student::setYear(const string &year) {
    Student::year = year;
}

void Student::addGrade(string subject, string grade) {
    Student::grades[subject] = grade;
}

string Student::getGrade(string subject) {
    return Student::grades.at(subject);
}

void Student::checkAverage() {
    double average = 0.0;
    int i = 0;
    for(map<string, string>::iterator it = Student::grades.begin(); it != Student::grades.end(); it++) {
        string grade = it->second;
        average += std::stod(it->second);
        i++;
   }
    average /= i;
    Student::average = average;
}

double Student::getAverage() const {
    return average;
}

