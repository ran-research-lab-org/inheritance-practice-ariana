#include "SalariedEmployee.h"
#include <string>
using namespace std;



SalariedEmployee::SalariedEmployee(const string& name, int id, double YearlyPayment)
:Employee(name, id, "Salaried"), YearlyPayment(YearlyPayment){}
    // TODO: 
    
/*TODO: calculate Payment */
double SalariedEmployee::getYearlyPayment(){
    return YearlyPayment;
}

double SalariedEmployee::calculatePay() const{
    return(YearlyPayment/26);
}
/* IMPLEMENT GETTERS*/