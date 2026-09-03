#include "Cat.h"

void Cat::makeSound()
{
	cout << "cat sound" << endl;
}

void Cat::move()
{
	cout << "cat moves by 2 legs and 2 hands" << endl;

}

Cat::Cat(string n, int a):Animal(n,a)
{
}

void Cat::printDogInfo(Dog d)
{
	cout << d.color << endl;
}
