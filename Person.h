//
// Created by Koem on 13/12/2017.
//

#ifndef EHMS_PERSON_H
#define EHMS_PERSON_H

#include <string>

using namespace std;

class Person {
protected:
    string id = "", name = "", surname = "", accountNumber = "";
public:
    //Person(string id, string name, string surname, string accountNumber);
    string getId();
    string getName();
    string getSurname();
    string getAccountNumber();


};


#endif //EHMS_PERSON_H
