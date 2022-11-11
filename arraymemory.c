#include <stdio.h>

void main()
{
	int *arr, arraysize,memorysize=0; // Declaration of variables

	printf("Enter the number of elements to be inserted to an array: "); // Getting an input from user as number of array
	scanf("%d", &arraysize); // User input of array

	memorysize=((sizeof(int))*(arraysize)); //Calculating the memory allocation to array
	printf("Memory allocated to the given array is %d Bytes \n",memorysize); // Printing the memory allocation to array
}

