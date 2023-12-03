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
	};
}