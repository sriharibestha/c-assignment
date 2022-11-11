#include<stdio.h>
#include<stdlib.h>
void main()
{
	int *arr1,*arr2,*arr3,i,j,iteration1,iteration2;   // Declaration of variables
	printf("Enter the sizes of two arrays: ");
	scanf("%d %d",&i,&j);
	arr1=malloc(sizeof(int)*i);     // Creating a memory
	arr2=malloc(sizeof(int)*j);     // Creating a memory
	arr3=malloc(sizeof(int)*(i+j)); // Creating a memory  
	printf("Enter elements for first array:\n");
	for(iteration1=0;iteration1<i;iteration1++)   // Loop to get an input for array 1
	{
		scanf("%d",&arr1[iteration1]);
	}
	printf("Enter elements for Second array:\n");
	for(iteration1=0;iteration1<j;iteration1++)   // Loop to get an input for array 2
	{
		scanf("%d",&arr2[iteration1]);
	}
	iteration1=0;
	for(iteration2=0;iteration2<i;iteration2++)   // Merging an array 1 to array 3
	{
		arr3[iteration1]=arr1[iteration2];
		iteration1++;
	}
	for(iteration2=0;iteration2<j;iteration2++)   // Merging an array 2 to array 3
	{
		arr3[iteration1]=arr2[iteration2];
		iteration1++;
	}
	printf("After Merging both Array's: ");
	for(iteration1=0;iteration1<i+j;iteration1++)    // Printing an merged array
	{
		printf("%d  ",arr3[iteration1]);
	}
	printf("\n");
	
}

