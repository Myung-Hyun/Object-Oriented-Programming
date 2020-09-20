#include <iostream>
using namespace std;

#include "Cat.h"

Cat::Cat()
{
	cout << "[Cat] Constructor is called!" << endl;
}

void Cat::talkStaticBinding()
{
	cout << "[Cat] Meow!" << endl;
}

void Cat::talkDynamicBinding()
{
	cout << "[Cat] Meow!" << endl;
}