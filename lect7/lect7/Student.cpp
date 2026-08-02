#include "Student.h"

void Student::setName(string n)
{
	name = n;
}

void Student::setDepartment(string d)
{
	department = d;
}

void Student::setReaserachInterset(string ri)
{
	reaserchInterest = ri;
}

string Student::getDepartment()
{
	return department;
}

string Student::getReaserachInterset()
{
	return reaserchInterest;
}

void Student::printInfo()
{
	cout << "name = " << name<<"\n"<<
	"department = "<<department<<"\n"
<< "reaserchInterest = " << reaserchInterest << "\n"
		<< endl;
}

Student::Student(string d, string ri)
{
	setDepartment(d);
	setReaserachInterset(ri);
}
