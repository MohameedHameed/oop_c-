#include "Counter.h"

Counter::Counter():count(0)
{
}

Counter::Counter(int c)
{
	setCount(c);
}

void Counter::setCount(int c)
{
	count = c;
}

int Counter::getCount()
{
	return count;
}

Counter Counter::operator++()
{
	++count;
	return Counter(count);
}

Counter Counter::operator--()
{
	--count;
	return Counter(count);
}

Counter Counter::operator++(int)
{
	count++;
	return Counter(count);
}

Counter Counter::operator--(int)
{
	count--;
	return Counter(count);
}

void Counter::printInfo()
{
	cout << "Count =" << count << endl;
}
