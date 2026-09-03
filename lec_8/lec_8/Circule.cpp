#include "Circule.h"

Circule::Circule(int r, string c):Shape(c)
{
	redius = r;
}

void Circule::area()
{
	cout << "the area of the circule =" << 3.14*redius*redius << endl;
	cout << color << endl;

}

void Circule::draw()
{
	cout << "draw the circule " << endl;

}

void Circule::erase()
{
	cout << "erase the circule " << endl;
}
