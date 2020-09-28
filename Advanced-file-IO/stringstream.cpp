#include <sstream> //문자열 스트림, 문자열을 출력하기 전에 임시로 문자열을 저장해두는 장소
#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

/*
주어진 문자열에서 필요한 정보를 빼낼 때 유용하게 사용
"1 Kim 89" 이러한 데이터를 int, string, int 로 나눠 저장할 수 있다.

*/

int main()
{
	cout << "[Output String Stream Example]" << endl;
	ostringstream ssOut; //문자열의 임시 저장소 생성
	ssOut << "Year: " << 2012 << endl << "Month: " << 6 << endl << "Day: " << 14 << endl; //<< 기호의 의미는, << 뒤에 있는 변수 혹은 값들이 화살표의 방향을 따라 흘러들어 간다는(stream) 의미, 즉 ssOut에 저장
	cout << ssOut.str(); //str()는 저장된 string을 가져오는 기능


	cout << endl << "[Input String Stream Example]" << endl;
	string today = "Year: 2012 Month: 6 Day: 4";
	istringstream ssIn(today); //today를 입력을 생성

	string year, month, day;
	int intYear, intMonth, intDay;
	ssIn >> year; //저장된 today 값들을 하나씩 year, intYear...로
	ssIn >> intYear;
	ssIn >> month >> intMonth >> day >> intDay;
	cout << year << " " << intYear << endl 
		<< month << " " << intMonth << endl 
		<< day << " " << intDay << endl;
		
	return 0;
}

/*
input[0] = "1 Kim 89"; 
input[1] = "2 Moon 100"; 
input[2] = "3 Chan 78"; 
for (int i = 0; i < input.size(); i++)
{
	int num, score; 
	string name; 
	stringstream ss;
	ss.str(input[i]);

	ss >> num;
	ss >> name; 
	ss >> score; 
	cout << num << " " << name << " " << score << endl; // 이후 필요한 자료 구조에 저장하여 활용한다.
}
*/
