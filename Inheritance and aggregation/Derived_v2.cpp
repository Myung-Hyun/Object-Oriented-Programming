#include <iostream>
using namespace std;

/*
가상 함수(virtual function)는 파생 클래스에서 재정의할 것으로 기대하는 멤버 함수
자신을 호출하는 객체의 동적 타입에 따라 실제 호출할 함수가 결정
함수내부 구현이 되어있는 인터페이스를 자식에게 전달, 다시 정의해도 되고 안해도 된다.

순수가상함수는 구현 대신 가상함수에 NULL (0)값을 대입
순수 가상함수를 포함하는 클래스는 추상 클래스
인터페이스를 자식에게 전달, 재정의를 하지 않으면 오류가 발생(꼭 필요한 기능을 전달할 때, 구현해서 쓰도록)
*/


class Base
{
protected:
	int m_Num1;
	int m_Num2;
public:
	virtual void setNum(int val1, int val2) = 0;	
	virtual void printSum() = 0;
};

class Derived : public Base
{
public:
	void setNum(int val1, int val2) { m_Num1 = val1; m_Num2 = val2; }; //overriding, 재정의 하지 않으면 안 된다.
	void printSum() { cout << "두 수의 합은 " << m_Num1+m_Num2 << "입니다." << endl;} ;
};

int main()
{
	//Base baseObj;
	// 하나 이상의 pure virtual function을 가진 클래스는 ADT 클래스임. ADT 클래스의 객체를 만드는 것은 적합하지않음.
	Derived der;
	int num1, num2;

	cout << "두 수를 입력하세요 : " << endl;
	cin >> num1;
	cin >> num2;

	der.setNum(num1, num2);
	der.printSum();

	return 0;
}
