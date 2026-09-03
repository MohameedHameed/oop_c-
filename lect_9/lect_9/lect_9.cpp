#include <iostream>
#include "Cat.h"
#include "Dog.h"
using namespace std;
int main()
{
	Dog d("blue","jon",22);
	d.setName("hanab");

	printInfo(d);
	Cat c("maikle", 21);
	c.printDogInfo(d);
}


void printInfo(Dog d) {
	cout << d.getName()<<"\n" << d.getAge() << "\n" << d.getColor() << "\n" << endl;
	d.color = "orange";
}


