#include "TestClass01.h"
#include <iostream>

TestClass01::TestClass01()
{
    std::cout << "TestClass01 ctor" << std::endl;
}

TestClass01::~TestClass01()
{
    std::cout << "TestClass01 dctor" << std::endl;
}