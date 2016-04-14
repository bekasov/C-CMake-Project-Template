#include "CppUTest/TestHarness.h"

#include "TestClass01.h"

TEST_GROUP(FirstTestGroup)
{
};

TEST(FirstTestGroup, FirstTest)
{
    FAIL("Fail me!");
}

TEST(FirstTestGroup, SecondTest)
{
    STRCMP_EQUAL("hello", "world");
}

TEST(FirstTestGroup, ThirdTest)
{
    TestClass01 testClass01;
}