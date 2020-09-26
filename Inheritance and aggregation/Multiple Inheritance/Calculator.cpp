#include <iostream>
using namespace std;

#include "Calculator.h"

Calculator::Calculator(double val1, double val2) : Add(val1, val2), Subtract(val1, val2) //초기화 리스트로 Add, Sbustract 생성자 호출하여 초기화. 
{
	cout << "Calculator is prepared..." << endl;
}
