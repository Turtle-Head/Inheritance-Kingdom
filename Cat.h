#pragma once
#include "Animal.h"
#include <string>
class Cat :
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