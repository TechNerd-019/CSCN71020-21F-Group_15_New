#include <stdio.h>
#include <stdbool.h>
#include "triangleSolver.h"

char* checkTriangle(int side1, int side2, int side3) {
	char* resultCheck = "";
	if (side1 < side2 + side3 && side2 < side1 + side3 && side3 < side1 + side2) {
		resultCheck = "Valid triangle.\n";
		double angle1, angle2, angle3, semiPerimeter, area, pi, R;
		return resultCheck;
	}
	}


char* analyzeTriangle(int side1, int side2, int side3)
{
	char* result = "";
	if (side1 <= 0 || side2 <= 0 || side3 <= 0) 
	{
		printf("\n");
		result = "Not a triangle";
	}
	else if (side1 == side2 && side1 == side3)
	{
		printf("\n");
		result = "Equilateral triangle";
	}
	else if ((side1 == side2 && side1 != side3) ||
		(side1 == side3 && side1 != side2))
	{
		printf("\n");
		result = "Isosceles triangle";
	}
	else {
		printf("\n");
		result = "Scalene triangle";
	} return result;
}


