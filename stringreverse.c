#include<stdio.h>
#include<stdlib.h>
void main()
{
int length=0,i,Temp,bits;
char *name;
printf("Enter the bits to assign:\n"); //Assigning the number of bits
scanf("%d",&bits); //User input how many bits
name=(char*)malloc(bits*sizeof(char)); //Allocating the bits 
printf("Enter the string without space:");
//gets(name);
scanf("%s",name); //User input sring
for(i=0;name[i]!='\0';i++)
{
length++; //Calculating the length of string
}
printf("The given string is: %s\n",name); //Printing the given string
for(i=0;i<length/2;i++) //Loop for the reversal of an string
{
Temp=name[i];
name[i]=name[length-i-1];
name[length-i-1]=Temp;
}
printf("String after the reversal is: %s\n",name); //Printing the reversal string
}

