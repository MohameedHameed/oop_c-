#include "Rectangle.h"

Rectangle::Rectangle(int w, int h, string c):Shape(c)
{
    width = w;
    height = h;
}

void Rectangle::area()
{
    cout << "the area of the rectangle ="<< width * height << endl;
    cout << color << endl;
}

void Rectangle::draw()
{
    cout << "draw the rectangle" << endl;

}

void Rectangle::erase()
{
    cout << "erase the rectangle" << endl;
}

void Rectangle::hi()
{
    cout << "hi" << endl;
}
