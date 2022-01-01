#include <iostream>
#include "dog.h"

Dog::Dog() : Animal(30)
{
    this->totalLegs = 0;
    std::cout << "A DOG'VE BEEN CREATED!" << std::endl;
}

Dog::~Dog()
{
    std::cout << "Dog destructed." << std::endl;
}

void Dog::setTotalLegs(int total_legs)
    {
        this->totalLegs = total_legs;
    }

int Dog::getTotalLegs()
    {
        return this->totalLegs;
    }

void Dog::overloadedFunction()
{
    std::cout << "Function with no args." << std::endl;
}

void Dog::overloadedFunction(int a)
{
    std::cout << "Function with integer argument equal " << a << std::endl;
}

int Dog::getSpeed()
{
    return Animal::getSpeed();
}

void Dog::action()
{
    std::cout << "Wouf-wouf" << std::endl;
}