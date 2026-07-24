#pragma once
#include<iostream>
using namespace std;
class Counter

{
private:
	unsigned int count;

public:
	Counter();
	Counter(int c);
	void setCount(int c);
	int getCount();
	Counter operator ++();
	Counter operator --();
	Counter operator ++(int);
	Counter operator --(int);

	void printInfo();

};

