#include<stdio.h>
void main()
{
	char string[50];//Declares an string
	int i,length=0;////Declaration of variables
	printf("enter the string\n");
	scanf("%s",string);//user inputs the string
	for(i=0;i<string[i];i++)//Loop to run till the last character of string
	{
		length++;
	}
	printf("the length of the given string is : %d\n",length);//printing the length 
}
