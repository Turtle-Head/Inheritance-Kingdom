#pragma once
#include "Animal.h"
class Dog :
    protected Animal
{
protected:
	std::string sound, name;
public:
	virtual void makeSound();
	virtual void getName();
	virtual void setName(std::string name);
	virtual void setSound();
};

