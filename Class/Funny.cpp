#include <iostream>
using namespace std;
#include <cstdlib>

#include "Funny.h"


CFunny::CFunny( int nNum )
{
	m_nNum = nNum;
}

CFunny::CFunny( void )
{
	m_nNum = 0;
}

CFunny::CFunny( const CFunny& fn )
{
	m_nNum = fn.m_nNum;
}

CFunny::~CFunny( void )
{
}

int* CFunny::GetNum( void )//Ãß°¡
{
	return &m_nNum;
}

void CFunny::Print( void ) const
{
	cout<<m_nNum<<endl;
}
