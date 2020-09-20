#include <iostream>
using namespace std;

#include "Square.h"

void Square::calcArea()
{
	area = side * side;
}

void Square::calcPerimeter()
{
	perimeter = side * 4;
}

void Square::printArea() const
{
	cout << "정사각형: ";
	Polygons::printArea();
}

void Square::printPerimeter() const
{
	cout << "정사각형: ";
	Polygons::printPerimeter();
}