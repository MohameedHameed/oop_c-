#include "Shape.h"

Shape::Shape(string c)
{
    color = c;
}

int Shape::area()
{
    cout << "the area of parent shape" << endl;
    return 0;
}

void Shape::draw()
{
    cout << "draw of the parent shape" << endl;
}

void Shape::erase()
{
    cout << "the erase of the parent class" << endl;
}
