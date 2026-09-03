#pragma once
#include<iostream>
using namespace std;
class Animal
{
private:
	string name;
	int age;



public:
	virtual void makeSound() = 0;
	virtual void move()=0;
	 virtual void setName(string n) final ;
	string getName();
	void setAge(int n);
	int getAge();
	Animal(string n, int a);
};

