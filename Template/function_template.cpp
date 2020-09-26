#include <iostream>
using namespace std;

template <class DATATYPE> //함수 템플릿, overloading 하지 않고 한 번만 정의 하면 된다. 
//반환 형식만으로 구분되는 overloading은 할 수 없다.
DATATYPE abs_Tpl(DATATYPE num)
{
	if(num < 0)
		num = -num;
	return num;
}

void main()
{
	int a = -5;
	cout << a << "의 절대값은 -> " << abs_Tpl(a) << endl;

	double b = -3.14;
	cout << b << "의 절대값은 -> " << abs_Tpl(b) << endl;

	long int c = -153L;
	cout << c << "의 절대값은 -> " << abs_Tpl(c) << endl;
}
