#include "Circule.h"

Circule::Circule(int r, string c):Shape(c)
{
	reduis = r;
}

int Circule::area()
{
	int area = 3.14 * (reduis * reduis);
	cout << "the area is :" << area << endl;
	return area;
}

void Circule::draw()
{
	cout << "draw Cirucle" << endl;
}

void Circule::erase()
{
	cout << "erase Cirucle" << endl;
}
