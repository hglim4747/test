#include "Animal.h"
#include <iostream>
using namespace std;
Animal::Animal(char *name)
{
	this->name = new char[strlen(name)+1]; // this:자기자신
	strcpy_s(this->name, strlen(name)+1, name); // 함수가 끝나면 name변수가 사라지기때문에 복사해줘야함
	cout << name << "이(가) 태어났다" << endl;
}

Animal::~Animal()
{
	cout << name << "이(가) 없어졌다" << endl;

	delete[]name;
}

void Animal::Speak()
{
	cout << name << "이(가) 소리낸다" << endl;

}

void Animal::GoSleep()
{
	cout << name << "이(가) 잔다" << endl;

}

void Animal::Eat()
{
	cout << name << "이(가) 먹는다" << endl;

}
