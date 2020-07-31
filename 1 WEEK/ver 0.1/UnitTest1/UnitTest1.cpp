#include "pch.h"
#include "CppUnitTest.h"
#include "calulator.h"
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			calulator t;

			int add= t.add(3, 5);
			Assert::AreEqual(3+5, add);
		}
	};
}