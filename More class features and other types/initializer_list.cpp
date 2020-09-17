#include <iostream>
using namespace std ;

/* 초기화 리스트(코드 최적화 관련)
생성자를 호출할 때 멤버변수를 초기화를 동시에 해줘서 더 효율적이다. 
-상수 멤버변수
-래퍼런스 멤버변수
-다른 클래스의 인스턴스 포함하고 있을 때(?)
-상속받은 멤버 변수(?)

*/



class InitializationTest
{
private :
	int nFirst ;
	int nSecond ;
public :
	InitializationTest( int nF, int nS ) ;
	void print( void ) ;
} ;

void InitializationTest::print( void )
{
	cout << "nFirst = " << nFirst << endl ;
	cout << "nSecond = " << nSecond << endl ;
}

InitializationTest::InitializationTest( int nF, int nS ) 
	: nFirst(nF), nSecond(nS) //이런 형태로 멤버변수를 초기화 할 수 있다. 
{
	;
}

int main( void )
{
	InitializationTest it( 3, 5 ) ;
	it.print() ;

	return 0 ;
}
