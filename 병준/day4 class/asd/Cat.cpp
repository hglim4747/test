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
	cout << this->name << "ÀÌ(°¡) ÇÒÄý´Ù." << endl;
}

void Cat::Speak()
{
	cout << this->name << " : ÀÌ¾ß¾Æ¿Ë" << endl;
}