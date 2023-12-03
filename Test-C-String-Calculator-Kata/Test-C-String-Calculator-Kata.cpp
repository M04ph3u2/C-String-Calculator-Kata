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
	};
}