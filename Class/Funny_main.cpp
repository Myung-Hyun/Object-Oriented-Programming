#include <iostream>
using namespace std;
#include "Funny.h"

int main()
{
	CFunny fn1(4);
	fn1.Print();

	CFunny fn2;
	cin>> *fn2.GetNum();//cin>>fn2.m_nNum; ���� 
	//m_nNum�� private ���� GetNum()�Լ��� �����ؾ� �Ѵ�. 
	//*fn2�� fn2�� �ϸ� ��������. Why???????
	fn2.Print();

	CFunny fn3(fn2);
	fn3.Print();

	return 0;
}