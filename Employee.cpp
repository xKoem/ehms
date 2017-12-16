//
// Created by Koem on 14/12/2017.
//

#include "Employee.h"

const string &Employee::getId() const {
    return id;
}

const string &Employee::getName() const {
    return name;
}

const string &Employee::getSurname() const {
    return surname;
}

const string &Employee::getAccountNumber() const {
    return accountNumber;
}

const string &Employee::getPosition() const {
    return position;
}

const string &Employee::getDegree() const {
    return degree;
}

Employee::Employee(string id, string name, string surname, string accountNumber, string position, string degreee): id(id), name(name), surname(surname), accountNumber(accountNumber), position(position), degree(degree), salary("") {}

void Employee::setId(const string &id) {
    Employee::id = id;
}

void Employee::setName(const string &name) {
    Employee::name = name;
}

void Employee::setSurname(const string &surname) {
    Employee::surname = surname;
}

void Employee::setAccountNumber(const string &accountNumber) {
    Employee::accountNumber = accountNumber;
}

void Employee::setPosition(const string &position) {
    Employee::position = position;
}

void Employee::setDegree(const string &degree) {
    Employee::degree = degree;
}

Employee::Employee(): id(""), name(""), surname(""), accountNumber(""), position(""), degree(""), salary("") {

}

void Employee::setSalary(const string &salary) {
    Employee::salary = salary;
}

const string &Employee::getSalary() const {
    return salary;
}
