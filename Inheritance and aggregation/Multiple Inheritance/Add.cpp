#include <iostream>
using namespace std;

#include "Add.h"

Add::Add(double val1, double val2)
{
	result = val1 + val2;
}

void Add::add_result()
{
	cout << "Add result is : " << result << endl;
}