#pragma once

class Animal
{
public:
	Animal(char *name);
	virtual ~Animal(); //�Ҹ��ڿ� virtual ->

	virtual void Speak(); //virtual : �θ�Ⱦ���
	void GoSleep();
	void Eat();

	char *name;
};