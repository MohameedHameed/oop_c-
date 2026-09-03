#pragma once
#include "Animal.h"
#include "Dog.h"
class Cat :
    public Animal
{


public:
	void makeSound();
	void move();
	Cat(string n, int a);
	void printDogInfo(Dog d);
};

