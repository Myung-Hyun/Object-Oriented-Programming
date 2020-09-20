#include <iostream>
using namespace std;

#include "Animal.h"

Animal::Animal()
{
	cout << "[Animal] Constructor is called!" << endl;
}

void Animal::talkDynamicBinding()
{
	cout << "[Animal] Crying!" << endl;
}

void Animal::talkStaticBinding()
{
	cout << "[Animal] Crying!" << endl;
}