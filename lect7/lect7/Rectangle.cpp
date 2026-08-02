#include "Rectangle.h"

Rectangle::Rectangle(int h, int w, string c):Shape(c)
{
	height = h;
	width = w;
}

int Rectangle::area()
{
	int area = width * height;
	cout << "area is  " << area << endl;
	return area;
}

void Rectangle::draw()
{
	cout << "draw rectangle" << endl;
}

void Rectangle::erase()
{
	cout << "erase rectangle" << endl;
}
