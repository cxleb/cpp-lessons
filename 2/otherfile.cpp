#include "otherfile.h"
#include <iostream>

void funcA(int a)
{
    std::cout << "Function A said: " << a << "\n";
}

void funcB(const char* b)
{
    std::cout << "Function B said: " << b << "\n";

}