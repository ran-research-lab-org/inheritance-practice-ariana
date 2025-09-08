#ifndef HOURLYEMPLOYEE_H
#define HOURLYEMPLOYEE_H

#include "Employee.h"
using namespace std;


class HourlyEmployee : public Employee {
private:
    double payPerHour, workedHours;

public:
    // HourlyEmployee();
    HourlyEmployee(const string& name, int id, double payPerHour, double workedHours);
    double calculatePay() const override;
    double getPayPerHour();
    double getWorkedHours();

};

#endif

