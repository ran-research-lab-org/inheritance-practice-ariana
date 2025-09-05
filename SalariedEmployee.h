#ifndef SALARIEDEMPLOYEE_H
#define SALARIEDEMPLOYEE_H

#include "Employee.h"

class SalariedEmployee : public Employee {
private:
    double YearlyPayment;

public:

    SalariedEmployee();
    SalariedEmployee(const std::string& name, int id, double yearlyPayment);
    double calculatePay() const override;
    double getYearlyPayment();
};

#endif

