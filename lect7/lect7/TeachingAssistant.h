#pragma once
#include "Employee.h"
#include "Student.h"
class TeachingAssistant:public Employee, public Student
{
public :
	TeachingAssistant(string n, string j, float s, string d, string ri);
	void printInfo();
};

