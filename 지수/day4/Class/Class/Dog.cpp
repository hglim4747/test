#include "Dog.h"
#include <iostream>
using namespace std;

Dog::Dog(char *name)
	:Animal(name) //initializing 
	
{

}
Dog :: ~Dog()
{

}

void Dog::Smell()
{
	cout << this->name << "��(��) ������ �ô´�" << endl;
}
void Dog::Speak()
{
	cout << this->name << "�۸۸۸�" << endl;

	

}
