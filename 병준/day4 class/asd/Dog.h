#pragma once
#include "Animal.h"
class Dog : public Animal
{
public:
	Dog(char *name);
	~Dog();

	void Smell();
	void Speak ();

};