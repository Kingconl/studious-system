#pragma once
#include <iostream>
#include "Person.h"
class Course;
using namespace std;

#ifndef STUDENT_H
#define STUDENT_H

class Student : public Person
{
public:
  Student();
  virtual ~Student();
  Student(int, int, string, long int);
  void addToCourse(Course*);
  void removeCourse(Course*);
  void display(bool);


private:
  int age;
  int grade;
  Course * courses[4];
protected:


};
#endif