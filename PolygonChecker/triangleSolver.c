#include <stdio.h>
#include <stdbool.h>
#include "triangleSolver.h"

char* analyzeTriangle(int side1, int side2, int side3) {
	char* result = "";
	if (side1 <= 0 || side2 <= 0 || side3 <= 0) {
		result = "Not a triangle";
	}
	else if (side1 == side2 && side1 == side3) {
		result = "Equilateral triangle";
	}
	else if ((side1 == side2 && side1 != side3) || 
		(side1 == side3 && side1 != side2))
	{
		result = "Isosceles triangle";
	}
	else {
		result = "Scalene triangle";
	}

	return result;
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


