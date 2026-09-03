#pragma once
#include "Animal.h"
class Dog :
    public Animal
{
private:
	string color;
public:
	void makeSound();
	void move();
	void setColor(string c);
	string getColor();
	Dog(string c, string n, int a);
	friend void printInfo(Dog d);
	friend class Cat;
};

