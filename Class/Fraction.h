
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
private:
	int GreatestComDiv( int nNumer, int nDenom );

public:
	void store( int nNumer, int nDenom );
	void print( void ) const;
	//friend void store( int nNumer, int nDenom, CFraction &fr); 멤버 가 아니다. fr에 대한 처리를 위해 매개변수로 받는다. 
	//따라서 cpp에 CFraction:: 필요 없고, main에서 fr.store로 부르지 않는다. 
	//멤버함수가 아님에도 멤버변수에 접근할 수 있고, operator overloading에(만) 쓰인다. 
	
	void add      ( const CFraction& fr );

};//class 끝에 ; 붙여야 한다.

