#include "Polygons.h"

class Square : public Polygons
{
private:
	double side;

public:
	Square(double inputVal) : side(inputVal) {};	
	void calcArea();
	void calcPerimeter();
};
