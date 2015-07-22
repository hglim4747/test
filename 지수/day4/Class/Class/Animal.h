#pragma once

class Animal
{
public:
	Animal(char *name);
	virtual ~Animal(); //소멸자에 virtual ->

	virtual void Speak(); //virtual : 부모안쓰임
	void GoSleep();
	void Eat();

	char *name;
};