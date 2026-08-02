#pragma once
#include "Student.h"
class SecondaryStudent:public Student  
{
private:
	string grade;


public:
	void setGrade(string g);
	string getGrade();

	SecondaryStudent();
	SecondaryStudent(string n, int a, string l, string d, string g);
	void printInfo();
};

