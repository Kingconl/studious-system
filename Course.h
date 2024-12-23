#pragma once
#include <iostream>
using namespace std;

#include "Person/Student.h"
#include "Person/Teacher.h"


#ifndef COURSE_H
#define COURSE_H


class Course
{
public:
  Course();
  virtual ~Course();
  Course(string, string);

  void display(bool, bool);
  void assignTeacher(Teacher *);
  void assignStudent(Student *);
  void removeTeacher();
  void removeStudent(Student *);
private:

  string courseCode;
  string courseName;
  Student * studentList[30];
  Teacher * instructor; 



protected:


};
#endif