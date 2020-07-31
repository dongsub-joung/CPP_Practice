#include "pch.h"
#include "CppUnitTest.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			Calculator cal;
			
			int test1_result = cal.add(3, 5);

			Assert::AreEqual(3+5, test1_result);
		}
	};
}
