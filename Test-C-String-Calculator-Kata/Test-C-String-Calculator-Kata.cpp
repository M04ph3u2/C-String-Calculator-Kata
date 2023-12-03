#include "pch.h"
#include "CppUnitTest.h"
#include "../add.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace TestCStringCalculatorKata
{
	TEST_CLASS(TestCStringCalculatorKata)
	{
	public:
		TEST_METHOD(TestMethodEmptyString)
		{
			Assert::AreEqual(0, add(""));
		}

		TEST_METHOD(TestMethodOneNumber)
		{
			Assert::AreEqual(1, add("1"));
		}

		TEST_METHOD(TestMethodTwoNumbers)
		{
			Assert::AreEqual(3, add("1,2"));
		}

		TEST_METHOD(TestMethodXNumbers)
		{
			Assert::AreEqual(15, add("1,2,3,4,5"));
			Assert::AreEqual(150, add("10,20,30,40,50"));
		}

		TEST_METHOD(TestMethodNewLinesBetweenNumbers)
		{
			Assert::AreEqual(6, add("1\n2,3"));
		}

		TEST_METHOD(TestMethodNewDelimetersBetweenNumbers)
		{
			Assert::AreEqual(3, add("//;\n1;2"));
		}

		TEST_METHOD(TestMethodNegativeNumbers)
		{
			try {
				add("1,4,-1");
				Assert::Fail(L"Expected exception not thrown");
			}
			catch (const std::exception& ex) {
				Assert::AreEqual("negatives not allowed: -1", ex.what());
			}
		}

		TEST_METHOD(TestMethodIgnoreBigNumbers)
		{
			Assert::AreEqual(2, add("2,1001"));
			Assert::AreEqual(8, add("1234,8,2004,3461"));
		}
	};
}