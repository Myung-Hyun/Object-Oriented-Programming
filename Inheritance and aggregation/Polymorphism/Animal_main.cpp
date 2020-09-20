#include <iostream>
using namespace std;

#include "Animal.h"
#include "Dog.h"
#include "Cat.h"

/* 다형성, 동적 바인딩, 가상함수

자식클래스에서 멤버함수를 재정의하여도 부모클래스 포인터변수를 통해서 자식클래스에서 재정의한 멤버함수를 호출할 수 없다.
-> 가상함수를 통한 다형성으로 해결

즉, virtual을 만들면 가상의 테이블을 만들어서 자식을 호출할 수 있다. 정적바인딩을 하면 부모 자신만 호출한다.
*/


int main()
{
	Animal* animalPtr1;
	Animal* animalPtr2;

	animalPtr1 = new Dog();
	animalPtr2 = new Cat();

	animalPtr1->talkStaticBinding(); //Animal
	animalPtr1->talkDynamicBinding(); //Dog

	animalPtr2->talkStaticBinding(); //Animal
	animalPtr2->talkDynamicBinding(); //Cat

	return 0;
}


