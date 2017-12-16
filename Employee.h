//
// Created by Koem on 14/12/2017.
//

#ifndef EHMS_EMPLOYEE_H
#define EHMS_EMPLOYEE_H

#import <string>
#import <map>

using namespace std;

class Employee {
private:
    string id, name, surname, accountNumber, position, degree, salary;
public:
    Employee(string id, string name, string surname, string accountNumber, string position, string degreee);
    Employee();
    const string &getId() const;
    const string &getName() const;
    const string &getSurname() const;
    const string &getAccountNumber() const;
    const string &getPosition() const;
    const string &getDegree() const;

    void setId(const string &id);

    void setName(const string &name);

    void setSurname(const string &surname);

    void setAccountNumber(const string &accountNumber);

    void setPosition(const string &position);

    void setDegree(const string &degree);

    const string &getSalary() const;

    void setSalary(const string &salary);


};


#endif //EHMS_EMPLOYEE_H
