#ifndef POLYGONS_H
#define POLYGONS_H

/*
public: ��𼭵� ������ ����.
protected: ��Ӱ����� �� ������ ����
private: �ش� Ŭ���������� ������ ����
*/


class Polygons
{
protected: //Polygons�� ��ӹ޴� Square�� Rectangle���� ���� ����.
	double area;
	double perimeter;

public:
	Polygons() {};
	~Polygons() {};
	void printArea() const;
	void printPerimeter() const;
};

#endif