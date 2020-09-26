#include <iostream>
using namespace std;

#include "Subtract.h"

Subtract::Subtract(double val1, double val2)
{
	result = val1 - val2;	
}

void Subtract::sub_result()
{
	cout << "Subtract result is : " << result << endl;
}