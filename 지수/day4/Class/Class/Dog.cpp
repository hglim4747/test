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
	cout << this->name << "捞(啊) 晨货甫 该绰促" << endl;
}
void Dog::Speak()
{
	cout << this->name << "港港港港" << endl;

	

}
