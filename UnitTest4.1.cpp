#include "pch.h"
#include "CppUnitTest.h"
#include "../Lab4.1/ComplexNumber.h"
#include "../Lab4.1/ComplexNumber.cpp"

#include "../Lab4.1/Abstract.cpp"


using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest42
{
	TEST_CLASS(UnitTest42)
	{
	public:

		TEST_METHOD(TestMethod1)
		{
			ComplexNumber A(1, 2);
			Assert::AreEqual(A.Norma(), 5.);
		}
	};
}
