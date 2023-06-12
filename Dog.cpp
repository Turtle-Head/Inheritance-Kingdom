#include "Dog.h"
#include <iostream>
#include <string>

void Dog::makeSound()
{
	std::cout << sound << std::endl;
}

void Dog::getName()
{
	std::cout << name << std::endl;
}

void Dog::setName(std::string name)
{
	this->name = name;
}

void Dog::setSound()
{
	this->sound = sound;
}

