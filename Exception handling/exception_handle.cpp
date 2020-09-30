#include <iostream>
#include <cstdlib>
using namespace std ;

int main()
{
	cout << "Enter the dividend: " ;
	double dividend ;
	cin >> dividend ;
	cout << "Enter the divisor : " ;
	double divisor ;
	cin >> divisor ;

	/* 전통적인 예외처리 기법
	if (divisor == 0)
	{
		cout << "**Error 100: divisor 0\n";
		exit(100);
	}
	*/

	//예외 처리 장치
	try { //예외가 발생할 지역
		if( divisor == 0 ) 
		{
			throw divisor ;
		}
		double quotient = dividend / divisor ;
		cout << "Quotient is : " << quotient << endl ;
	}
	catch( double & error ) //발생한 예외의 종류
	{
		cerr << "**Error 100: divisor 0\n" ; //발생한 예외에 대한 처리
	}

	return 0 ;	
}

