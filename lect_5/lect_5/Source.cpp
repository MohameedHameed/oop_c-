#include<iostream>
#include "Caluclator.h"
#include "Counter.h"
#include "Distance.h"
using namespace std;

int main() {

	int x = 5;
	int z = 8;
	int result = x + z;

	Distance d1(20, 11);
	Distance d2(14, 30);
	Distance d3=d1 + d2;
	d3.printInfo();


}