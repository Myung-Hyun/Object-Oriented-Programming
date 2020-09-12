//  실습 학습 목표
//
//-	스마트 폰을 나타내는 SmartPhone 클래스를 설계하라. 
//-	main()에서 TomPhone을 “iOS5.1”, 32GB로, myPhone을 “IceCreamSandwich4.0”, 64GB로 생성하고 각 개체를 화면에 출력하는 문제로 골격 제시.


class CSmartPhone
{
public:
	char m_strName[20]; //20byte 크기의 운영체제 이름
	int  m_nMemorySize; //메모리 크기

private: //main 함수에서 쓰지 못하고 멤버 함수 내에서만 사용 가능.
	void initName( void );
	void CopyName( char* pName );

public:// 생성자 이름: 파스칼 표기법
	CSmartPhone( void );
	CSmartPhone( char* pName, int nMemorySize );

public:// 함수 이름: camel 표기법
	void changeMemSize( int   nMemorySize ); //메모리 크기 변경
	void changeOSName ( char* pName       ); //운영체제 이름 변경
	void print        ( void              ) const; //스마트폰 정보 출력
};