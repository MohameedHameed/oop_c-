#include "Distance.h"

void Distance::setFeet(int f)
{
	feet = f;
}

int Distance::getFeet()
{
	return feet;
}

void Distance::setInces(int i)
{
	inches = i;
}

int Distance::getInches()
{
	return inches;
}

void Distance::printInfo()
{
	cout << "Feet =" << feet
		<< "Inches" << inches << endl;
}

Distance::Distance(int f, int i)
{
	setFeet(f);
	setInces(i);
}

Distance Distance::operator+(Distance d2)
{
	int f = feet + d2.feet;
	int i = inches + d2.inches;

	return Distance(f, i);
}
