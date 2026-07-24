#pragma once
#include<iostream>
using namespace std;
class Distance
{
private :
	int feet;
	int inches;
	static int count;

public:
	void setFeet(int f);
	int getFeet();
	void setInches(int i);
	int getInches();
	int getCount();
	void printInfo();
	Distance();
	Distance addDistance(Distance d);
	Distance(int f, int i);
};

