#pragma once
#include<iostream>
using namespace std;

class Distance

{
private:
	int feet;
	int inches;

public:
	void setFeet(int f);
	int getFeet();
	void setInces(int i);
	int getInches();
	void printInfo();
	Distance(int f, int i);

	Distance operator +(Distance d2);
};

