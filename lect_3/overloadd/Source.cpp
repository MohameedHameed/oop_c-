#include<iostream>
#include "Car.h"
#include "Calculator.h"
using namespace std;


int main() {

	Car car("Honda", "S255");
	car.printInfo();
	car.setModel("bawa100");
	car.printInfo();
	Car car2;
	car2.printInfo();
	Calculator c;
	cout << "the reult of sum of two int is" << c.sum(5, 2) << endl;
	cout << "the reult of sum of three int is" << c.sum(5, 2,7) << endl;
	cout << "the reult of sum of two float is" << c.sum(5.2f, 2.7f) << endl;
	cout << "the reult of sum of three float is" << c.sum(8.3f, 2.2f,7.5f) << endl;
	cout << "the reult of sum of two int and float is" << c.sum(5.2f, 2) << endl;

}