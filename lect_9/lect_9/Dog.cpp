#include "Dog.h"

void Dog::makeSound()
{
	cout << "Dog sound" << endl;
}

void Dog::move()
{
	cout << " dog moves by 2 hands and 2 legs" << endl;
}

void Dog::setColor(string c)
{
	color = c;
}

string Dog::getColor()
{
	return color;
}

Dog::Dog(string c, string n, int a):Animal(n,a)
{
	color = c;
}
