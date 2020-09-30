#include <iostream>
#include <cstdlib>
#include "Error.h"
using namespace std ;

#define FLUSH while( cin.get() != '\n') //매크로 함수 FLUSH

double math( char oper, double data1, double data2 );
int main()
{
	cout << "Begin Error class demonstration\n" ;

	cout << "Enter the first data : " ;
	double data1 ;
	cin >> data1 ;
	cout << "Enter the second data : " ;
	double data2 ;
	cin >> data2 ;
	cout << "Enter the operator : " ;
	char oper ;
	cin >> oper ;

	FLUSH ;

	try
	{
		double result = math( oper, data1, data2 ) ;
		cout << "result : " << result << endl ;
	}
	catch( Error & error ) //Error class를 여기서 사용한다. 
	{
		error.printMessage() ; //멤버함수 printMessage()는 해당 error에 맞게 호출된다. 
		exit(100) ;
	}
	cout << "Normal end of demonstration\n" ;
	return 0 ;
}

double math( char oper, double data1, double data2 )
{
	double result ;
	switch(oper)
	{
	case '+' :
		result = data1 + data2 ;
		break ;
	case '-' :
		result = data1 - data2 ;
		break ;
	case '*' :
		result = data1 * data2 ;
		break ;
	case '/' :
		if( data2 == 0 )
			throw DivbyZero() ;
		if( data2 < 0 )
			throw DivbyNeg() ;
		result = data1 / data2 ;
		break ;
	default:
		throw BadOperator() ;
		break ;
	}
	return result ;
}
