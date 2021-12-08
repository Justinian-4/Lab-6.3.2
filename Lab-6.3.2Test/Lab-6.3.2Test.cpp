#include "pch.h"
#include "CppUnitTest.h"
#include "../Lab-6.3.2/Lab-6.3.2.cpp"
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace Lab632Test
{
	TEST_CLASS(Lab632Test)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			const int n = 10;
			int a[n] = { -100,99,-98,97,-96,1,-2,3,-4,5 };

			int count = 0;

			int expectedCount = 5;

			Calculate(a, n, count, 0);

			Assert::AreEqual(expectedCount, count);
		}
	};
}
