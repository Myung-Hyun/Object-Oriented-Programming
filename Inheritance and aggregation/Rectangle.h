#include "Polygons.h"

/*
��� �κп���. class B : protected A
B class�� A class�� ��ӹ޵� protected���� ���� ������ ���� �͵�(public)�� ��� protected�� �ٲٰڴ�.
��, A class�� �ɹ��������� private�� ������ ��� �������� protected�� �ν�

��� ����?
*/


class Rectangle : public Polygons //public�̸� ��ȭ ����. 
{
private:
	double sideA;
	double sideB;

public:
	Rectangle(double inputVal1, double inputVal2) : sideA(inputVal1), sideB(inputVal2) {};
	void calcArea();
	void calcPerimeter();
};