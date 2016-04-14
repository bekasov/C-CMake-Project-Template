#include <iostream>

#include "SoundexConfig.h"

#ifdef USE_TESTLIB01
    #include "testlib01.h"
#endif

#include "TestClass01.h"

using namespace std;

int main()
{
    cout << "Hello, World!" << endl
        << "Version: " << APP_VERSION_MAJOR << "." << APP_VERSION_MINOR << endl;
#ifdef USE_TESTLIB01
    TestLibHello();
#endif

    TestClass01 testClass01;

    return 0;
}