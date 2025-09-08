#include <iostream>
#include <fstream>
#include <sstream>
#include <vector>
#include "Employee.h"
#include "HourlyEmployee.h"
#include "SalariedEmployee.h"

using namespace std;

// Reads CSV: ID,Name,Type,PayPerHour,WorkedHours,YearlyPayment
void readFile(const string& filename, vector<HourlyEmployee>& hourlyEmployees, vector<SalariedEmployee>& salariedEmployees) {
    ifstream file(filename);
    string line;

    // Read file with employees information
    while (getline(file, line)) {
        stringstream ss(line);
        string name, type, token;
        int id;
        double payPerHour = 0, workedHours = 0, yearlyPayment = 0;

        getline(ss, token, ','); id = stoi(token);
        getline(ss, name, ',');
        getline(ss, type, ',');
        getline(ss, token, ','); payPerHour = stod(token);
        getline(ss, token, ','); workedHours = stod(token);
        getline(ss, token, ','); yearlyPayment = stod(token);

        if (type == "Hourly") {
            hourlyEmployees.emplace_back(name, id, payPerHour, workedHours);
        } else if (type == "Salaried") {
            salariedEmployees.emplace_back(name, id, yearlyPayment);
        }
    }
}


int main() {
    
    /* TODO: Define two vectors: HourlyEmployee and SalariedEmployee */
    vector<HourlyEmployee> myhourlyEmployees;
    vector<SalariedEmployee> mysalariedEmployees;

    // TODO: Add vectors to readFile call, hourly first
    readFile("employee_info.csv", myhourlyEmployees, mysalariedEmployees);
    double result = 0;

    // TODO: Print the results
    // Remember that you can use the range based for loop
    // Display the results of each type of employee
    
    cout << "Hourly Employees: \n"; 
    for(HourlyEmployee var1: myhourlyEmployees){
        cout << "ID: "<< var1.getID() << " | " << "Name: " << var1.getName() << " | " << "Pay this period: $"<< var1.calculatePay()<<endl;
    }
    cout << endl;
    
    cout << "Salaried Employees: \n";
    for(SalariedEmployee var2: mysalariedEmployees){
        cout << "ID: "<< var2.getID() << " | " << "Name: " << var2.getName() << " | " << "Pay this period: $" << var2.calculatePay()<<endl;
    }
    cout << endl;

    return 0;
}
