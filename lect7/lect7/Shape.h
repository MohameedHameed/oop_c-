#pragma once
#include<iostream>
using namespace std;
class Shape
{
private:
	string color;


public:
	Shape(string c);
	virtual int area();
	virtual void draw();
	virtual void erase();
};

