#include <iostream>
#include "dog.h"

int main(int argc, char** argv)
{
    Dog* dog = new Dog();
    Dog* dog2 = new Dog();
    dog->setTotalLegs(4);
    std::cout << "Total legs: " << dog->getTotalLegs() << std::endl;
    std::cout << "Speed is: " << dog->getSpeed() << " mph" << std::endl;
    dog->overloadedFunction();
    dog->overloadedFunction(5);
    dog->action();

    Animal* animal = dog;
    std::cout << "animal's peed is: " << animal->getSpeed() << " mph" << std::endl;
    animal->action();
    delete dog;
    delete dog2;

    return 0;
}