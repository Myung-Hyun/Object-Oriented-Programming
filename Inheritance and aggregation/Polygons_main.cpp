#include <iostream>
using namespace std;

#include "Rectangle.h" //Polygons.h은 include 안했다는 점. 
#include "Square.h"

int main()
{
	cout << "## 도형의 넓이와 둘레 구하기 ##" << endl;

	Square sqr(5);
	sqr.calcArea();
	sqr.calcPerimeter();

	Rectangle rect(10, 20);
	rect.calcArea();
	rect.calcPerimeter();

	cout << endl << "[정사각형]" << endl;
	sqr.printArea();
	sqr.printPerimeter();

	cout << endl << "[직사각형]" << endl;
	rect.printArea();
	rect.printPerimeter();

	return 0;
}