#include "Animal.h"

class Cat : public Animal
{
public:
	Cat();
	void talkStaticBinding();
	void talkDynamicBinding();
};