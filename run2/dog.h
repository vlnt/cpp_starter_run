#ifndef DOG_H
#define DOG_H
#include "animal.h"

class Dog : public Animal
{
    public:
    Dog();
    virtual ~Dog();
    void setTotalLegs(int total_legs);
    int getTotalLegs();

    void overloadedFunction();
    void overloadedFunction(int a);
    virtual int getSpeed();
    virtual void action();

    private:
    int totalLegs;
};
#endif