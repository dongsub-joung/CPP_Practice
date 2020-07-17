#include "pch.h"
#include "CppUnitTest.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace Testcalculater
{
	TEST_CLASS(Testcalculater)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			int x = 4;
			int y = 2;
			Calculator cal;
			int add = cal.add(x, y);
			Assert::AreEqual(x + y, add);
			int sub = cal.sub(x,y);
			Assert::AreEqual(x - y, sub);
			int div = cal.div(x,y);
			Assert::AreEqual(x /y, div);
			int mul = cal.mult(x,y);
			Assert::AreEqual(x * y, mul);
			int fac = cal.factorial(x);
			Assert::AreEqual(4*3*2*1, fac);
		}
	};
}
