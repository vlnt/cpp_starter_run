#include <iostream>
#include "Dog.h"

using namespace std;

int main()
{
    Dog* dogPtr1 = new Dog("Rover", "German Shepherd");
    Dog* dogPtr2 = new Dog("Fido", "Beagle");
    cout << "using arrow member access" << endl;
    cout << dogPtr1->getName() << " - " << dogPtr1->getBreed() << endl;
    cout << dogPtr2->getName() << " - " << dogPtr2->getBreed() << endl;

    cout << endl;

    cout << "using dereferencing and dot operator" << endl;
    cout << (*dogPtr1).getName() << " - " << (*dogPtr1).getBreed() << endl;
    cout << (*dogPtr2).getName() << " - " << (*dogPtr2).getBreed() << endl;

    delete dogPtr1;
    delete dogPtr2;

    dogPtr1 = nullptr;
    dogPtr2 = nullptr;



    return 0;
}