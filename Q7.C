#include <stdio.h>
#include <conio.h>
void main()
{
	clrscr();
	float c,f;
	printf("Enter Temperature in Celsius ");
	scanf("%f",&c);
	f=c*1.8+32;
	printf("Temperature in Fahrenheit %f",f);
	getch();
}