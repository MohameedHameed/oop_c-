#include<iostream>
#include "Student.h"
using namespace std;
int main() {
	Student s1;
	s1.printInfo();
	cin >> s1.name;
	cin >> s1.degree;
	int userAge;
	cin >> userAge;
	s1.setAge(userAge);
	s1.printInfo();

}