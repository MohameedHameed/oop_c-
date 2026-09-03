#pragma once
#include <iostream>
using namespace std;
 class Shape abstract
{

	

public:
	string color;
	Shape(string c);
	virtual void area()=0;
	virtual void draw()=0;
	virtual void erase()=0;
	virtual void printInfo() final;
	
};

