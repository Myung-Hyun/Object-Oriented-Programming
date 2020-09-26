#include <iostream>
using namespace std;

#include "Calculator.h"

int main()
{
	Calculator calc(12.34, 56.78);
	calc.add_result();
	calc.sub_result();
	return 0;
}
