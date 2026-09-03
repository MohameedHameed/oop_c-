#pragma once
#include<iostream>

using namespace std;
class Student
{
public:

	string name;
	int age;

	int  calAge(int yearOfBirth) {
		return 2026 - yearOfBirth;
	}
	void printInfo() {
		cout << "name = " << name << "age = " << age << endl;
	}

	Student(string n, int a);
	
};

