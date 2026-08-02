#include "SecondaryStudent.h"

void SecondaryStudent::setGrade(string g)
{
	grade = g;
}

string SecondaryStudent::getGrade()
{
	return grade;
}

SecondaryStudent::SecondaryStudent():grade("0")
{
}

SecondaryStudent::SecondaryStudent(string n, int a, string l, string d, string g):Student(n,a,l,d)
{
	setGrade(g);
}

void SecondaryStudent::printInfo()
{
	Student::printInfo();
	cout << "grade = " << grade << "\n" << endl;
}
