#include "Animal.h"
#include <iostream>
using namespace std;
Animal::Animal(char *name)
{
	this->name = new char[strlen(name)+1]; // this:�ڱ��ڽ�
	strcpy_s(this->name, strlen(name)+1, name); // �Լ��� ������ name������ ������⶧���� �����������
	cout << name << "��(��) �¾��" << endl;
}

Animal::~Animal()
{
	cout << name << "��(��) ��������" << endl;

	delete[]name;
}

void Animal::Speak()
{
	cout << name << "��(��) �Ҹ�����" << endl;

}

void Animal::GoSleep()
{
	cout << name << "��(��) �ܴ�" << endl;

}

void Animal::Eat()
{
	cout << name << "��(��) �Դ´�" << endl;

}
