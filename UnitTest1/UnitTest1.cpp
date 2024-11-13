#include "pch.h"
#include "CppUnitTest.h"
extern "C" {
#include "../RR8.1it.cpp"
}

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTestForStringFunctions
{
    TEST_CLASS(UnitTestForStringFunctions)
    {
    public:

        // Тест для функції Count
        TEST_METHOD(TestCount)
        {
            char testStr1[] = "hello,-hello,-";
            Assert::AreEqual(2, Count(testStr1));
        }

        // Тест для функції Change
        TEST_METHOD(TestChange)
        {
            char testStr1[] = "hello,-hello,-";
            char expected1[] = "hello*hello*";
            char* result1 = Change(testStr1);
            Assert::AreEqual(expected1, result1);
            delete[] result1;
        }
    };
}
