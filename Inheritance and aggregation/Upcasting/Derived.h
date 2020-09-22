#include "Base.h"

class Derived : public Base
{
protected:
	int m_val3;
	int m_val4;
public:
	Derived(int val1, int val2, int val3, int val4);
	void printSum() const;
};