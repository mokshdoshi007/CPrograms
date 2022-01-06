#include <stdio.h>
#include <conio.h>
void main()
{
	clrscr();
	float b,h,a;
	printf("Enter Base and Height of Triangle\n");
	scanf("%f%f",&b,&h);
	a=h*b*0.5;
	printf("\nArea of Circle : %f",a);
	getch();
}