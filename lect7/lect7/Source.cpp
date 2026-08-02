#include<iostream>
#include "TeachingAssistant.h"
#include "Shape.h"
#include "Rectangle.h"
#include "Circule.h"
using namespace std;


int main() {

	/*
	TeachingAssistant ta("mohammed", "TA", 20000, "It", "AI");
	ta.Student::setName("saleh");
	ta.setJob("Eng");
	ta.printInfo();
	*/
	Shape* shap_ptr;

	Rectangle r(5, 8, "color");
	Circule c (20, "blue");
	shap_ptr = &c;
	shap_ptr->draw();
	
}