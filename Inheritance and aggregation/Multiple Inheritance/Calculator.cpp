#include <iostream>
using namespace std;

#include "Calculator.h"

Calculator::Calculator(double val1, double val2) : Add(val1, val2), Subtract(val1, val2) //�ʱ�ȭ ����Ʈ�� Add, Sbustract ������ ȣ���Ͽ� �ʱ�ȭ. 
{
	cout << "Calculator is prepared..." << endl;
}