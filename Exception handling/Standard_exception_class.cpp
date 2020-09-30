
#include <iostream>
#include <string>
#include <iomanip>
using namespace std ;

//표준 예외 클래스: exception, 여러 예외 클래스의 기초 클래스로 사용

int main()
{
	string s1("This is the string") ;

	cout << "Testing out_of_range exception\n" ;
	int position ;
	cout <<  "Input position : " ;
	cin >> position ;

	try 
	{
		cout << "s1(position) contains : " 
			<< s1.at(position) << endl ; //input parameter(index)로 숫자를 받고, 해당 위치에 해당하는 문자를 반환
		//index는 0부터 시작합니다.index가 string의 범위를 벗어나게 되면 예외 throw

	}
	catch( exception & err )
	{//하나의 문자열 포인터를 반환하는 what()이라는 가상 멤버 함수를 제공, 파생 클래스에서는 원하는 문자열을 출력할 수 있도록 재정의할 수 있다.
		cerr << err.what() << endl ; 
	}
	cout << "End of exceptions tests\n" ;

	return 0 ;
}
