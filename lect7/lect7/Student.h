#pragma once
#include<iostream>
using namespace std;
class Student
{
private :
	string department;
	string reaserchInterest;
	string name;


public:
	void setName(string n);

	void setDepartment(string d);
	void setReaserachInterset(string ri);
	string getDepartment();
	string getReaserachInterset();
	void printInfo();
	Student(string d, string ri);
};

