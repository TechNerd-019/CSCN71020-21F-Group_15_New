#include <stdio.h>
#include <stdbool.h>
#include <math.h>
#include "triangleSolver.h"
#include "rectangleSolver.h"




double analyzeRectangle(double x1, double y1, double x2, double y2, double x3, double y3, double x4, double y4) {
	
	double distance1, distance2, distance3, distance4, diagonal_distance, area, perimeter;

	distance1 = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2)); //A - B
	distance2 = sqrt(pow(x3 - x2, 2) + pow(y3 - y2, 2)); //B - C
	distance3 = sqrt(pow(x4 - x3, 2) + pow(y4 - y3, 2)); //C - D
	distance4 = sqrt(pow(x4 - x1, 2) + pow(y4 - y1, 2)); //D - A
	diagonal_distance = sqrt(pow(x3 - x1, 2) + pow(y3 - y1, 2)); //A - C

	area = distance1 * distance2;
	perimeter = (distance1 + distance2) * 2;

	printf("\nDistance between point A and point B is %.2f\n", distance1);
	printf("\nDistance between point B and point C is %.2f\n", distance2);
	printf("\nDistance between point C and point D is %.2f\n", distance3);
	printf("\nDistance between point D and point A is %.2f\n", distance4);

	printf("\nLast step to verify that it's a rectangle is to determine whether diagonal divides the rectangle into two right angle triangles");
	printf("\nDistance between point A and point C(diagonal) is %.2f\n", diagonal_distance);

	if(distance1 == distance3 && distance2 == distance4 && pow(diagonal_distance, 2) == (pow(distance1, 2) + pow(distance2, 2)))
	{
		printf("\nDistance AB is equal to Distance CD and Distance BC is equal to Distance DA");
		printf("\nThus opposite sides are equal!\n");
		printf("\nIt is a Rectangle!!\n");
		printf("\n The area of the rectangle is equal to: %.2f\n", area);
		printf("\n The perimeter of the rectangle is equal to: %.2f\n", perimeter);
	}
	else

	printf("\n The coordinates which you have entered do not form a rectangle.\n");
	double sum = pow(distance1, 2) + pow(distance2, 2);

	//created a variable sum which calculates the distance between two sides 
	//as in rectangle there are 2 right angle triangles and the sum 
	//should be equal to the sum of squares of two sides(according to pythagoras theorm).
	return sum;
}


	 
	


