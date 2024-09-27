#include<stdio.h>
#include<conio.h>
void main()
{
	int a,b,z;
	printf("enter a number",a);
	scanf("%d",&a);
	printf("enter second number",b);
	scanf("%d",&b);
	printf("before swapping a=%d and b=%d",a,b);
	z=a;
	a=b;
	b=z;
	printf("after swapping a=%d and b=%d",a,b);

}
