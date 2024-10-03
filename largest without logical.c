#include<stdio.h>
#include<conio.h>
int main ()
{
	int a,b,c, largest;
	printf("enter three numbers:");
	scanf("%d %d %d", &a, &b, &c);
	
	largest=a;
	
	if (b> largest)
	{
		largest=b;
	}
	if (c> largest)
	{
		largest=c;
	}
	printf("%d is the largest number: \n",largest);
	
	return 0;
}
