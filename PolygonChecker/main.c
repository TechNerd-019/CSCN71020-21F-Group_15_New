#include <stdio.h>
#include <stdbool.h>
#include <ctype.h>
#include "main.h"
#include "triangleSolver.h"
#include "rectangleSolver.h"

int side = 0;
double x1, y1, x2, y2, x3, y3, x4, y4;
int rectangleSides = 0;
int shapeChoice;

int main() {
	bool continueProgram = true;
	while (continueProgram) {
		printWelcome();
		printShapeMenu();

		switch (shapeChoice)
		{
		case 1:
			printf_s("Triangle selected.\n");
			int triangleSides[3] = { 0, 0, 0 };
			int* triangleSidesPtr = getTriangleSides(triangleSides);
			//printf_s("! %d\n", triangleSidesPtr[0]);
			char* result = analyzeTriangle(triangleSidesPtr[0], triangleSidesPtr[1], triangleSidesPtr[2]);
			char* resultCheck = checkTriangle(triangleSidesPtr[0], triangleSidesPtr[1], triangleSidesPtr[2]);
			double anglesResult = checkInsideAngleOfTriangle(triangleSidesPtr[0], triangleSidesPtr[1], triangleSidesPtr[2]);
		    printf_s("%s\n", result);
			printf_s("%s\n", resultCheck);
			printf_s("%lf\n", anglesResult);


		case 0:
			continueProgram = false;
			break;

		case 2:
			// Input request and validation.
			printf("Enter the coordinates for A (x1, y1) - no commas, single space: ");
			if (scanf_s("%lf %lf", &x1, &y1))
			{
				printf("Enter the coordinates for B (x2, y2) - no commas, single space: ");
				if (scanf_s("%lf %lf", &x2, &y2))
				{
					printf("Enter the coordinates for C (x3, y3) - no commas, single space: ");
					if (scanf_s("%lf %lf", &x3, &y3))
					{
						printf("Enter the coordinates for D (x4, y4) - no commas, single space:  ");
						if (scanf_s("%lf %lf", &x4, &y4))
						{
							printf("Input has been validated. Function will now be executed.\n");
							analyzeRectangle(x1, y1, x2, y2, x3, y3, x4, y4);
						}
						else
						{
							printf("Invalid input.");
						}
					}
					else
					{
						printf("Invalid input.");
					}
				}
				else
				{
					printf("Invalid input.");
				}
			}
			else
			{
				printf("Invalid input.");
			}

			/*printf("Rectangle Selected.\n\n");
			double x1, x2, y1, y2, x3, y3, x4, y4;
			printf("Enter the coordinates for A (x1, y1) - no commas, single space: ");
			scanf_s("%lf %lf", &x1, &y1);
			printf("Enter the coordinates for B (x2, y2) - no commas, single space: ");
			scanf_s("%lf %lf", &x2, &y2);
			printf("Enter the coordinates for C (x3, y3) - no commas, single space: ");
			scanf_s("%lf %lf", &x3, &y3);
			printf("Enter the coordinates for D (x4, y4) - no commas, single space: ");
			scanf_s("%lf %lf", &x4, &y4);
			*/
			//analyzeRectangle(x1, y1, x2, y2, x3, y3, x4, y4);

				/*double  rectangleSides[8] = { 0, 0, 0, 0, 0, 0, 0, 0 };
				double* rectangleSidesPtr = getRectangleSides(rectangleSides);*/
				
			break;
		}
	}
	return 0;
}


void printWelcome() {
	printf_s("\n");
	printf_s(" **********************\n");
	printf_s("**     Welcome to     **\n");
	printf_s("**   Polygon Checker  **\n");
	printf_s(" **********************\n");
}

int printShapeMenu() {
	printf_s("1. Triangle\n");
	printf_s("2. Rectangle\n");
	printf_s("0. Exit\n");

	printf_s("Enter number: ");
	scanf_s("%d", &shapeChoice);

	while ((getchar()) != '\n');
	
	return shapeChoice;
}

int* getTriangleSides(int* triangleSides) {
	printf_s("Enter the three sides of the triangle: ");
	for (int i = 0; i < 3; i++)
	{
		scanf_s("%d", &triangleSides[i]);
	}
	return triangleSides;
}



