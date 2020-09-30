#include <iostream>
using namespace std;

void func(int a,int b) //function 안에서 throw를 한다. (exception propagation)
{
	if( b==0)
		throw b;
	cout<<"a 나누기b의몫은"<<a/b<<"나머지는"<<a%b<<"입니다."<<endl;
}

int main(void)
{
	int a,b;

	try
	{       
		cout<<"두개의수를입력해주세요:";
		cin>>a>>b;
		func(a,b);     
	}
	catch(int ex) //throw 해주는 값을 받는다. 데이터형 일치해야 한다.
	{
		cerr<<"b에"<<ex<<"이입력되었습니다. 다시실행하세요"<<endl;
	}
	return 0;
}
