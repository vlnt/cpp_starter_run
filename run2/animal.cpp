#include "animal.h"
#include <iostream>

Animal::Animal(int speed)
{
    std::cout << "ANIMAL CONSTRUCTED" << std::endl;
    this->speed = speed;
}
Animal::~Animal()
{
    std::cout << "Animal destructed" << std::endl;
}
int Animal::getSpeed()
{
    return this->speed;
}