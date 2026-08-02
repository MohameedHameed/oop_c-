#pragma once
#include "Shape.h"
class Rectangle :public Shape
{
private:
	int height;
	int width;



public:
	Rectangle(int h,int w,string  c);
	int area();
	void draw();
	void erase();

};

