#include "Cat.h"
#include "Dog.h"
#include "Cat.h"
#include "Animal.h"
#include <list>

void main()
{
	list <Animal*> ani;

	for (int i = 0; i < 5; i++)
	{
		ani.push_back(new Dog("�˰�"));
	}
	for (int i = 0; i < 5; i++)
	{
		ani.push_back(new Cat("������"));
	}

	for (auto iter = ani.begin(); iter != ani.end(); iter++)
	{
		(*iter)->Speak();
	}
	
	for (auto iter = ani.begin(); iter != ani.end();)
	{
		delete (*iter);
		iter = ani.erase(iter);
	}
	
}