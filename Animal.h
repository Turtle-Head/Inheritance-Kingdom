#pragma once
#include <string.h>
#include <iostream>
#include <string>

class Animal
{
protected:
	std::string sound, name;
public:
	virtual void makeSound();
	virtual void getName();
	virtual void setName();
	virtual void setSound();

};

