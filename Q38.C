#include <stdio.h>
#include <conio.h>
void calc(float a, float b)
{
	float c;
	c=a+b;
	printf("\nAddition : %f",c);
	c=a-b;
	printf("\nSubtraction : %f",c);
	c=a*b;
	printf("\nMultiplication : %f",c);
	c=a/b;
	printf("\nDivision : %f",c);
}
void main()
{
	float a,b;
	clrscr();
	printf("Enter 2 Numbers\n");
	scanf("%f%f",&a,&b);
	calc(a,b);
	getch();
}

