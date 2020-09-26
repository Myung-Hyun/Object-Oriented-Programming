#define MAX(x, y) (((x) > (y))? (x) : (y)) //매크로 함수 
//전처리기에서 단순히 치환해주기 때문에, 컴파일에서 발생하는 데이터 타입 문제를 발견하지 못한다.

#include <iostream>
using namespace std;

template <class TYPE> //매크로함수와 동일한 동작을 하는 템플릿 함수
TYPE MAX_TPL(TYPE a, TYPE b)
{
	return (a>b)? a: b;
}

int main()
{
	cout << "Begin macro tests\n";
	cout << "Test1 : " << MAX(1,4) << endl;
	cout << "Test2 : " << MAX('A', 'B') << endl;
	cout << "Test3 : " << MAX(4, 'C' ) << endl;
	cout << "End of macro tests\n";
	
	cout << "Begin Template tests\n";
	cout << "Test4 : " << MAX_TPL(1,4) << endl;
	cout << "Test5 : " << MAX_TPL('A', 'B') << endl;
	cout << "Test6 : " << MAX_TPL(4,10) << endl;  /*에러문을 확인하고 그 이유를 생각해보시오*/
	cout << "Test3과 Test6의 예를 통해 매크로 함수가 가지는 문제점을 설명하시오" << endl;
	cout << "End of Template tests\n";

	
	return 0;
}
