#include <iostream>
#include <string>

using namespace std;

//getline 함수는 입력 스트림에서 문자들을 읽어서, 인자로 받은 문자열에 저장한다.

int main( void )
{
	string name1;
	string name2;
	string lastname ;
	string firstname;

	cout << "Enter your name ( Example : \"Hong Gil Dong\" ): "; //\" 해주면 "출력 가능.
	getline( cin,  name1 );//공백이 포함된 성과 이름을 getline함수를 이용하여 name1에 저장
	cout << "Your name is " << name1 << endl << endl;

	cout << "Enter your name ( Example : \"Gil Dong, Hong\" ) :";  
	getline( cin,  firstname, ',' );//getline 함수를 이용 ","로 종결 된 이름을 읽어 firstname에 저장
	getline( cin,  lastname );//getline 함수를 이용 성을 읽어 lastname에 저장
	cout << "Your name is " << lastname << " "<< firstname << endl << endl;


	cout << "Enter your name ( Example : \"Hong Gil Dong\" ): ";
	cin  >> name2;
	cout << "Your name is " << name2 << endl;
	//name2에서 공백이 포함된 경우 공백에서 읽기가 중단 됨을 확인한다.

	return 0;
}
