#include "Animal.h"
#include <iostream>

//Animal::animal(std::string name, std::string sound){}

void Animal::makeSound()
{
	std::cout << "\n" << Animal::name << " " << Animal::sound << std::endl;
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
