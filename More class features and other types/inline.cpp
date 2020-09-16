#include <iostream>
using namespace std ;

/*
inline function
main 함수에서 다른 함수를 calling 하면 control은 부른 함수에서 불린(called) 함수로 이동한다.따라서 잠시 부른함수는 중단되고
보호되고 있다가 불린함수가 return값을 주면 다시 control이 부른 함수로 온다. (이과정은 많은 overhead를 포함한다)

즉 이런 과정에서 속도가 느려지고 대안으로 짧은 함수의 경우 함수 호출 비용을 줄이기 위해 inline 함수를 이용한다.
control을 옮기는 것이 아니라 불린 함수의 코드로 calling한 함수를 대체한다. (이러한 복제된 코드의 대체는 컴파일러에 의해 수행됨)

단점 = 불리는 함수가 여러번 불릴 경우, 긴 함수인 경우, 데이터 양이 증가한다(ex) 재귀함수) compile overhead가 발생
*/

class Fraction
{
private :
	int numerator ;
	int denominator ;
public :
	inline void print() ; //명시적 inline
	void store(int num, int denom) //묵시적 inline (class 안에 함수 정의를 작성)
	{
		numerator = num ; denominator = denom ; 
	} ; 
} ;

void Fraction::print() 
{
	cout << numerator << "/" << denominator << endl ;
}


int main( void )
{
	Fraction fr1 ;
	fr1.store( 2, 3 ) ;
	fr1.print() ;
	return 0 ;
}
