#include "pch.h"
#include "CppUnitTest.h"
extern "C"  char* checkTriangle(int side1, int side2, int side3);
extern "C" void analyzeRectangle(double x1, double y1, double x2, double y2, double x3, double y3, double x4, double y4);
extern "C"  char* analyzeTriangle(int side1, int side2, int side3);

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
		
		
			

		





	};
}
