#pragma once

class Animal
{
public:
	Animal(char *name);
	~Animal();

	virtual void Speak();
	void GoSleep();
	void Eat();

	char *name;
};