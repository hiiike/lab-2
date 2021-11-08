#include "pch.h"
#include "CppUnitTest.h"
#include "E:\oop\lab2.5\lab2.5\Complex.h"
#include "E:\oop\lab2.5\lab2.5\Complex.cpp"
#include "E:\oop\lab2.5\lab2.5\Pair.h"
#include "E:\oop\lab2.5\lab2.5\Pair.cpp"
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest25
{
	TEST_CLASS(UnitTest25)
	{
	public:

		TEST_METHOD(TestMethod1)
		{
			Complex i;
			Pair  h1(4), h2(2);

			Assert::AreEqual(i.Diff_1(h1, h2), 2);
		}
	};
}
