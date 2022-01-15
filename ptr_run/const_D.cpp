#include <iostream>

using namespace std;

void noConst();
void cp2ncd();
void ncp2cd();
void cp2cd();


int main()
{
    noConst();
    cout << endl;
    cp2ncd();
    cout << endl;
    ncp2cd();
    cout << endl;
    cp2cd();

    return 0;
}

void noConst()
{
    cout << "in noConst" << endl;

    int* intPtr = new int(50);
    cout << "\torig value : " << *intPtr << endl;

    *intPtr = 100;
    cout << "\tchange data : " << *intPtr << endl;

    //delete  intPtr;

    *intPtr = 125;
    cout << "\tnew integer entirely : " << *intPtr << endl;

    delete intPtr;
}

void cp2ncd()
{
    cout << "in cp2ncd" << endl;

    int* const intPtr = new int(100);
    cout << "\torig value : " << *intPtr << endl;

    *intPtr = 250;
    cout << "\tnew integer value : " << *intPtr << endl;

    delete  intPtr;

    //*intPtr = 222; ERROR

}

void ncp2cd()
{
    cout << "in ncp2cd" << endl;

    const int* intPtr = new int(500);
    cout << "\torig value : " << *intPtr << endl;

    delete  intPtr;

    intPtr = new int(100);//ok
    cout << "\tchanged pointer : " << *intPtr << endl;


    //*intPtr = 1500; ERROR

}

void cp2cd()
{
    cout << "in cp2cd" << endl;

    const int* const intPtr = new int(50);
    cout << "\torig value : " << *intPtr << endl;

    delete  intPtr;

}

