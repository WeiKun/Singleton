#include "Singleton3.h"
#include <iostream>

class A: public Singleton<A>
{
public:
    A()
    {
        std::cout<< "A\n" << std::endl;
    }
};

int main()
{   
    return 0;
}
