#include <iostream>
#include "Course.h"

using namespace std;

Course::Course()
{
  courseCode = "";
  courseName = "";

  instructor = nullptr;

  for(int i = 0; i<30;i++)
    {
      studentList[i] = nullptr;
    }
}

Course::~Course()
{

}


Course::Course(string _courseCode, string _courseName)
{
  instructor = nullptr;//prevent crashes

  for(int i = 0; i<30;i++)
    {
      studentList[i] = nullptr;
    }
  
    courseCode = _courseCode;
    courseName = _courseName;
}

void Course::display(bool student, bool teacher)
{
  cout << "courseCode: " << courseCode << endl << "courseName: " << courseName << endl;

  if(teacher)
  {  
    cout << "instructor: " << endl;
    if(instructor != nullptr)
      {
        instructor->display(false);
          cout << endl;
      }
      else {
        cout << "N/A" << endl;
      }
  }
  
  if(student)
  {
    cout << "Student List: " << endl;

    for(int i = 0; i<30;i++)
      {
        if(studentList[i] != nullptr)
        {
          studentList[i]->display(false);
            cout << endl;
        }
      }
  }


  return;
}


void Course::assignTeacher(Teacher * _instructor)
{
  if(instructor != nullptr)
  {
    instructor->removeCourse(this);//ability to overwrite a teacher
  }
  instructor = _instructor;
  return;
}

void Course::assignStudent(Student * _student)
{
  int i = 0;
  
  while(studentList[i] != nullptr and i != 29)
    {
      i++;
    } //sets i to right value or exits when it reaches 29
  if(studentList[i] == nullptr)
  {
    studentList[i] = _student;
  }
  else
  {
    cout << "Full" <<endl; //since it could be full.
  }//overwriting a student would be more troublesome since due to there being multiple students, some1 could easily accidenity overwrite a student by not looking at the current number of students.
  return;
}

void Course::removeTeacher()
{
  instructor = nullptr;//only 1 teacher to remove;
  return;
}

void Course::removeStudent(Student * _student)
{
  for(int i = 0; i<30; i++)
    {
      if(studentList[i] == _student)
      {
        studentList[i] = nullptr;
      }
    }
  return;
}
