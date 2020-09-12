#include <iostream>
using namespace std;
#include "Funny.h"

int main()
{
	CFunny fn1(4);
	fn1.Print();

	CFunny fn2;
	cin>> *fn2.GetNum();//cin>>fn2.m_nNum; 수정 
	//m_nNum은 private 여서 GetNum()함수로 접근해야 한다. 
	//*fn2를 fn2로 하면 에러난다. Why???????
	fn2.Print();

	CFunny fn3(fn2);
	fn3.Print();

	return 0;
}
