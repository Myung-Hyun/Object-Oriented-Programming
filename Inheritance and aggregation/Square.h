#include "Polygons.h"

/*
오버로딩(Overloading) - 함수 중복 정의
오버로딩은 같은 이름의 함수에 매개변수를 다르게 사용하여 매개 변수에 따라 다른 함수가 실행되는 것.

오버라이딩(Overriding) - 함수 재정의
오버라이딩은 상속받았을때 부모클래스의 함수를 사용하지 않고 다른 기능을 실행. 자식 클래스에서 재정의
1. 오버라이드 하고자 하는 메소드가 상위 클래스에 존재해야한다.
2. 메소드 이름이 같아야 한다.
3. 메소드 파라미터 개수, 파라미터의 자료형이 같아야 한다.
4. 메소드 리턴형이 같아야 한다.
5. 상위 메소드와 동일하거나 내용이 추가되어야 한다.
*/


class Square : public Polygons
{
private:
	double side;

public:
	Square(double inputVal) : side(inputVal) {};	
	void calcArea();
	void calcPerimeter();
	void printArea() const;
	void printPerimeter() const;
};