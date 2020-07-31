#include "pch.h"
#include "CppUnitTest.h"
#include "../StaticLib_calculater/StaticLib_calculater.cpp"
#include <stdexcept>

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTestcalculater
{
	TEST_CLASS(UnitTestcalculater)
	{

	public:

		Calculator* cal = new Calculator();

			TEST_METHOD(TestMethod_ADD)
			{
				int add = cal->add(3, 5);
				Assert::AreEqual(8, add);
				delete cal;
			}

			TEST_METHOD(TestMethod_SUB)
			{
				int sub = cal->sub(-1, 4);
				Assert::AreEqual(-5, sub);
				delete cal;
			}

			TEST_METHOD(TestMethod_DIV)
			{
				int div = cal->div(4, 2);
				Assert::AreEqual(2, div);
				delete cal;
			}

			TEST_METHOD(TestMethod_DIV_ZERO)
			{
					int a = 4;
					int b = 0;
					int div = cal->div(a, b);

				try
				{
					if (b == 0) throw b;
					Assert::AreEqual(0, div);
					delete cal;
				}
				catch (const std::exception &e)
				{
					b = 1;
					Assert::AreEqual(0, div);
					delete cal;
				}
			}	

			TEST_METHOD(TestMethod_FACTORIAL)
			{
				int fac = cal->factorial(4);
				Assert::AreEqual(24, fac);
				delete cal;
			}

			TEST_METHOD(TestMethod_FACTORIAL_ZERO)
			{
				int fac = cal->factorial(-1);
				Assert::AreEqual(-1, fac);
				delete cal;
			}
		};
}