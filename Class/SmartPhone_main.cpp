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
	//�Է� ���� ������ �̿��ϴ� �����ڸ� ���� TomPhone�� ����
	CSmartPhone TomPhone( strName, nMemorySize );
	TomPhone.print();

	//�⺻ �����ڸ� ���� MyPhone�� ����
	CSmartPhone MyPhone;
	MyPhone.print();
	//����Ʈ���� OS �̸��� �޸��� ũ�⸦ ȹ��
	getPhone( strName, nMemorySize );
	MyPhone.changeMemSize( nMemorySize );
	MyPhone.changeOSName( strName     );
	MyPhone.print();

	return 0;
}

//getPhone�� �Է��Ķ���ͷ� strName[]�� �Ѱ��ְ� �� �Լ� �ȿ��� cin���� �Է¹޾� strName�� ä���. 
void getPhone( char strName[], int& nMemSize )
{
	cout << "Please enter the OS Name   : ";
	cin >> strName; //index�����ʰ� �̸��� ����. Why????????

	cout << "Please enter the Memory Size  : ";
	cin >> nMemSize;
}