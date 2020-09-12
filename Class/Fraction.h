
//실습 학습 목표(경희 대학교)
//
//1. class 객체를 구현, 선언, 사용의 방법을 확인.
//   선언할 때 ; 쓰고, 구현할 때 ; 쓰지 않는다. 
//2. debuging을 통하여 선언->생성자->값저장->화면출력->파괴자의 진행 과정을 확인.
//   F9를 이용해 breakpoint(중단점)을 만들 수 있고, 함수 구현 내에 만들면 run-time 중 언제 함수가 불리는 지 알 수 있다. 
//   destructor는 객체가 없어지는 시점인 main이 끝난 후이다. 동적할당 하는 경우는 이후에 다룰 듯.
//3. 종류에 따른 생성자 수행 과정을 debuging을 통하여 확인.
//4. "void print( void ) const;"에서 "const"의 의미 확인.


class CFraction
{
private:
	int m_nNumerator  ;
	int m_nDenominator;

public:
	//construct overloading
	CFraction();
	CFraction( int nNumer );
	CFraction( int nNumer, int nDenom );
	CFraction( const CFraction& fr );
	
	//destructor
	~CFraction();


public:
	void store( int nNumer, int nDenom );
	void print( void ) const;

};//class 끝에 ; 붙여야 한다.

