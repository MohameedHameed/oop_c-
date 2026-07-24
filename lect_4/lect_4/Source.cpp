#include<iostream>
#include "Rectangle.h"
#include "Distance.h"
using namespace std;

int main() {
	 
	Distance d1(20, 55);
	cout << "counter =" << d1.getCount() << endl;
	Distance d2(44, 33);
	cout << "counter =" << d2.getCount() << endl;

	Distance d3 = d1.addDistance(d2);
	cout << "counter =" << d3.getCount() << endl;
	

}
