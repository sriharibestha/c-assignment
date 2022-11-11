#include<stdio.h>
void main()
{
	int number,iteration1,iteration2,iteration3,count=1; //Declaration of variable
	printf("Enter the number of pascal rows to print: ");
	scanf("%d",&number); //User input for the number of rows
	for(iteration1=0;iteration1<number;iteration1++) //Loop to print the given rows
	{
		for(iteration2=1;iteration2<=number-iteration1;iteration2++) //Loop to print spaces of the triangle
			printf(" "); 
		for(iteration3=0;iteration3<=iteration1;iteration3++) //Loop to print the pascal integer
		{
			if(iteration1==0||iteration3==0)
			{
				count=1;
			}
			else
			{
				count=(count*(iteration1-iteration3+1))/iteration3; //Formula to calculate the number of columns in one row
			}
			printf("%d " ,count);
		}
		printf("\n");
	}
}


