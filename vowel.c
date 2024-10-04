#include<stdio.h>
#include<conio.h>
int main ()
{
	char p;	
	printf("enter any alphabet");
	scanf("%c",&p);
	if(p=='A'||p=='a'||p=='E'||p=='e'||p=='I'||p=='i'||p=='O'||p=='o'||p=='U'||p=='u')
	{
		printf("it is an vowel",p);
	}
		else if ((p>='a' && p<='z') || (p>='A' && p<='Z'))
		{
			printf("it is a constant");
		
		}
		return 0;
	}
	
