#include<stdio.h>
#include<conio.h>
void main()
{
    float celsius,fahrenhiet;
    printf("enter temperature in celsius: ");
    scanf("%f",&celsius);
    fahrenhiet=(celsius*9/5)+32;
    printf("%f celsius is equal to %f fahrenheit\n",celsius,fahrenhiet);
    

}
