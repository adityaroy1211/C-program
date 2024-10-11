#include<stdio.h>
int main()
{
	int a,b;
	char ch;
	printf("enter two numbers");
	scanf("%d %d" ,&a ,&b);
	printf("enter the operators:(+,-,*,/)");
	scanf(" %c",&ch);
	switch (ch)
	{
		case'+': printf("%d",a+b);
		break;
		case'-': printf("%d",a-b);
		break;
		case'*': printf("%d",a*b);
		break;
		case'/': printf("%d",a/b);
		break;
	default:
		printf("invalid operator");
		
	}	
	return 0;
}
