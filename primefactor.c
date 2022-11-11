//program for finding the prime factors of the given number
#include <stdio.h>
void main()
{
 int iteration1, iteration2, Number, isPrime;  //Declaration of variables
   
 printf("Please Enter any number to Find Factors :  \n");
 scanf("%d", &Number); 
 printf("The primefactor of an given number '%d' is :\n",Number);
 for (iteration1 = 2; iteration1 <= Number; iteration1++)
  { 
   if(Number % iteration1 == 0) //Condition check to find the prime factor
    {
   	isPrime = 1;     
  for (iteration2 = 2; iteration2<= iteration1/2; iteration2++)
   {
     if(iteration1 % iteration2 == 0)    // If there is no remaninder means it will break 
      {
	isPrime = 0;
	break;
       }
    } 
if(isPrime == 1)
       {			
           printf("%d  ", iteration1); //Printing the prime factor numbers
       }	          	
     }
   }
   printf("\n");

}

