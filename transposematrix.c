//program for printing matrix transpose
#include<stdio.h>
#define ROW 3 //Assigning row size in Macros
#define COL 3 //Assigning column size in Macros
void main()
{
	int iteration1, iteration2, matrix[ROW][COL], transpose[COL][ROW]; //Assigning integer variable and 2D array
	printf("Enter matrix with Rows and  Column: \n");
	for(iteration1 = 0; iteration1 < ROW; iteration1++)
	{
		for(iteration2 = 0; iteration2 < COL; iteration2++)
		{
			scanf("%d", &matrix[iteration1][iteration2]); //Getting an input integer from user to transpose
		}
	}
	// creating an transpose
	for(iteration1 = 0; iteration1< ROW; iteration1++)
	{
		for(iteration2 = 0; iteration2 < COL; iteration2++)
		{
			transpose[iteration2][iteration1] = matrix[iteration1][iteration2]; //Assigning the transpose to an another array
		}
	}
	printf("\nTranspose matrix is: \n");
	// printing an transpose
	for(iteration1= 0; iteration1 < COL; iteration1++)
	{
		for(iteration2 = 0; iteration2 < ROW; iteration2++)
		{
			printf("%d ", transpose[iteration1][iteration2]); //Printing an transposed array
		}
		printf("\n");
	}
	
}

