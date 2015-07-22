#include "Animal.h"
#include <iostream>
using namespace std;

Animal::Animal(char *name)
{
	this->name = new char[strlen(name) + 1];
	strcpy_s(this->name, strlen(name)+1, name);
	cout << name<< "��(��) �¾��" << endl;
}
Animal::~Animal()
{
	cout << name << "��(��) �Ҹ��ߴ�" << endl;
	delete[] name;
}
void Animal::Speak()
{
	cout << name << "��(��) ���¢�´�" << endl;
}
void Animal::GoSleep()
{
	cout << name << "��(��) �ܴ�" << endl;
}
void Animal::Eat()
{
	cout << name << "��(��) �Դ´�" << endl;
}