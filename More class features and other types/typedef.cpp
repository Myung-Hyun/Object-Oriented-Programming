#include <iostream>
using namespace std ;
/*
데이터 타입의 별칭을 생성하고, 사용할 수 있다.
가장 큰 장점은 cross-flatform 프로그램에서 비트 크기를 나타내, 실수를 방지할 수 있다는 것이다.
ex) typedef int int16_t;
std::vector<std::pair<std::string, int>> 와 같은 복잡한 type을 간단하게 만들 때도 사용한다.
*/


typedef int* PINT ;
typedef int INT ;

typedef unsigned long U32 ;
typedef unsigned short U16 ;
typedef unsigned char U8 ;

void main()
{
	PINT pInt = new INT[3] ;	

	U32 uA = -1 ;
	U16 uB = -1 ;
	U8 uC = -1 ;

	pInt[0] = uA ;
	pInt[1] = uB ;
	pInt[2] = uC ;

	cout << "U32's -1 : " << pInt[0] << endl ;
	cout << "U16's -1 : " << pInt[1] << endl ;
	cout << "U8's -1 : " <<  pInt[2] << endl ;
	
}

