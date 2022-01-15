#include <iostream>
#include "Rectangle.h"
using namespace std;

int main()
{
	const int ARR_SIZE = 3;
	Rectangle* rectPtr[ARR_SIZE];

    rectPtr[0] = new Rectangle(5, 3);
    rectPtr[1] = new Rectangle(20, 40);
    rectPtr[2] = new Rectangle(2, 10);

    for(int i = 0; i < ARR_SIZE; i++)
    {
        cout << rectPtr[i]->perimeter() << endl;
        cout << rectPtr[i]->area() << endl;
        cout << endl;
    }

    for(int i = 0; i < ARR_SIZE; i++)
    {
        delete rectPtr[i];
        rectPtr[i] = nullptr;
    }

	return 0;
}