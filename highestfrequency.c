#include<stdio.h>
#include<string.h>
void main()
{
	char string[50],ch;
	int i,count=0;
	printf("enter the string\n");
	scanf("%s",string);
	printf("enter the character\n");
	scanf("%c ",&ch);
	for(i=0;i<string[i];i++)
	{
		if(string[i]==ch)
			count++;
	}
	printf("%d",count);
}
