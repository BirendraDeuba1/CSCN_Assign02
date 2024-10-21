#include "pch.h"
#include "CppUnitTest.h"

extern "C" int getPerimeter(int*, int*);
extern "C" int getArea(int*, int*);
extern "C" void setLength(int input, int* length);
extern "C" void setWidth(int input, int* length);

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace BCSRecmyrectangletest
{
	TEST_CLASS(BCSRecmyrectangletest)
	{
	public:

		//unit test to get perimeter of rectangle
		TEST_METHOD(TEST_GET_PERIMETER)
		{
			int length = 4;
			int width = 5;
			int actual_result = getPerimeter(&length, &width);
			int expected_result = 18;	// 2*(4+5) = 18
			Assert::AreEqual(expected_result, actual_result);
		}

		//unit test to get area of rectangle
		TEST_METHOD(TEST_GET_AREA)
		{
			int length = 4;
			int width = 5;
			int actual_result = getArea(&length, &width);
			int expected_result = 20;	// 4*5 = 20
			Assert::AreEqual(expected_result, actual_result);
		}

		// Task 2 Test for set Length
		TEST_METHOD(TEST_SET_LEGTH_VALID)
		{
			int length = 0;
			setLength(69, &length);	//valid case: within the range
			int actual_result = length;
			int expected_result = 69;
			Assert::AreEqual(expected_result, actual_result);
		}
		TEST_METHOD(TEST_SET_LEGTH_LOW)
		{
			int length = 0;
			setLength(0, &length);	//invalid case: too low
			int actual_result = length;
			int expected_result = 0;	// length should not change
			Assert::AreEqual(expected_result, actual_result);
		}
		TEST_METHOD(TEST_SET_LEGTH_HIGH)
		{
			int length = 0;
			setLength(100, &length);	//invalid case: too high
			int actual_result = length;
			int expected_result = 0;	//length should not change
			Assert::AreEqual(expected_result, actual_result);
		}

		// Task 2 Test for set WIDTH
		TEST_METHOD(TEST_SET_WIDTH_VALID)
		{
			int length = 0;
			setLength(72, &length);	//valid case: within the range
			int actual_result = length;
			int expected_result = 72;
			Assert::AreEqual(expected_result, actual_result);
		}
		TEST_METHOD(TEST_SET_WIDTH_LOW)
		{
			int length = 0;
			setLength(0, &length);	//invalid case: too low
			int actual_result = length;
			int expected_result = 0;	//width should not change
			Assert::AreEqual(expected_result, actual_result);
		}
		TEST_METHOD(TEST_SET_WIDTH_HIGH)
		{
			int length = 0;
			setLength(100, &length);	//invalid case: too high
			int actual_result = length;
			int expected_result = 0;	//width should not change
			Assert::AreEqual(expected_result, actual_result);
		}

	};
}
