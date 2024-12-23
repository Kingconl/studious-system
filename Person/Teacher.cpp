#include <iostream>
#include "../Course.h"
#include "Teacher.h"

Teacher::Teacher()
{
  specialty = "";
  courses [0] = nullptr;
  courses [1] = nullptr;

  courses [2] = nullptr;
  courses [3] = nullptr;

}

Teacher::~Teacher()
{

}


Teacher::Teacher(string _specialty, string _name, long int _phoneNumber) : Person(_name, _phoneNumber)
{ 
  courses [0] = nullptr;
  courses [1] = nullptr;

  courses [2] = nullptr;
  courses [3] = nullptr;
  
  specialty = _specialty;
  
}

void Teacher::display(bool displayCourses)
{
  Person::display(false);
  cout << "specialty: " << specialty << endl;
  if(displayCourses)
  {
    for(int i = 0; i<4; i++)//prevent crashes
      {
        if(courses[i]!= nullptr)
        {
            courses[i]->display(true, false);
        }
      }
  }

  return;
}

void Teacher::addToCourse(Course * courseToAdd)
{
    courseToAdd->assignTeacher(this);
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

void Teacher::removeCourse(Course * courseToRemove)
{
      courseToRemove->removeTeacher();
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