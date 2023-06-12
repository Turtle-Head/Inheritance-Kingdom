#include "Cat.h"
#include <iostream>

void Cat::makeSound()
{
	std::cout << sound << std::endl;
}

void Cat::getName()
{
	std::cout << name << std::endl;
}

void Cat::setName(std::string name)
{
	this->name = name;
}

void Cat::setSound()
{
	this->sound = sound;
}
