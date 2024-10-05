#include<stdio.h>
#include<conio.h>
int main()
{
	float num;
	printf("enter any number:");
	scanf("%f",&num);
	if(num>0)
	{
		printf("the number positive.\n");
	}
	
	else if (num<0)
	{
		printf("the number is negetive.\n");
	}	
	else
	{
		printf("number is zero.\n");
	}
	return 0;
}
