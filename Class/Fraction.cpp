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

int CFraction::GreatestComDiv( int nN1, int nN2 ) //약분해서 정규화하기 위해 최대공약수 함수 구현
{
	if (nN2 == 0)
		return nN1;
	else
		return GreatestComDiv( nN2, nN1 % nN2 );
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

	int nGcd = GreatestComDiv (abs(nNumer), abs(nDenom));
	
	// 멤버함수 안에서 cout << this; 결과와 main 함수에서 CFraction fr의 &fr 출력 결과가 같다. 즉 객체를 생성하면 그 객체를 가리키는 poniter 변수 this.
	this->m_nNumerator   = nNumer/nGcd;
	this->m_nDenominator = nDenom/nGcd;
	//m_nNumerator   = nNumer;  this 포인터 안 써도 된다. 입력 파라미터로 같은 class의 객체를 받는 경우 유용한 듯.
	//m_nDenominator = nDenom;
	return;
}

void CFraction::print() const //함수 뒤의 const는 함수 내에서 멤버 변수를 바꾸지 않는다는 의미.
{
//	m_nNumerator   = 0;
//	m_nDenominator = 1;

	cout<< m_nNumerator << "/" << m_nDenominator << endl;
	return;
}

