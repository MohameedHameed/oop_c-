#pragma once
#include<iostream>
using namespace std;
class Rectangle
{
private:
	int width;
	int height;
public:
	void setWidth(int w);
	int getWidth();
	void setHeight(int h);
	int getHeight();
	void prinInfo();
	Rectangle();
	Rectangle(int w, int h);
};

