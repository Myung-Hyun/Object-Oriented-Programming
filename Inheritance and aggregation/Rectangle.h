#include "Polygons.h"

/*
상속 부분에서. class B : protected A
B class가 A class를 상속받되 protected보다 접근 범위가 넓은 것들(public)을 모두 protected로 바꾸겠다.
즉, A class의 맴버변수들은 private을 제외한 모든 변수들을 protected로 인식

어디에 쓸까?
*/


class Rectangle : public Polygons //public이면 변화 없음. 
{
private:
	double sideA;
	double sideB;

public:
	Rectangle(double inputVal1, double inputVal2) : sideA(inputVal1), sideB(inputVal2) {};
	void calcArea();
	void calcPerimeter();
};
