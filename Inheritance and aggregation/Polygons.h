#ifndef POLYGONS_H
#define POLYGONS_H

/*
public: 어디서든 접근이 가능.
protected: 상속관계일 때 접근이 가능
private: 해당 클래스에서만 접근이 가능
*/


class Polygons
{
protected: //Polygons를 상속받는 Square와 Rectangle에서 접근 가능.
	double area;
	double perimeter;

public:
	Polygons() {};
	~Polygons() {};
	void printArea() const;
	void printPerimeter() const;
};

#endif