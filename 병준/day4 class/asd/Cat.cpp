#include "Cat.h"
#include <iostream>
using namespace std;

Cat::Cat(char *name)
	:Animal(name)
{

}


Cat::~Cat()
{

}


void Cat::Scratch()
{
	cout << this->name << "��(��) ������." << endl;
}

void Cat::Speak()
{
	cout << this->name << " : �̾߾ƿ�" << endl;
}