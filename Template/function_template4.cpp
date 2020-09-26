#include <iostream>
using namespace std;

//템플릿 max함수는 Fraction과 같은 특정형에 대하여 처리 불가능

template <class TYPE>
TYPE max (TYPE x, TYPE y)
{
	return (x >y) ? x : y ;
}

class Fraction
{
private:
	int numerator;
	int denominator;
public:
	Fraction(int num, int den)
		:numerator(num), denominator(den){}
	int compare(Fraction fr2);
	void print() { cout << numerator << "/" << denominator << endl;}
};

int Fraction::compare(Fraction fr2)
{
	if (numerator*fr2.denominator - fr2.numerator*denominator > 0)
		return 1;
	else
		return -1;
}

//Fraction에 대한 max함수가 동작할 수 있도록 오버로드된 max함수를 작성
Fraction max(Fraction fr1, Fraction fr2)
{
	if( fr1.compare(fr2) > 0 )
		return fr1;
	else
		return fr2;
}

void main()
{
	Fraction fr1(3,5);
	Fraction fr2(1,2);

	cout << "Max fraction is : ";
	max(fr1, fr2).print();
}
