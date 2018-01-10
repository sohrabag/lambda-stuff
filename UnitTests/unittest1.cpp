#include "stdafx.h"
#include "CppUnitTest.h"
#include <iostream>


using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTests
{		
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			// TODO: Your test code here
			Assert::AreEqual(1,1);
		}
		TEST_METHOD(TestMethod2) {
			Assert::AreNotEqual(1, 1);
		}

	};
}