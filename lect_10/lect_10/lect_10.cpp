// lect_10.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "Caluclator.h"
using namespace std;
int main()
{

	
		int n1;int n2;
	cin >> n1 >> n2;
	try {
		int result = Caluclator::div(n1, n2);
		cout << result << endl;

	}
	catch ( const char* c) {
		cout << "the error is : " << endl;
		cout << c << endl;
	}
	
	int arr[2] = { 2,6 };

	try {

		int result = Caluclator::getItem(arr, -2, 0);
		cout << result << endl;
	}
	catch (const exception ex) {
		cout << ex.what() << endl;;
	}


	vector <int> v = { 5,1,3,0 };
	Caluclator::printVector(v);
	
	
}
