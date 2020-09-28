#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

int main ()
{
	char s1[12]={'S','t','r','i', 'n', 'g', ' ', 't', 'e', 's', 't', '\0'}; //마지막 '\0'가 없으면 문자열 보장되지 않음
	cout << "s1 : " << s1 << endl;

	s1[6]=0;
	cout << "s1 : " <<  s1 << endl;

	char s2[12]="String test";
	cout << "s2 : " <<  s2 << endl;

	cout << endl;
	cout << "s1	|	s2" << endl;
	cout << "_________________" << endl;
	for( int i=0 ; i<12 ; i++ )
		cout << int(s1[i]) << "	|	" << int(s2[i]) << endl;//s1과 s2의 i번째 요소를 int형으로 변환 하여 출력

	//int형 변환 출력으로 문자열 관리에 있어서‘\0’의 의미
	//‘\0’문자는 NULL 문자로 읽고, 0의 값을 의미한다. 이는 문자열의 마지막을 나타낸다.

	return 0;
}
