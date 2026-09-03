#include "Caluclator.h"

int Caluclator::div(int n1, int n2)
{
	if (n2 == 0) {
		throw invalid_argument("you can not");
	}
	if (n1<=0) {
		throw 500;
	}
	return n1/n2;
}

bool Caluclator::isFind(vector<int>& vec,int num)
{
	for (int n : vec) {
		if (num == n)
			return true;
	}
	return false;
}
