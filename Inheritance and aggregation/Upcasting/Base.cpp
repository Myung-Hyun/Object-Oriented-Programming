#include <iostream>
using namespace std;

#include "Base.h"

Base::Base (int val1, int val2)
{
	m_val1 = val1;
	m_val2 = val2;
}

void Base::printSum() const
{
	cout << "[Base Class] " << m_val1 << " + " << m_val2 <<  " = " << m_val1 + m_val2<< endl;	
}