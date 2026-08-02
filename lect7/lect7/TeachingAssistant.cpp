#include "TeachingAssistant.h"

TeachingAssistant::TeachingAssistant(string n, string j, float s, string d, string ri):Employee(n,j,s),Student(d,ri)
{
}

void TeachingAssistant::printInfo()
{
	Employee::printInfo();
	Student::printInfo();
}
