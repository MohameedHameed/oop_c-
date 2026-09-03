// lec_8.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "Shape.h"
#include "Circule.h"
#include "Rectangle.h"
using namespace std;
int main()
{
	Shape* ptr;

	Rectangle r(4, 5, "blue");
	Circule c(7, "red");

	ptr = &r;
	
	ptr->area();
	ptr = &c;
	ptr->area();
	
	
}
