#include <stdio.h>

int findGCD(int a, int b);

void main() 
{
	int array[5],i;
	printf("Enter the array elements\n");
	for(i=0;i<5;i++)
	{
		printf("Enter the %d array :", i+1);
		scanf("%d",&array[i]); //Getting an input integer from the user
	}

	int lcm = array[0];;
	int  gcd = array[0];

	//Loop through the array and find GCD
	//Using GCD to find the LCM
	for(int i=1; i<5; i++)
	{      
		gcd = findGCD(array[i], lcm);
		lcm = (lcm*array[i])/gcd;
	}

	printf("LCM for given 'N' number is: %d\n", lcm);
	printf("GCD for given 'N' number is: %d\n",gcd);
}


//Function returns GCD of a and b
int findGCD(int a, int b)
{
	if(b==0)
	{
		return a;
	}
	return findGCD(b, a%b);
}


