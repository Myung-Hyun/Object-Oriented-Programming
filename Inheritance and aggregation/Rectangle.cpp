#include "Rectangle.h"

void Rectangle::calcArea()
{
	area = sideA * sideB;
}

void Rectangle::calcPerimeter()
{
	perimeter = (sideA + sideB) * 2;
}