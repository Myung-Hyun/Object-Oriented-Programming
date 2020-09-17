#include < iostream >

using namespace std ;

class Fraction
{
private : //멤버변수가 포인터 변수
	int * pNum ;
	int * pDenom ;
public :
	Fraction() //생성자에서 멤버변수를 동적할당
	{
		pNum = new int;
		pDenom = new int;
	};
	~Fraction() //동적할당된 메모리 반환
	{ 
		delete  pNum ; 
		delete  pDenom ; 
	} ; 
	void store( int num, int denom ) 
	{ 
		*pNum = num; 
		*pDenom = denom; 
	} ;
	void print( void ) 
	{ 
		cout << *pNum << "/" << *pDenom << endl ;
	} ;
} ;

void main( void ) 
{
	Fraction * pFr = new Fraction ; //객체를 가리킬 수 있는 클래스형 포인터, 클래스에 객체를 동적할당

	(*pFr).store( 4, 5 ) ; //멤버 연산자(.) 이용하여 함수 호출, *pFr가 가 객체이므로 이런 방식도 가능한데, 굳이 이렇게 안 쓸듯. 
	pFr->print() ; //선택연산자(->) 이용
}
