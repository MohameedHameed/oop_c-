#include "Distance.h"

int Distance::count = 0;
void Distance::setFeet(int f)
{
	feet = f;
}

int Distance::getFeet()
{
	return feet;
}

void Distance::setInches(int i)
{
	inches = i;
}

int Distance::getInches()
{
	return inches;
}

int Distance::getCount()
{
	return count;
}

void Distance::printInfo()
{
	cout << "Feet = " << feet
		<< "Inches = " << inches
		<< endl;
}

Distance::Distance():inches(0),feet(0)
{
	count++;
}

Distance Distance::addDistance(Distance d)
{
	Distance d1;
	d1.feet = feet + d.feet;
	d1.inches = inches + d.inches;
	return d1;
}

Distance::Distance(int f, int i)
{
	count++;

	setFeet(f);
	setInches(i);
}
