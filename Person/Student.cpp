#include <iostream>
#include "../Course.h"
#include "Student.h"

Student::Student()
{
  age = 0;
  grade = 0;
  courses [0] = nullptr;
  courses [1] = nullptr;

  courses [2] = nullptr;
  courses [3] = nullptr;

}

Student::~Student()
{

}


Student::Student(int _age, int _grade, string _name, long int _phoneNumber) : Person(_name, _phoneNumber)
{
  age = _age;
  grade = _grade;
  courses [0] = nullptr;
  courses [1] = nullptr;

  courses [2] = nullptr;
  courses [3] = nullptr;
}

void Student::display(bool displayCourses)
{
  Person::display(false);
  cout << "age: " << age << endl << "grade: " << grade << endl;
  if(displayCourses)
  {
    for(int i = 0; i<4; i++)
      {
        if(courses[i]!= nullptr)//prevent crashes
        {
            courses[i]->display(false, true);
        }
      }
  }

  return;
}

void Student::addToCourse(Course * courseToAdd)
{
    courseToAdd->assignStudent(this);
  int i = 0;//since i++ is first and we should start at 0;
  while(courses[i] != nullptr and i != 3)
    {
      i++;
    } //sets i to right value or exits when it reaches 3
  if(courses[i] == nullptr)
  {
    courses[i] = courseToAdd;
  }
  else
  {
    cout << "Full" <<endl; //since it could be full.
  }
 return; 
}

void Student::removeCourse(Course * courseToRemove)
{
      courseToRemove->removeStudent(this);


  for(int i = 0; i < 4; i++)//since we want to keep i after the loop ends
    {
      if(courses[i] == courseToRemove)
      {
        for(int j = i; j < 3; j++)
          {
            courses[j] = courses[j+1];
          }
        courses[3] = nullptr;//since we are pushing everything forwards, all we need to do is set the last 1 to nullptr;
      }
    }
 return; 
}