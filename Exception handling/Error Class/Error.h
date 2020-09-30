using namespace std ;

//(상속관계) Error - Arithmetic - DivbyZero/DivbyNeg/BadOperator
// header file 하나에 여러 class 구현.

class Error
{
public:
	virtual void printMessage() //구현이 있으므로 가상함수, 파생 클래스에서 재정의할 것으로 기대하는 멤버 함수, 자신을 호출하는 객체의 동적 타입에 따라 실제 호출할 함수가 결정
	{
		cout << "**Error : type Error\n" ; 
	}
};

class Arithmetic: public Error
{
public:
	virtual void printMessage()
	{
		cout << "**Error : type Arithmetic\n" ; 
	}
};

class DivbyZero : public Arithmetic
{
public:
	virtual void printMessage()
	{
		cout << "**Error : 100 type DivbyZero\n" ; 
	}
};

class DivbyNeg : public Arithmetic
{
public:
	virtual void printMessage()
	{
		cout << "**Error : 101 type DivbyNeg\n" ; 
	}
};

class BadOperator : public Arithmetic
{
public:
	virtual void printMessage()
	{
		cout << "**Error : 102 invalid operator\n" ; 
	}
};
