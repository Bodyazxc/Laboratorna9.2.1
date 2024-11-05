#include "pch.h"
#include "CppUnitTest.h"
#include "../Laboratorna9.2.1/Laboratorna9.2.1.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest921
{
	TEST_CLASS(UnitTest921)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			int x, y, z;
			float w;

			x = 3; y = 4; z = 5; 
			int maxValue = MAX(x + y, x + z);
			w = (float)SQR(maxValue);
			Assert::AreEqual(49, 5, w);
		}
	};
}
