#include <iostream>
using namespace std;

/*
## 클래스의 생성자와 소멸자 실행순서 ##
클래스 A 생성자 실행
클래스 B 생성자 실행
클래스 B 소멸자 실행
클래스 A 소멸자 실행
*/

class A
{
protected:
	int m_id;
public:
	A(int id)
	{
		m_id = id;
		cout << "클래스 A 생성자 실행" << endl;
	}
	~A()
	{
		cout << "클래스 A 소멸자 실행" << endl;
	}
};

class B : public A
{
public:
	B(int id) : A(id)  //초기화 리스트인데, 생성자 A를 사용한 형태.
	{
		cout << "클래스 B 생성자 실행" << endl;
	}
	~B()
	{
		cout << "클래스 B 소멸자 실행" << endl;
	}
};

int main()
{
	cout << "## 클래스의 생성자와 소멸자 실행순서 ##" << endl;
	B b(10);	//B Class 객체를 생성하면, 상속된 꼭대기까지 타고 올라가서 생성자 실행. 소멸 시킬 때는 아래쪽부터 역순으로.
	return 0;
}

