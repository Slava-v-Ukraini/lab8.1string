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
            // ������� ��������� ���� ",-"
            string testStr = "abc,-def,-ghi,-jkl";
            int count = Count(testStr);
            Assert::AreEqual(3, count); // �� ������ 3 ����� ",-"
        }

        TEST_METHOD(TestCountNoGroups)
        {
            // ������� �������, ���� ���� ",-" ����
            string testStr = "abcdefghi";
            int count = Count(testStr);
            Assert::AreEqual(0, count); // ����� ����� ",-"
        }

        TEST_METHOD(TestChange)
        {
            // ������� ����� ",-" �� "*"
            string testStr = "abc,-def,-ghi,-jkl";
            string modifiedStr = Change(testStr);
            Assert::AreEqual(string("abc*def*ghi*jkl"), modifiedStr); // ������� �� ",-"
        }

        TEST_METHOD(TestChangeNoChanges)
        {
            // ������� �������, ���� ����� �� ������� ���������
            string testStr = "abcdefghi";
            string modifiedStr = Change(testStr);
            Assert::AreEqual(string("abcdefghi"), modifiedStr); // ����� �� ���������
        }
    };
}
