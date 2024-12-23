#include <iostream>
#include "../Course.h"
#include "Person.h"

Person::Person()
{
  name = "";
  phoneNumber = 0;
}

Person::~Person()
{

}


Person::Person(string _name, long int _phoneNumber)
{
  name = _name;
  phoneNumber = _phoneNumber;
}

void Person::display(bool)
{
  cout << "name: " << name << endl << "phoneNumber: " << phoneNumber << endl;
  return;//never really use this but it doesnt hurt the code so i kept it. 
}

void Person::addToCourse(Course *)
{
  return;
}
void Person::removeCourse(Course *)
{
  return;
}
