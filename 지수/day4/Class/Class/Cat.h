#pragma once
#include "Animal.h"
class Cat :
	public Animal
{
public:
	Cat(char *name);
	~Cat();

	void Scratch();
	void Speak();
};


