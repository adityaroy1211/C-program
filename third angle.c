#include<stdio.h>
#include<conio.h>
int main()
{
	int angle1,angle2,angle3;
	printf("Enter angle1");
	scanf("%d",&angle1);
	printf("Enter angle2");
	scanf("%d",&angle2);
	
	angle3 = 180 - (angle1+angle2);
	
	printf("third angle is %d",angle3);
	
	return 0;
}
	
