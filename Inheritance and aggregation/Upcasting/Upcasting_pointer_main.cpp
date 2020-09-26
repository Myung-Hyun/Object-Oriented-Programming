#include <iostream>
using namespace std;


/*
업캐스팅의 경우, 자식 클래스에만 존재하던 값은 더 이상 쓰이기 힘들겠지만 딱히 문제는 없다.
그런데 문제는 다운캐스팅의 경우, 자식 포인터가 가리키게 된 후에는, 원래 존재하지도 않는 값을 참조하게 될 수도 있다

dynamic_cast: 상속 관계에 있는 클래스 포인터끼리의 형변환을 허용하되 다운캐스팅이 일어나면 null 값을 대신 리턴하여 위험성을 알립니다
이 형변환을 사용할 때는 클래스가 다형성을 가져야 한다. 쉽게 말하자면 virtual 함수가 존재
*/

#include "Derived.h"

int main()
{
	// 업캐스팅
	cout << "[Upcasting Example]" << endl << endl;
	
	Base* basePtr = new Base(10, 20);
	Derived* derPtr = new Derived(30, 50);	
	basePtr->printSum(); //30
	derPtr->printSum(); //80
	
	basePtr = static_cast<Base*>(derPtr);
	cout << "After upcasting / Derived -> Base.." << endl;

	basePtr->printSum(); //80
	derPtr->printSum(); //80
	
	// 다운캐스팅 예제 1
	cout << endl << "[Downcasting Example1]" << endl << endl;
	Base* basePtr2 = new Derived(10, 20);  //Base*에 Derived 생성자 사용하기 때문에 다운 캐스팅 가능.
	Derived* derPtr2 = new Derived(30, 50);	
	basePtr2->printSum(); //30
	derPtr2->printSum(); //80

	cout << "After downcasting / Base -> Derived.." << endl;
	derPtr2 = static_cast<Derived*>(basePtr2); 
	
	basePtr2->printSum(); //30
	derPtr2->printSum(); //30

	// 다운캐스팅 예제 2 
	cout << endl << "[Downcasting Example2]" << endl << endl;
	Base* basePtr3 = new Base(10, 20); //Base 생성자를 이용했기 때문에, Derived의 m_val3, m_val4에 대한 값이 없다.
	Derived* derPtr3 = new Derived(30, 50);	
	basePtr3->printSum(); //30
	derPtr3->printSum(); //80

	cout << "After downcasting / Base -> Derived.." << endl;
	derPtr3 = static_cast<Derived*>(basePtr3);
	
	basePtr3->printSum(); //30, Base의 printSum 이용하기 때문에 30이 뜬다.
	derPtr3->printSum(); //이상한 값 뜬다. 
	
	return 0;
}


