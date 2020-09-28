#include <iostream>
#include <fstream>
#include <iomanip>
#include <string>

/*
*** string객체의 함수

string:: find_first_of(string str) : 입력된 str이 처음으로 나타나는 위치를 탐색하여, size_t형으
로 리턴, 문자열 안에서 str을 탐색 할 수 없으면 string::npos(0xFFFFFFFF)의 상수가 반환 된다.
cf)size_t 자료형: 이론상 가장 큰 사이즈를 담을 수 있는 "unsigned 데이터 타입", 시스템마다 다름, overflow 방지.


string::iterator : 문자열 내의 문자 탐색을 위한 반복자 자료 형. 포인터 형으로 string 객체에서
는 char 형으로 변환 됨. 예) string::iterator iter= string::begin(); iter++; char c = *iter;

string::begin() : string 객체에서 문자열의 시작 위치를 string::iterator형으로 반환.
string::end() : string 객체에서 문자열의 끝 위치를 string::iterator형으로 반환.

*/


using namespace std;

//대칭 문자를 사용하여 암호화 하는 프로그램
//(English)
string strEnglish = "ABCDEFGHIJKLMNOPQRSTUVWXYZ.,?!;";
//(Code)
string strCode    = "?Q.W,EMRNTBXYUV!ICOPZA;SDLFKGJH";

char findString( string& source, string& target, const char& c )
{
	//source에서 입력된 c를 탐색하여 target에서 같은 위치에서의 문자 리턴
	//만약 입력된 c가 source에서 탐색 되지 않는 다면, 입력과 같은 문자를 리턴
	
	size_t index = source.find_first_of( c );

	if( index == string::npos )
	{
		return c;
	}
//	return target.at( index );
	return target[index];
}


string Encode( string& str )
{
	//findString함수에서 strEnglish를 source로 strCode를 target으로 하여 
	//입력된 str을 모두 암호화 하여 리턴
	string rst;
	string::iterator iter = str.begin();
	
	while( iter != str.end() )
	{
		rst += findString( strEnglish, strCode, *iter );
		iter++;
	}
	return rst;
}

string Decode( string& str )
{
	//findString함수에서 strCode를 source로 strEnglish를 target으로 하여 
	//입력된 str의 암호를 풀어 리턴
	string rst;
	string::iterator iter = str.begin();
	
	while( iter != str.end() )
	{
		rst += findString( strCode, strEnglish, *iter );
		iter++;
	}
	return rst;
}

int main( void )
{
	string msg;
	cout << "Enter your string." << endl;
	getline( cin, msg );

	string enc = Encode( msg );
	string dec = Decode( enc );

	cout << "Encoded string : " << enc << endl;
	cout << "Decoded string : " << dec << endl;
	return 0;
}
