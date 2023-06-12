#pragma once
#include <string.h>
#include <iostream>
#include <string>

class Animal
{
protected:
	std::string sound, name;
public:
	Animal animal(std::string name, std::string sound);
	virtual void makeSound();
	virtual void getName();
	virtual void setName();
	virtual void setSound();

};

