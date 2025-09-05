#include "HourlyEmployee.h"

HourlyEmployee::HourlyEmployee(const std::string& name, int id, 
                                double payPerHour, double workedHours)
{
    // TODO: 
    this->name=name;
    this->id=id;
    this->payPerHour=payPerHour;
    this->workedHours=workedHours;
    this->type="Hourly";
}

/*TODO: calculate Payment */
HourlyEmployee::double getPayPerHour(){
        return payPerHour;
    }
HourlyEmployee::double getWorkedHours(){
        return workedHours;
    }

HourlyEmployee::double calculatePay(){
    return(payPerHour * workedHours);
}
