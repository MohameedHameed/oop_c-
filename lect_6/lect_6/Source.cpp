#include<iostream>
#include "Student.h"
#include "SecondaryStudent.h"
using namespace std;



int main() {
	/*
	Student s("mohammed",27,"level 4","IT");
	s.printInfo();
	*/
	SecondaryStudent ss("mohammed", 27, "level4", "It", "50");
	ss.printInfo();
}