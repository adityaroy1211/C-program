#include<stdio.h>
#include<conio.h>

void main()
{
	char c;
	printf("enter the character:");
	scanf("%s",&c);
	
	if((c>='a' && c<='z')  || (c>='A' && c<='Z'))
	{
		printf("it is an alphabet",c);
		
	}
	else
	{
		printf("it is not an alphabet",c);
		
	}
}
