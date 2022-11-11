//program for reversing the bits of the given number
#include<stdio.h>
void display(int number); //Function declaration
void main()
{
	int number,i; //Declaration of variables
	printf("Enter the input integer: ");
	scanf("%d\n",&number); //User input integer number
	display(number); //Function call
	printf("After reversal of bits for number %d is : \n",number);
	for(i=0;i<sizeof(int)*8;i++) // For loop to reverse the bits of an given number
	{
		if(number&(1<<i))
			printf("1 ");
		else 
			printf("0 ");
	}
	printf("\n");
}




void display(int number) //Function call to show the bits before the reversal
{
	printf("Before reversal of bits for number %d is : \n",number);
	for(int i=((sizeof(int)*8)-1);i>=0;i--)
	{
		if(number&(1<<i))
			printf("1 ");
		else
			printf("0 ");
	}
	printf("\n");
}

