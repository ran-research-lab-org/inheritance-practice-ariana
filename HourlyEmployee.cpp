#include "HourlyEmployee.h"
#include <string>
using namespace std;


HourlyEmployee::HourlyEmployee(const string& name, int id, double payPerHour, double workedHours)
:Employee(name, id, "Hourly"), 
payPerHour(payPerHour),
workedHours(workedHours){ }
    // TODO: 
   

/*TODO: calculate Payment */
double HourlyEmployee::getPayPerHour(){
        return payPerHour;
    }
double HourlyEmployee::getWorkedHours(){
        return workedHours;
    }

double HourlyEmployee::calculatePay() const{
    return(payPerHour * workedHours);
}
