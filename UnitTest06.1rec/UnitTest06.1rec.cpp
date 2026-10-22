#include "pch.h"
#include "CppUnitTest.h"
#include "../PR06.1rec/FileName.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest061rec
{
	TEST_CLASS(UnitTest061rec)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			int test_arr[] = { -5, 2, 7, -4 };
			int n = 4;
			int expected = 3;
			int actual = Count(test_arr, n, 0);
			Assert::AreEqual(expected, actual);
		}
		TEST_METHOD(TestMethod2)
		{
			int test_arr[] = { -5, 2, 7, -4 };
			int n = 4;
			int expected = 4;
			int actual = Sum(test_arr, n, 0);
			Assert::AreEqual(expected, actual);
		}
		TEST_METHOD(TestMethod3)
		{
			int test_arr[] = { -5, 2, 7, -4 };
			int n = 4;
			Zero(test_arr, n, 0);

			test_arr[0];

			test_arr[1];

			test_arr[2];

			test_arr[3];

			Assert::AreEqual(0, test_arr[0]);
		}
	};
}
