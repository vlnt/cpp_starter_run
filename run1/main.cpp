#include <iostream>

//Casting types and classes to each other

class Animal      
{
    public:
    Animal()
    {

    }

    virtual ~Animal()
    {

    }
};

class Dog: public Animal
{
    public:
    Dog() : Animal()
    {

    }
    virtual ~Dog()
    {

    }
    int size;
};

int main(int argc, char** argv)
{
    unsigned int i = 3561295046;
    unsigned int i1 = 65;
    unsigned char c = (char) i;
    unsigned char c1 = (char) i1;


    std::cout << "i = " << i <<std::endl;
    std::cout << "c = " << (unsigned int) c <<std::endl;

    std::cout << "i1 = " << i1 <<std::endl;
    std::cout << "c1 = " << c1 <<std::endl;


    Animal* animal = new Dog();
    Dog* dog = (Dog*) animal;
    dog->size = 7;
     std::cout << "dog.size = " << dog->size <<std::endl;
}