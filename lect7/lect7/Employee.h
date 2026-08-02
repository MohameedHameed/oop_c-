#pragma once
#include<iostream>
using namespace std;
class Employee
{
private:
	string name;
	string job;
	float salary;


public:
	void setName(string n);
	void setJob(string j);
	void setSalary(float s);
	string getName();
	string getJob();
	float getSalary();
	void printInfo();
	Employee(string n, string j, float f);

};

