#include <stdio.h>
#include <conio.h>
void main()
{
	clrscr();
	float a,b,c=0;
	printf("Enter 2 Numbers\n");
	scanf("%f%f",&a,&b);
	c=a+b;
	printf("\nAddition : %f",c);
	c=a-b;
	printf("\nSubtraction : %f",c);
	c=a*b;
	printf("\nMultiplication : %f",c);
	c=a/b;
	printf("\nDivision : %f",c);
	getch();
}