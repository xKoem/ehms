#include <iostream>
#include <fstream>
#include <vector>
#include "Student.h"
#include "CSVReader.h"


using namespace std;

string transactionsEmployees(vector<Employee> employeeList) {
    string employeeString;
    for (auto &i : employeeList) {
        employeeString += i.getAccountNumber() + "|Wynagrodzenie; " + i.getDegree();
        if(!i.getDegree().empty())
            employeeString += " ";
        employeeString += i.getName() + " " + i.getSurname() + "|" + i.getSalary() + "\n";
    }
    return employeeString;
}

string transactionsStudents(map<string, Student> studentsMap) {
    int maxStudents;
    maxStudents = (int) (studentsMap.size()/10);
    cout << maxStudents <<endl;
    string studentsString;
    while(maxStudents > 0){
        double highestAverage = 0.0;
        string highestID;
        for(map<string, Student>::iterator it = studentsMap.begin(); it != studentsMap.end(); ++it) {
            if(highestAverage < it->second.getAverage()) {
                highestAverage = it->second.getAverage();
                highestID = it->second.getId();
            }
        }
        if(highestAverage < 4.0) {
            break;
        }
        maxStudents--;
        Student st = studentsMap.at(highestID);
        studentsString += st.getAccountNumber() + "|Stypendium za wyniki w nauce; " + st.getName() + " " + st.getSurname() + "|700\n";
    }

    return studentsString;
}



int main() {
    //Student s("dsa", "name", "surname", "2176t8126532197", "year");
    CSVReader csvReader = CSVReader();
    map<string, Student> studentMap;
//    map<string, Employee> employeeMap;
    vector<Employee> employeeList;
    studentMap = csvReader.readStudents();
//    employeeMap = csvReader.readEmployees();
    employeeList = csvReader.readEmployees();
    csvReader.readGrades(&studentMap);
    employeeList = csvReader.readSalaries(employeeList);

    for(map<string, Student>::iterator it = studentMap.begin(); it != studentMap.end(); ++it) {
       it->second.checkAverage();
   }
//
//    cout << studentMap.at("651375617").getAverage()<< endl;
//    cout << employeeList[1].getSalary() << endl;
//
//    cout << employeeList.size() <<endl;




    ofstream file( "transactions.csv" ); //jeśli nie istnieje, zostanie utworzony
    file << transactionsEmployees(employeeList) + transactionsStudents(studentMap);

    return 0;
}
