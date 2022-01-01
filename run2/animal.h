#ifndef ANIMAL_H
#define ANIMAL_H

class Animal
{
    public:
    Animal(int speed);
    virtual ~Animal();
    virtual int getSpeed();
    virtual void action() = 0;

    private:
    int speed = speed;
};

#endif