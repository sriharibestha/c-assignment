//program to find minimum and maximum element in the array
#include <stdio.h>
void main()
{
	int *arr, arraysize, iteration, min, max; // Declaration of variables

	printf("Enter the number of elements to insert in an array: "); // Getting an input from user as number of array
	scanf("%d", &arraysize); // User input of array

	for (iteration= 0; iteration < arraysize; iteration++)
	{
		printf("Enter element %d : ", iteration + 1); //Getting elements from user
		scanf("%d", &arr[iteration]); 
	}

	min = arr[0]; //Assigning arr[0] in small
	max = arr[0]; ////Assigning arr[0] in large

	for (iteration = 1; iteration < arraysize; iteration++)
	{
		if (arr[iteration] < min)
		{
			min = arr[iteration]; //Assigning the smallest number into a[0]
		}

		if (arr[iteration] > max)
		{
			max = arr[iteration]; //Assigning the Largest number into a[n-1]
		}
	}

	printf("maximum element is : %d\n", max); //Printing largest number
	printf("minimum element is : %d\n", min); //Printing smallest number


}

