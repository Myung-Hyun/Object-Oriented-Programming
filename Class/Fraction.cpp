#include <iostream>
using namespace std;
#include <cstdlib>

#include "Fraction.h"


CFraction::CFraction() //cpp 파일에 함수 구현하는 경우 'CFraction::' 를 사용해서 class에 접근.
{
	m_nNumerator   = 0;
	m_nDenominator = 1;
}

CFraction::CFraction( int nNumer )
{
	m_nNumerator   = nNumer;
	m_nDenominator = 1     ;
}

CFraction::CFraction( int nNumer, int nDenom )
{
	store(nNumer, nDenom);

}


CFraction::CFraction( const CFraction& fr ) //CFraction type의 reference 변수 fr, 의미는 입력받은 분수를 복사해서 새로운 분수 생성(복사 생성자)
{
	m_nNumerator   = fr.m_nNumerator  ;
	m_nDenominator = fr.m_nDenominator;
}

CFraction::~CFraction()
{

}

void CFraction::store( int nNumer, int nDenom )
{
	if(nDenom == 0) //분모가 0 일 경우 에러를 출력
	{
		cout << "Can not divide by 0!" << endl;
		exit(100);
	}
	if(nDenom < 0) // 분모가 0보다 작은 경우 print할 때 분자에 '-'기호 붙이기 위해
	{
		nDenom = -nDenom;
		nNumer = -nNumer;
	}

	m_nNumerator   = nNumer;
	m_nDenominator = nDenom;
	return;
}

void CFraction::print() const //함수 뒤의 const는 함수 내에서 멤버 변수를 바꾸지 않는다는 의미.
{
//	m_nNumerator   = 0;
//	m_nDenominator = 1;

	cout<< m_nNumerator << "/" << m_nDenominator << endl;
	return;
}

