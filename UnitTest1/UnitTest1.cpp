#include "pch.h"
#include "CppUnitTest.h"
#include "../PR8.1string.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest
{
    TEST_CLASS(UnitTest)
    {
    public:

        TEST_METHOD(TestCount)
        {
            // Тестуємо підрахунок груп ",-"
            string testStr = "abc,-def,-ghi,-jkl";
            int count = Count(testStr);
            Assert::AreEqual(3, count); // Має знайти 3 групи ",-"
        }

        TEST_METHOD(TestCountNoGroups)
        {
            // Тестуємо випадок, коли груп ",-" немає
            string testStr = "abcdefghi";
            int count = Count(testStr);
            Assert::AreEqual(0, count); // Жодної групи ",-"
        }

        TEST_METHOD(TestChange)
        {
            // Тестуємо заміну ",-" на "*"
            string testStr = "abc,-def,-ghi,-jkl";
            string modifiedStr = Change(testStr);
            Assert::AreEqual(string("abc*def*ghi*jkl"), modifiedStr); // Замінено всі ",-"
        }

        TEST_METHOD(TestChangeNoChanges)
        {
            // Тестуємо випадок, коли нічого не потрібно замінювати
            string testStr = "abcdefghi";
            string modifiedStr = Change(testStr);
            Assert::AreEqual(string("abcdefghi"), modifiedStr); // Рядок не змінюється
        }
    };
}
