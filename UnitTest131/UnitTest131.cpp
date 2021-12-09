#include "pch.h"
#include "CppUnitTest.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest131
{
	TEST_CLASS(UnitTest131)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			int a, x, n;
			x = 2;
			n = 3;
			a = x * n;
			Assert::AreEqual(a, 6);
		}
	};
}
