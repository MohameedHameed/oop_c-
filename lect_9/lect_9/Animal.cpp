#include "Animal.h"

void Animal::setName(string n)
{
	name = n;
}

string Animal::getName()
{
	return name;
}

void Animal::setAge(int n)  
{
	age = n;
}

int Animal::getAge()
{
	return age;
}

Animal::Animal(string n, int a)
{
	setName(n);
	setAge(a);
}
