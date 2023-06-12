#include "Cat.h"
#include <iostream>
#include <string>


Cat::Cat(std::string name, std::string sound):name(name), sound(sound){}

void Cat::makeSound()
{
	std::cout << Cat::name << " says " << Cat::sound << std::endl;
}
//
void Cat::getName()
{
	std::cout << Cat::name << std::endl;
}

void Cat::setName()
{
	this->name = name;
}

void Cat::setSound()
{
	this->sound = sound;
}

