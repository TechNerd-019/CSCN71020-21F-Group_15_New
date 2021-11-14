#include <stdio.h>
#include <stdbool.h>
#include <math.h>
#include "triangleSolver.h"
#include "rectangleSolver.h"




void analyzeRectangle(double x1, double y1, double x2, double y2, double x3, double y3, double x4, double y4) {
	
	double distance1, distance2, distance3, distance4, diagonal_distance, area, perimeter;

	printf("\nDistance between point A and point B is %.2f\n", distance1);
	printf("\nDistance between point B and point C is %.2f\n", distance2);
	printf("\nDistance between point C and point D is %.2f\n", distance3);
	printf("\nDistance between point D and point A is %.2f\n", distance4);

	printf("\nLast step to verify that it's a rectangle is to determine whether diagonal divides the rectangle into two right angle triangles");
	printf("\nDistance between point A and point C(diagonal) is %.2f\n", diagonal_distance);
	


}
	 
	


