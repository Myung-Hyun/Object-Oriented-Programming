#include <iostream>
using namespace std;


/*
��ĳ������ ���, �ڽ� Ŭ�������� �����ϴ� ���� �� �̻� ���̱� ��������� ���� ������ ����.
�׷��� ������ �ٿ�ĳ������ ���, �ڽ� �����Ͱ� ����Ű�� �� �Ŀ���, ���� ���������� �ʴ� ���� �����ϰ� �� ���� �ִ�

dynamic_cast: ��� ���迡 �ִ� Ŭ���� �����ͳ����� ����ȯ�� ����ϵ� �ٿ�ĳ������ �Ͼ�� null ���� ��� �����Ͽ� ���輺�� �˸��ϴ�
�� ����ȯ�� ����� ���� Ŭ������ �������� ������ �Ѵ�. ���� �����ڸ� virtual �Լ��� ����
*/

#include "Derived.h"

int main()
{
	// ��ĳ����
	cout << "[Upcasting Example]" << endl << endl;
	
	Base* basePtr = new Base(10, 20);
	Derived* derPtr = new Derived(30, 50);	
	basePtr->printSum(); //30
	derPtr->printSum(); //80
	
	basePtr = static_cast<Base*>(derPtr);
	cout << "After upcasting / Derived -> Base.." << endl;

	basePtr->printSum(); //80
	derPtr->printSum(); //80
	
	// �ٿ�ĳ���� ���� 1
	cout << endl << "[Downcasting Example1]" << endl << endl;
	Base* basePtr2 = new Derived(10, 20);  //Base*�� Derived ������ ����ϱ� ������ �ٿ� ĳ���� ����.
	Derived* derPtr2 = new Derived(30, 50);	
	basePtr2->printSum(); //30
	derPtr2->printSum(); //80

	cout << "After downcasting / Base -> Derived.." << endl;
	derPtr2 = static_cast<Derived*>(basePtr2); 
	
	basePtr2->printSum(); //30
	derPtr2->printSum(); //30

	// �ٿ�ĳ���� ���� 2 
	cout << endl << "[Downcasting Example2]" << endl << endl;
	Base* basePtr3 = new Base(10, 20); //Base �����ڸ� �̿��߱� ������, Derived�� m_val3, m_val4�� ���� ���� ����.
	Derived* derPtr3 = new Derived(30, 50);	
	basePtr3->printSum(); //30
	derPtr3->printSum(); //80

	cout << "After downcasting / Base -> Derived.." << endl;
	derPtr3 = static_cast<Derived*>(basePtr3);
	
	basePtr3->printSum(); //30, Base�� printSum �̿��ϱ� ������ 30�� ���.
	derPtr3->printSum(); //�̻��� �� ���. 
	
	return 0;
}

