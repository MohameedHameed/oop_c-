#pragma once
#include<iostream>
#include<string>
using namespace std;
class Student
{
private:
	int age;
public:
	string name;
	int degree;

	void setAge(int n);
	int getAge();
	void printInfo();
	Student();
	~Student();
};

