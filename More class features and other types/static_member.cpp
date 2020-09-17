#include <iostream>
using namespace std ;

/*
정적멤버 변수는 클래스 내 모든 객체가 공용으로 사용할 수 있다.
저장원리는 전역변수와 동일하다. 전역변수는 은닉성에 위배되기 때문에 
정적멤버변수는 해당 클래스명으로 접근한다.
*/


class Fraction
{
private :
	int numerator ;
	int denominator ;
	static int nAddOpCount ; //정적 멤버 변수
	int nSubstractCount ;
public :
	Fraction( int num, int denom ) ;
	Fraction() ;
	void print( void ) ;
	int greatestComDiv(int n1, int n2);

	void substract( Fraction & fr ) ;
	void add( Fraction & fr ) ;
	static void printAddCount() ; //정적 멤버 함수: private로 선언한 정적 멤버 변수를 사용하기 위한 함수.
	void printSubCount() ;

} ;

int Fraction::greatestComDiv( int n1, int n2 ) 
{
	if( n2 == 0 ) 
		return n1 ;
	else
		return greatestComDiv( n2, n1 % n2 ) ;
}
Fraction ::Fraction() 
{
	nSubstractCount = 0 ;
}
Fraction::Fraction( int num, int denom ) 
{
	numerator = num ;
	denominator = denom ;
	int gcd = greatestComDiv( numerator, denominator )  ;
	numerator = numerator / gcd ;
	denominator = denominator / gcd ;
	nSubstractCount = 0 ;
}

void Fraction::print() 
{
	cout << numerator << "/" << denominator << endl ;
}


int Fraction::nAddOpCount = 0 ; //정적 멤버변수는 class 밖에서 초기화해야 한다.
void Fraction::add( Fraction & fr ) 
{
	nAddOpCount++ ;
}

void Fraction::substract( Fraction & fr ) 
{
	nSubstractCount++ ;
}

void Fraction::printAddCount() 
{
	cout << "nAddOpCount = " << nAddOpCount << endl ;
//	cout << "nAddOpCount = " << nAddOpCount << ", " << "nSubstractCount = " << nSubstractCount << endl ;
}
void Fraction::printSubCount() 
{
	cout << "nSubstractCount = " << nSubstractCount << endl ;
}

int main()
{
	Fraction fr1( 1, 5 ) ;
	Fraction fr2( 2, 5 ) ;
	
	fr1.add( fr2 ) ;
	fr2.substract( fr1 ) ;
	fr2.add( fr1 ) ;
	fr1.substract( fr2 ) ;
	fr1.printAddCount() ; //2 
	fr2.printSubCount() ; //1
	Fraction::printAddCount() ; //2  정적 멤버함수는 객체에 종속되지 않아서 다음과 같이 호출한다. 같은 맥락에서 this 포인터 못 쓴다.
	return 0 ;
}
