#include "pch.h"
#include "CppUnitTest.h"
#include "../Lab_3.3A/BitString_PUBLIC.h"
#include "../Lab_3.3A/BitStringBase.h"
#include "../Lab_3.3A/BitString_PUBLIC.cpp"
#include "../Lab_3.3A/BitStringBase.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest33A
{
	TEST_CLASS(UnitTest33A)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			BitString_PUBLIC a, b;
			a.SetFirst(4);
			a.SetSecond(4);

			b.SetFirst(8);
			b.SetSecond(8);

			BitString_PUBLIC c = (a ^ b);
			Assert::AreEqual(c.GetFirst(), 12l);
			Assert::AreEqual(c.GetSecond(), 12l);
		}
	};
}
