#include "pch.h"
#include "CppUnitTest.h"
#include "../StaticLib_Calculater/StaticLib_Calculater.cpp"

#pragma comment(lib,"StaticLib_Calculater")

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace testcalculater
{
	TEST_CLASS(testcalculater)
	{
	public:
		
		Calculator* cal = new Calculator;

		TEST_METHOD(TestAdd)
		{
			Assert::AreEqual(8, cal->add(3, 5));
		}
	};
}
