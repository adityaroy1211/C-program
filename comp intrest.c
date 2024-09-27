#include<stdio.h>
#include<math.h>
#include<conio.h>
void main ()
{
	float p,r,t,a,ci;
	int n;
	printf("enter the principle: ");
	scanf("%f",&p);
	printf("enter the annual rate in percentage: ");
	scanf("%f",&r);
	printf("enter the time: ");
	scanf("%f",&t);
	a=p* pow((1+r/100),t);
	ci=a-p;
	printf("the ammount after %f is %f",a,t);
	printf("the compound intrest is %f",ci);
	
}

