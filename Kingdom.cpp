// Kingdom.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "Dog.h"
#include "Animal.h"
#include "Cat.h"


int main()
{
	Cat cat("Dante","Meow\n");
	Dog dog("Pablo","Bark!\n");
	cat.getName();
	cat.makeSound();
	dog.getName();
	dog.makeSound();

}

