#include <iostream>
#include "Person/Person.h"
#include "Person/Student.h"
#include "Person/Teacher.h"
#include "Course.h"

int main() {
  Person *ptrPerson1 = new Teacher("CS", "Mr Maloley", 6132994567);


  
  Course *course1 = new Course("ICS4U", "Introduction to OOP");

  Person *ptrPerson2 = new Student(18, 12, "Bob", 6132991234);

  Person *ptrPerson3 = new Teacher("N/A", "Mr John Smith", 00000000000);


  ptrPerson3 ->addToCourse(course1);
  ptrPerson1 ->addToCourse(course1);

  ptrPerson2 ->addToCourse(course1);



  ptrPerson1 ->display(true);
cout << "----------------------------------------------\n";
 ptrPerson2->display(true);
  cout << "----------------------------------------------\n";

  course1 ->display(true, true);



  
}