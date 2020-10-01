using namespace std ;

//(��Ӱ���) Error - Arithmetic - DivbyZero/DivbyNeg/BadOperator
// header file �ϳ��� ���� class ����.

class Error
{
public:
	virtual void printMessage() //������ �����Ƿ� �����Լ�, �Ļ� Ŭ�������� �������� ������ ����ϴ� ��� �Լ�, �ڽ��� ȣ���ϴ� ��ü�� ���� Ÿ�Կ� ���� ���� ȣ���� �Լ��� ����
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