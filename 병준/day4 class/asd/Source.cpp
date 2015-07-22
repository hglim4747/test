#include <iostream>
#include "Animal.h"
#include "Dog.h"
#include "Cat.h"
using namespace std;

int main(void)
{
	Animal *animal1 = new Dog("권진욱");
	Animal *animal2 = new Cat("권진욱");

	animal1->Speak();
	animal2->Speak();

	delete animal1;
	delete animal2;

	return 0;
}