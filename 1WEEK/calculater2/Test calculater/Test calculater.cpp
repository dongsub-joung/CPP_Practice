#include "pch.h"
#include "CppUnitTest.h"
#include "../calculater2/calculater.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace Testcalculater
{
	TEST_CLASS(Testcalculater)
	{
	public:

		Calculator* cal = new Calculator;
		TEST_METHOD(TestMethod1)
		{
			int add = cal->add(3,5);
			Assert::AreEqual(8, add);
			delete cal;
		}

		TEST_METHOD(TestMethod2)
		{
			int sub = cal->sub(-1, 4);
			Assert::AreEqual(-5, sub);
			delete cal;
		}

		TEST_METHOD(TestMethod3)
		{
			int div = cal->div(4,2);
			Assert::AreEqual(2, div);
			delete cal;
		}

		TEST_METHOD(TestMethod4)
		{
			int div = cal->div(4,0);
			//Assert::AreEqual(0, div);
			delete cal;
		}

		TEST_METHOD(TestMethod5)
		{
			int fac = cal->factorial(4);
			Assert::AreEqual(24, fac);
			delete cal;
		}

		TEST_METHOD(TestMethod6)
		{
			int fac = cal->factorial(-1);
			//Assert::AreEqual(-1, fac);
			//delete cal;
		}

	};
}
