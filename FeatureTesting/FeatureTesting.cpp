#include "pch.h"
#include "CppUnitTest.h"
extern "C"  char* checkTriangle(int side1, int side2, int side3);
extern "C" void analyzeRectangle(double x1, double y1, double x2, double y2, double x3, double y3, double x4, double y4);
extern "C"  char* analyzeTriangle(int side1, int side2, int side3);
extern "C"

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

		/*TEST_METHOD(rectangleAreaReturnTest)
		{
			double x1, y1, x2, y2, x3, y3, x4, y4;
			x1 = -3;
			y1 = 2;
			x2 = 4;
			y2 = 2;
			x3 = 4;
			y3 = -3;
			x4 = -3;
			y4 = -3;
			double area = 0;
			area = analyzeRectangle(-3, 2, 4, 2, 4, -3, -3, -3);

		}*/
	
	};
}
