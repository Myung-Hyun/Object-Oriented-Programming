#include <iostream>
using namespace std;

#include "Derived.h"

int main()
{
	Base baseObj(10, 20);
	Derived derObj(30, 50, 70, 90);
	
	baseObj.printSum(); //10+20 = 30
	derObj.printSum();  // 70+90 = 160

	baseObj = derObj; //derObj = baseObj는 에러난다.
	
	cout << endl << "After assign derived object to base object.." << endl << endl;
	baseObj.printSum(); // 30+50 = 80
	derObj.printSum(); // 70+90 = 160

	return 0;
}
