#include "Animal.h"
#include <iostream>
void Animal::makeSound()
{
	std::cout << "\n\n" << Animal::name << "Makes sound" << std::endl;
}

void Animal::getName()
{
	std::cout << Animal::name << std::endl;
}

void Animal::setName()
{
	this->name = name;
}

void Animal::setSound()
{
	this->sound = sound;
}
