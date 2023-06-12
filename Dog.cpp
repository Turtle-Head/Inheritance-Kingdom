#include "Dog.h"
#include <iostream>
#include <string>

Dog::Dog(std::string name, std::string sound):name(name), sound(sound){}

void Dog::makeSound()
{
	std::cout << name << " says " << sound << std::endl;
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

