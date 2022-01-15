#include <iostream>
using namespace std;
int main(int argc, char **argv){

    int *myIntPtr = new int(123);
    int *myIntPtr1 = new int(456);
    bool *myBoolPtr = new bool;
     bool *myBoolPtr1 = new bool;

    *myBoolPtr = true;
    *myBoolPtr1 = false;

    cout << boolalpha << *myBoolPtr1 << " " << myBoolPtr1 << endl;
    cout << boolalpha << *myBoolPtr << " " << myBoolPtr << endl;
    cout << *myIntPtr << " " << myIntPtr << endl;
    cout << *myIntPtr1 << " " << myIntPtr1 << endl;

    delete myIntPtr;
    delete myIntPtr1;
    delete myBoolPtr;
    delete myBoolPtr1;


    myIntPtr = nullptr;
    myIntPtr1 = nullptr;
    myBoolPtr = nullptr;
    myBoolPtr1 = nullptr;

    return 0;
}