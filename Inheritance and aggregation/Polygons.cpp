#include <iostream>
using namespace std;

#include "Polygons.h"

void Polygons::printArea() const
{
	cout << "도형의 넓이는 " << area << " 입니다." << endl;
}

void Polygons::printPerimeter() const
{
	cout << "도형의 둘레는 " << perimeter << " 입니다." << endl;
}