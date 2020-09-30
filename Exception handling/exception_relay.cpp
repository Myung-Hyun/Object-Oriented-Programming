#include <iostream>
using namespace std;

void func(){ throw 100; }
void func2(){ func();  }
void func3(){ func2(); }

//try문(호출)->func3->fucn2->func에서 예외 발생->func2->func3->main(catch문)으로 예외 전달.

int main(void)
{
	try
	{       
		func3();       
	}
	catch(int ex)
	{
		cout<<"예외처리입력:"<<ex<<"이 입력되었습니다."<<endl;
	}
	return 0;
}
