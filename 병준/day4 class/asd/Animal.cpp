#include "Animal.h"
#include <iostream>
using namespace std;

Animal::Animal(char *name)
{
	this->name = new char[strlen(name) + 1];
	strcpy_s(this->name, strlen(name)+1, name);
	cout << name<< "이(가) 태어났다" << endl;
}
Animal::~Animal()
{
	cout << name << "이(가) 소멸했다" << endl;
	delete[] name;
}
void Animal::Speak()
{
	cout << name << "이(가) 울부짖는다" << endl;
}
void Animal::GoSleep()
{
	cout << name << "이(가) 잔다" << endl;
}
void Animal::Eat()
{
	cout << name << "이(가) 먹는다" << endl;
}