#include <iostream>
#include "SmartPhone.h"
using namespace std;

void getPhone( char strName[], int& nMemSize );

int main()
{
	cout << "This program creates SmartPhons"<<endl;

	char strName[20] ={0};
	int  nMemorySize = 0 ;

	getPhone( strName, nMemorySize );
	//입력 받은 정보를 이용하는 생성자를 통해 TomPhone을 선언
	CSmartPhone TomPhone( strName, nMemorySize );
	TomPhone.print();

	//기본 생성자를 통해 MyPhone을 선언
	CSmartPhone MyPhone;
	MyPhone.print();
	//스마트폰의 OS 이름과 메모리의 크기를 획득
	getPhone( strName, nMemorySize );
	MyPhone.changeMemSize( nMemorySize );
	MyPhone.changeOSName( strName     );
	MyPhone.print();

	return 0;
}

//getPhone의 입력파라미터로 strName[]을 넘겨주고 이 함수 안에서 cin으로 입력받아 strName을 채운다. 
void getPhone( char strName[], int& nMemSize )
{
	cout << "Please enter the OS Name   : ";
	cin >> strName; //index쓰지않고 이름만 쓴다. Why????????

	cout << "Please enter the Memory Size  : ";
	cin >> nMemSize;
}