#include "Rectangle.h"

void Rectangle::setWidth(int w)
{
	if (w > 0)
		width = w;
	else
		width = 0;
}

int Rectangle::getWidth()
{
	return width;
}

void Rectangle::setHeight(int h)
{
	if (h > 0)
		height = h;
	else
		height = 0;
}

int Rectangle::getHeight()
{
	return height;
}

void Rectangle::prinInfo()
{
	cout << "Width = " << width
		<< "Height = " << height
		<< endl;
}

Rectangle::Rectangle():height(10),width(10)
{
	
}

Rectangle::Rectangle(int w, int h)
{
	setWidth(w);
	setHeight(h);
}
