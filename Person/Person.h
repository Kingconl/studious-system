#pragma once
#include <iostream>
class Course;
using namespace std;

#ifndef PERSON_H
#define PERSON_H

class Person
{
public:
  Person();
  virtual ~Person();
  Person(string, long int);
  virtual  void addToCourse(Course*);
  virtual  void removeCourse(Course*);
  virtual  void display(bool);

protected:
  string name;
  long int phoneNumber;

};
#endif