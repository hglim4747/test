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
	cout << this->name << "이(가) 할퀸다" << endl;

}
void Cat::Speak()
{
	cout << "야야야야오오오옹" << endl;

}
