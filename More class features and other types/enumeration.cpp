#include <iostream>
using namespace std ;

bool IsLeapYear( int nYear ) //윤년
{
	if(((nYear%4)==0)&&((nYear%100)!=0)||((nYear%400)==0))
		return true ;
	return false ;
}

void main()
{
	enum MONTHS { JAN = 1, FEB, MAR, APR, MAY, JUN, JUL, AUG, SEP, OCT, NOV, DEC } ;
	
	int nYear ;
	int nMonth ;
	int nDates ;

	cout << "Input Year : " ;
	cin >> nYear ;

	cout << "Input Month : " ;
	cin >> nMonth ;

	switch ( nMonth )
	{
	case JAN :
	case MAR :
	case MAY :
	case JUL :
	case AUG :
	case OCT :
	case DEC :
		nDates = 31 ; //1,3,5,7,8,10,12월은 31일, break 없으면 다음 case로 넘어가기 때문에 이런 방식으로 작성하면 된다.
		break ;
	case FEB :
		if( IsLeapYear( nYear ) == true )
			nDates = 29 ;
		else
			nDates = 28 ;
		break ;
	case APR :
	case JUN :
	case SEP :
	case NOV :
		nDates = 30 ; //2월 제외 나머지는 30일
		break ;
	}

	cout << nYear << "년의 " << nMonth << "월달의 일수는 " << nDates << "일입니다." << endl ;	
}
