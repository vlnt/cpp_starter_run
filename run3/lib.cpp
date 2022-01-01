#include "lib.h"
#include <iostream>

//the function from shared library
void test_func()
{
    std::cout << "MY TEST FUNCTION IS CALLED" << std::endl;
}