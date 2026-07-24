#pragma once
#include<iostream>
using namespace std;
class Car
{
private:
	string name;
	string model;


public:
	void setName(string n);
	string getName();
	void setModel(string n);
	string getModel();
	void printInfo();
	Car(string n ,string m);
	Car();
	~Car();
};	

