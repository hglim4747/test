#pragma once
#include "Animal.h"

class Dog : public Animal  //��� (�ڽ� : �θ�)
{
public:
	Dog(char *name);
	~Dog();

	void Dog::Smell();
	void Speak(); //Speak()��� �޾Ҵµ� �� ���� : overriding
};