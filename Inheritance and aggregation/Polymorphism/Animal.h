#ifndef ANIMAL_H
#define ANIMAL_H

class Animal
{
public:
	Animal();
	void talkStaticBinding(); //정적 바인딩
	virtual void talkDynamicBinding(); //동적 바인딩
};

#endif