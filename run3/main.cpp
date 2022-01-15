#include "lib.h"
#include <iostream>
#include <string>
#include <array>
#include <sstream>

int main(int argc, char** argv)
{
    test_func();
    int y;
    int x ;
    char r = 'b';
    std::string c, res;
    std::stringstream stream;
    while(true){

        std::cin >> c;
        if ( c == "exit" ){
            std::cout << "programm exited." << std::endl;
            return false;
        }
        else{
            
            int a = (int) c[0];
            std::cout << std::hex << a  << std::endl;
        }
        
    }
    
    return 0;
}