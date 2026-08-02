#pragma once
#include<iostream>
using namespace std;
class Person
{
private:
	string name;
	int age;

public:
	void setName(string n);
	string getName();
	void setAge(int a);
	int getAge();
	void printInfo();
	Person();
	Person(string n, int a);
};

