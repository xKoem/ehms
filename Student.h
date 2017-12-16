//
// Created by Koem on 13/12/2017.
//

#ifndef EHMS_STUDENT_H
#define EHMS_STUDENT_H

#include <string>
#include <map>
#include "Person.h"

using namespace std;

class Student {
private:
    string id, name, surname, accountNumber, year;
    map<string, string> grades;
    double average;
public:
    Student(string id, string name, string surname, string accountNumber, string year);
    Student();
    const string &getId() const;

    const string &getName() const;

    const string &getSurname() const;

    const string &getAccountNumber() const;

    const string &getYear() const;

    void setId(const string &id);

    void setName(const string &name);

    void setSurname(const string &surname);

    void setAccountNumber(const string &accountNumber);

    void setYear(const string &year);

    void addGrade(string subject, string grade);

    string getGrade(string subject);

    void checkAverage();

    double getAverage() const;

};


#endif //EHMS_STUDENT_H
