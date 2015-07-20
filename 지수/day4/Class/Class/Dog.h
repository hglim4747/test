#pragma once
#include "Animal.h"

class Dog : public Animal  //상속 (자식 : 부모)
{
public:
	Dog(char *name);
	~Dog();

	void Dog::Smell();
	void Speak(); //Speak()상속 받았는데 또 정의 : overriding
};