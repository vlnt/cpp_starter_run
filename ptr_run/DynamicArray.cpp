#include <iostream>

using namespace std;

int main()
{
    int ARR_SIZE;

    cout << "Enter the size of the array:" << endl;
    cin >> ARR_SIZE;

    int* myArray = new int[ARR_SIZE];

    for(int i = 0; i < ARR_SIZE; i++)
    {
        myArray[i] = i * 2;
    }

     for(int i = 0; i < ARR_SIZE; i++)
    {
        cout << myArray[i] << endl;
    }

    delete[] myArray;
}