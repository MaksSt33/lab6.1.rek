#include "pch.h"
#include "CppUnitTest.h"
#include "../lab6.1rek/lab6.1rek.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest61rec
{
	TEST_CLASS(UnitTest61rec)
	{
	public:
		TEST_METHOD(TestSumElements)
		{
			const int n = 5;
			int t[n] = { -12, 5, -6, 15, 18 };

			int expected_sum = -18;

			int actual_sum = Sum(t, n, 0);

			Assert::AreEqual(expected_sum, actual_sum);
		}

		TEST_METHOD(TestCountElements)
		{
			const int n = 5;
			int t[n] = { -12, 5, -6, 15, 18 };

			int expected_count = 2;

			Num(t, n, 0);

			Assert::AreEqual(expected_count, Num(t, n, 0));
		}

		TEST_METHOD(TestReplaceElements)
		{
			const int n = 5;
			int t[n] = { -12, 5, -6, 15, 18 };

			Replace(t, n, 0);

			Assert::AreEqual(0, t[0]);
			Assert::AreEqual(5, t[1]);
			Assert::AreEqual(0, t[2]);
			Assert::AreEqual(15, t[3]);
			Assert::AreEqual(18, t[4]);
		}
	};
}