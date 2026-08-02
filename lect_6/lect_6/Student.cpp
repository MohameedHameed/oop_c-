#include "Student.h"

void Student::setLevel(string l)
{
	level = l;
}

string Student::getLevel()
{
	return level;
}

void Student::setDept(string d)
{
	dept = d;
}

string Student::getDept()
{
	return dept;
}

void Student::printInfo()
{
	Person::printInfo();
	cout << "level = " << level<<"\n"
		<< "dept = " << dept<<"\n"
		<< endl;
}

Student::Student():level("0"),dept("UnKnown")
{

}

Student::Student(string n, int a, string l, string d):Person(n,a)
{
	setLevel(l);
	setDept(d);
}
