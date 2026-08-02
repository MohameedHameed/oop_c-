#include "Person.h"

void Person::setName(string n)
{
	name = n;
}

string Person::getName()
{
	return name;
}

void Person::setAge(int a)
{
	age = a;
}

int Person::getAge()
{
	return age;
}

void Person::printInfo()
{
	cout << "name ="  << name << "\n"
		<< "age = "  << age << "\n"
		<< endl;
}

Person::Person():name("UnKnown"),age(0)
{
}

Person::Person(string n, int a)
{
	setName(n);
	setAge(a);
}
