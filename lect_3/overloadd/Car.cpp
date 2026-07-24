#include "Car.h"

void Car::setName(string n)
{
	name = n;
}

string Car::getName()
{	
	return name;
}

void Car::setModel(string n)
{
	model = n;
}

string Car::getModel()
{
	return model;
}

void Car::printInfo()
{
	cout << "the name is  : " << name << "the model is :" << model << endl;
}

Car::Car(string n , string m):name(n) , model(m)
{
}

Car::Car()
{
	name = "sasuzki";
	model = "xl7";
}

Car::~Car()
{
	cout << "the object is dead" << endl;
}
