#include <iostream>
using namespace std;


class Base
{
private:
	int m_Num1;
	int m_Num2;
public:
	Base();
	void setNum(int val1, int val2)
	{ m_Num1 = val1; m_Num2 = val2;};
	inline void printSum();
};

class Derived : public Base //Derived가 Base를 상속받는다. 상속의 3가지 유형(private, public, protected)
{
	// Nothing!!
};

Base::Base(void)
{
	m_Num1 = 0;
	m_Num2 = 0;
}

void Base::printSum()
{
	cout << "두 수의 합은 " << m_Num1+m_Num2 << "입니다." << endl;
}

int main()
{
	Derived der; //상속받은 Derived로 객체를 만들면 
	int num1, num2;

	cout << "두 수를 입력하세요 : " << endl;
	cin >> num1;
	cin >> num2;

	der.setNum(num1, num2); //Base의 member function을 사용할 수 있다. 
	der.printSum();

	return 0;
}
