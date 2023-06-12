#pragma once
#include "Animal.h"
#include <string>
class Cat :
	protected Animal
{
protected:
	std::string sound, name;
public:
	int meowCount;
	Cat(std::string name, std::string sound);
	virtual void makeSound();
	virtual void getName();
	virtual void setName();
	virtual void setSound();
};

