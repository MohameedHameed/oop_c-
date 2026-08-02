#include "Employee.h"

void Employee::setName(string n)
{
	name = n;
}

void Employee::setJob(string j)
{
	job = j;
}

void Employee::setSalary(float s)
{
	salary = s;
}

string Employee::getName()
{
	return name;
}

string Employee::getJob()
{
	return job;
}

float Employee::getSalary()
{
	return salary;
}

void Employee::printInfo()
{
	cout << "name = " << name
		<< "\n" << "job = " << job
		<< "\n" << "salary = " << salary << "\n" << endl;
}

Employee::Employee(string n, string j, float f)
{
	setName(n);
	setJob(j);
	setSalary(f);
}
