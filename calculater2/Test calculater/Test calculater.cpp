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
			cal.add(x, y);
			cal.sub(x,y);
			cal.div(x,y);
			cal.mult(x,y);
			cal.factorial(x);
		}
	};
}
