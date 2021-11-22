#include "pch.h"
#include "CppUnitTest.h"
extern "C"  char* checkTriangle(int side1, int side2, int side3);
extern "C" double analyzeRectangle(double x1, double y1, double x2, double y2, double x3, double y3, double x4, double y4);
extern "C"  char* analyzeTriangle(int side1, int side2, int side3);
extern "C" double checkInsideAngleOfTriangle(int side1, int side2, int side3);

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace FeatureTesting
{
	TEST_CLASS(FeatureTesting)
	{
	public:
		
		TEST_METHOD(triangle_Validation_Equilateral)
		{
			int side1=4, side2=4, side3=4;
			char expected[50] = "Equilateral triangle";
			char* outcome;
			outcome = analyzeTriangle(side1, side2, side3);
			Assert::AreEqual(expected, outcome);


		}
		TEST_METHOD(triangle_Validation_Scalene)
		{
			int side1 = 3, side2 = 4, side3 = 5;
			char expected[50] = "Scalene triangle";
			char* outcome;
			outcome = analyzeTriangle(side1, side2, side3);
			Assert::AreEqual(expected, outcome);


		}
		TEST_METHOD(triangle_Validation_Isosceles)
		{
			int side1 = 4, side2 = 4, side3 = 5;
			char expected[50] = "Isosceles triangle";
			char* outcome;
			outcome = analyzeTriangle(side1, side2, side3);
			Assert::AreEqual(expected, outcome);

		}
		TEST_METHOD(triangle_Angle_Validation)
		{
			int side1 = 3, side2 = 4, side3 = 5;
			int expected = 180;
			int outcome;
			outcome = checkInsideAngleOfTriangle(side1, side2, side3);
			Assert::AreEqual(expected, outcome);

		}

		TEST_METHOD(rectangleValidation)
		{
			double x1 = -3, y1 = 2, x2 = 4, y2 = 2, x3 = 4, y3 = -3, x4 = -3, y4 = -3;
			double expectedValue = 74;
			double sum = 0;
			sum = analyzeRectangle(x1, y1, x2, y2, x3, y3, x4, y4);
			Assert::AreEqual(expectedValue, sum);

			


		}
	
	};
}
