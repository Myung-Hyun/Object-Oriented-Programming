#include "Animal.h"

class Dog : public Animal
{
public:
	Dog();
	void talkStaticBinding();
	void talkDynamicBinding();
};