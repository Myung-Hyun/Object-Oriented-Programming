#include <iostream>
using namespace std;
#include "Derived.h"

/*
������ Ŭ���������� �� ��ȯ(�� ĳ����)

*/


Derived::Derived(int val1, int val2, int val3, int val4) : Base(val1, val2) //Base Ŭ���� ����� �ʱ�ȭ ����Ʈ�� ���� Base ������ ȣ���Ͽ� �ʱ�ȭ.
{
	m_val3 = val3;
	m_val4 = val4;
}

void Derived::printSum() const
{
	cout << "[Derived Class] " << m_val3 << " + " << m_val4 << " = " << m_val3 + m_val4 << endl;	
}