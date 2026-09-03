#include "Caluclator.h"
#include <iostream>

int Caluclator::div(int n1, int n2)
{
	if (n2 == 0) {
		throw "you cant divide by 0 bro!!";
	}
	return n1 / n2;
}

int Caluclator::getItem(int arr[], int size,int index)
{
	
	if (size < 0) {
		throw invalid_argument("invalid size");
	}

	return arr[index];

}

void Caluclator::printVector(const vector<int>& vec)
{
	for (int num : vec) {
		cout << num << endl;
	}
	
}
