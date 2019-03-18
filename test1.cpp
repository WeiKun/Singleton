#include "Singleton2.h"
#include <iostream>

class A: public Singleton<A>
{
};

int main()
{   
    std::cout << &A::instance << std::endl;
    return 0;
}
