#include <iostream>
using namespace std;
#include "Derived.h"

/*
계층적 클래스에서의 형 변환(업 캐스팅)

*/


Derived::Derived(int val1, int val2, int val3, int val4) : Base(val1, val2) //Base 클래스 멤버는 초기화 리스트를 통해 Base 생성자 호출하여 초기화.
{
	m_val3 = val3;
	m_val4 = val4;
}

void Derived::printSum() const
{
	cout << "[Derived Class] " << m_val3 << " + " << m_val4 << " = " << m_val3 + m_val4 << endl;	
}