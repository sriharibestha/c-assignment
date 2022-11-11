#include<stdio.h>
#include<stdlib.h>
void main()
{
	int *number,iteration1,iteration2,Bits,Temp=0; //Assigning interger variable
	printf("Enter the size of an array: ");
	scanf("%d",&Bits); //User input as the size of an array
	number=(int*)malloc(Bits*(sizeof(int))); //Creating memory for the variable
	for(iteration1=0;iteration1<Bits;iteration1++)
	{
		printf("Enter the %d array :", iteration1+1);
		scanf("%d",&number[iteration1]); //Getting an input integer from the user
	}
	printf("\n");
	printf("The given array is : ");
	for(iteration1=0;iteration1<Bits;iteration1++)
	{
		printf("%d  ",number[iteration1]); //Printing the given array
	}
	printf("\n");
	for(iteration1=0;iteration1<Bits;iteration1++) //Loop1 for sorting
	{
		for(iteration2=iteration1+1;iteration2<Bits;iteration2++) //Loop 2 for sorting
		{
			if(number[iteration1]>number[iteration2]) //Checking for sorting
			{
				Temp=number[iteration1]; //Sorting an array using an temporary variable
				number[iteration1]=number[iteration2]; //Sorting the array
				number[iteration2]=Temp; //Sorting the array
			}
		}
	}
	printf("After sorting the array is:\n ");
	for(iteration1=0;iteration1<Bits;iteration1++)
	{ 
		printf("%d ",number[iteration1]); //Printing the sorted array
	}
	printf("\n");
	
}



