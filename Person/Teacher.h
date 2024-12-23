#pragma once
#include <iostream>
#include "Person.h"
class Course;

using namespace std;

#ifndef TEACHER_H
#define TEACHER_H

class Teacher : public Person
{
public:
  Teacher();
  virtual ~Teacher();
  Teacher(string, string, long int);

  void addToCourse(Course*);
  void removeCourse(Course*);
  void display(bool);


private:
  Course * courses[4];
  string specialty;
protected:


};
#endif