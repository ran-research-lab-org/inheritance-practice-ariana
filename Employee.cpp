#include "Employee.h"
#include <string>
using namespace std;

Employee::Employee(const string& name, int id, const string& type)
{
  // TODO:
  this->name=name;
  this->id=id;
  this->type=type;
}

/* IMPLEMENT GETTERS*/

string Employee::getType(){
  return type;
}
   
string Employee::getName(){
  return name;
}

int Employee::getID(){
  return id;
}
