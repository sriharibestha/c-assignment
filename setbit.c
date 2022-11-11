#include<stdio.h>
void main()
{
	int bitposition,number; //Variable declaration
	printf("Enter the input integer: \n");
	scanf("%d",&number); //Getting an input integer from user
	printf("Enter the bit to set: \n");
	scanf("%d",&bitposition); //Getting an position to set from user
	printf("Given input integer is : %d\n",number);
	number=(1<<bitposition-1)|number; //Setting the bit
	printf("After the %dth bit set, The output integer number is %d\n",bitposition,number); //Printing the output after the bit set

}


