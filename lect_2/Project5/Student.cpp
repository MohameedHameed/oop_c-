#include "Student.h"
#include<iostream>
#include<string>


void Student::setAge(int a) {
	if (a < 0) 
		return;
	   age = a;
}

int Student::getAge() {
	return age;
}

void Student::printInfo() {
	cout << "the name is : " << name << " the age is : " << age << " the degree :  " << degree << endl;
}

Student::Student() {
	cout << "start the object" << endl;
	name = "m";
	age = 20;
	degree = 0;

}

Student::~Student() {
	cout << "end the object" << endl;

}