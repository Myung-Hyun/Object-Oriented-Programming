#include <iostream>
using namespace std;

//구조체: 하나 이상의 변수를 그룹지어서 새로운 자료형을 정의하는 것. 
//C++에서 모든 멤버가 public인 class를 struct라고 부른다. 

struct sRectangle{ //클래스를 구조체로 바꾸기. (같은 동작을 하도록)
	int m_nWidth ; //데이터 멤버로 선언
	int m_nHeight ;

	void store(int width, int height);
	void print() { cout << "Area = " << m_nWidth * m_nHeight << endl; };
}; //구조체 선언 끝에 세미 콜론

void sRectangle::store(int width, int height)
{
	m_nHeight = height;
	m_nWidth = width;
}

void exStore(sRectangle& rec, int width, int height)
{
	rec.m_nWidth = width;
	rec.m_nHeight = height;
}

void exPrint(sRectangle& rec) 
{
	cout << "Area = " << rec.m_nWidth * rec.m_nHeight << endl;
}

void main()
{
	sRectangle rec1;
	rec1.store(30,5);
	rec1.print();

	sRectangle rec2;
	exStore(rec2, 10, 20);
	exPrint(rec2);
}
